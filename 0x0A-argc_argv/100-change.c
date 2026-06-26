#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
int cents = atoi(argv[1]);
int coins = 0;

// for zero cents and below
if(cents < 0){
  printf("0\n");
  return(0);
}

// Argc must be 2 beecause program name is 1 and then number of cents 2. we cannot and donot want two cents because we are attending to one person to give change
//
if(argc != 2){
  printf("Error\n");
  return(1);
}

if(cents >= 25){
  cents -= 25;
  coins++;
}

if (cents >= 10){
  cents -= 10;
  coins++;
}

if (cents >= 5){
 cents -= 5;
 coins++;
}

if (cents >= 2){
   cents -= 2;
   coins++;
}

if (cents >= 1){
   cents -= 1;
   coins++;
}

printf("%d\n", coins);

return(0);

}
