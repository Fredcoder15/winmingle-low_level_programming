/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Splits a string into separate words.
 */

#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to examine
 *
 * Return: Number of words
 */
static int count_words(char *str)
{
    int i = 0;
    int count = 0;

    /* Count a word when a non-space character is followed by
     * a space or the end of the string.
     */
    while(str[i] != '\0')
    {
    if(str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
    {
      count++;
    }
    i++;
    }
    return(count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Array of words, or NULL on failure
 */
char **strtow(char *str)
{
    int i = 0;
    int j;
    int k = 0;
    int start;
    int word_len;
    int words_count;
    char **words;

    /* Reject a NULL pointer or an empty string. */
    if(str == NULL || str[0] == '\0')
    {
    return(NULL);
    }

    /* Count the words so we know how many pointers to allocate. */
    words_count = count_words(str);
    if(words_count == 0)
    {
    return(NULL);
    }

    /* Allocate space for all word pointers and one final NULL. */
    words = malloc((words_count + 1) * sizeof(char *));
    if(words == NULL)
    {
    return (NULL);
    }

    /* Move through the original string, extracting one word at a time. */
    while(str[i] != '\0')
    {
      /* Skip spaces before the beginning of the next word. */
      while(str[i] == ' ')
      {
         i++;
      }

        /* Stop if we have reached the end after skipping spaces. */
      if(str[i] == '\0')
      {
      break;
      }

        /* Remember where the current word begins. */
      start = i;
      word_len = 0;

        /* Count the characters in the current word. */
      while(str[i] != ' ' && str[i] != '\0')
      {
      word_len++;
      i++;
      }

        /* Allocate enough memory for this word and its '\0'. */
      words[k] = malloc((word_len + 1) * sizeof(char));
      /* If allocation fails, free all previously allocated words. */
      if(words[k] == NULL)
      {
      while(k > 0)
      {
      k--;
      free(words[k]);
      }
      free(words);
      return (NULL);
      }
      /* Copy the current word from the original string. */
      for(j = 0; j < word_len; j++)
      {
      words[k][j] = str[start + j];
      }
      /* End the copied word and move to the next array position. */
      words[k][j] = '\0';
      k++;
    }

    /* Mark the end of the array of words with a NULL pointer. */
    words[k] = NULL;
    return(words);
}
