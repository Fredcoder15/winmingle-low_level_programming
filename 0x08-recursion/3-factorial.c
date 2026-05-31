#include "main.h"
/* This recursive function has two base cases*/

int factorial(int n){
// This is the first base case
if (n < 0){
  return (-1);
}

//second base case
 if (n == 0){
  return(1);
  //This is because the factorial of zero is 1
 }

return (n * factorial(n - 1));
}
