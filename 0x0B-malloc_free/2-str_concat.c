#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2){
int len1 = 0;
int len2 = 0;
char *new;

if(s2 == NULL){
  return ("");
}

if (s2 == NULL){
  return("");
}

while(s1[len1]){
    len1++;
}

while(s2[len2]){
    len2++;
}

new = malloc((len1 + len2 + 1) * sizeof(char));

if (new == NULL){
  return (NULL);
}

//returning back to zero because they were no longer zeroes.Very important. 

len1 = 0;
len2 = 0;

while(s1[len1]){
 new[len1] = s1[len1];
	 len1++;
}

while(s2[len2]){
 new[len1 + len2] = s2[len2];
 len2++;
}
 new[len1 + len2] = '\0';

return (new);

}
