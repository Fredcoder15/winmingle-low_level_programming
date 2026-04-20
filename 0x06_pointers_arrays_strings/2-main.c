#include "main.h"
#include <stdio.h>

int main(void)
{
 char s1[98];
 char s2[] = "First solve the problem, then write the code";

  int i;
  for (i = 0; i < 97; i++){
      s1[i] = '*';
  }
     s1[i] = '\0';
  
 printf("%s\n", s1);

 _strncpy(s1, s2, 5);

 printf("%s\n", s1);

 _strncpy(s1, s2, 90);
							
 printf("%s", s1);
									 return (0);
}
