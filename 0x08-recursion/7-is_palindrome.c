#include "main.h"

int _strlen_recursion(char *s){
   if (*s == '\0'){
    return(0);
   }
   
   return (1 + _strlen_recursion(s+1));
}

int palindrome_helper(char *s, int start, int end){
     if (start >= end){
        return(1);
	 }

	 if(s[start] != s[end]){
       return(0);
	 }

 return (palindrome_helper(s, start + 1, end - 1));
}


int is_palindrome(char *s){
 int len;

 len = _strlen_recursion(s);

 return(palindrome_helper(s, 0, len - 1));
}
