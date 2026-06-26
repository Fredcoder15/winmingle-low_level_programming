#include "main.h"
#include <stdlib.h>

int count_words(char *str){
 int i = 0;
 int count = 0;

 while(str[i]){
     if(str[i] != ' ' && (str[i + 1] ==' ' || str[i + 1] == '\0')){
     count++;
	 }
	 i++;
 }
    return (count);
}

char **strtow(char *str){
int i = 0;
int k = 0;
int j;
char **words;
int words_count;
int word_len = 0;
int start;

//safety control for input strings

if(str == NULL || str[0] == '\0'){
   return(NULL);
}

words_count = count_words(str);

   //Safety control
if(words_count == 0){
   return (NULL);
}

 words = malloc((words_count + 1) * sizeof(char *));

 //Safety control for array of pointers
 
 if (words == NULL){
   return (NULL);
 }

while (str[i]){
     
	while (str[i] == ' '){
      i++;
         }
    
	if(str[i] == '\0'){
     break;
	}

   start = i;

   word_len = 0;

   while(str[i] != ' ' && str[i] != '\0'){
      word_len++;
	  i++;
   }

   // safety control for word's length

   if(word_len == 0){
      return(NULL);
   }

   words[k] = malloc((word_len + 1) * sizeof(char));

   // safety control of words

   if(words[k] == NULL){
      while ( k > 0){
         k--;
	     free(words[k]);
	  }

	  free(words);
	  return (NULL);
   }

 //copying the words into their pointers addreses.
 
   for (j = 0; j < word_len; j++){
     words[k][j] = str[start + j];
   }

   words[k][j] = '\0';

   k++;
}

words[k] = NULL;

return (words);
}
