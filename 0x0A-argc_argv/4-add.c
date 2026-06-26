#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
int i = 1;
int j;
int sum = 0;

if (argc == 1){
    printf("0\n");
	return(1);
}
 
// going through the array of arguments 

while(i < argc){
    j = 0;

    //checks the characters in each arguements for non-integers. 
	
	while(argv[i][j] != '\0'){
      if (argv[i][j] < '0' || argv[i][j] > '9'){
       printf("Error\n");
	   return(1);
	  }
		j++;
	}
      sum = sum + atoi(argv[i]);
      i++;
}
      printf("%d\n", sum);
      return(0);
}
