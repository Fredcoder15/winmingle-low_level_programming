#include "main.h"

int helper(int n, int divisor){
   if(divisor == n){
    return(1);
   }

   if (n % divisor == 0){
     return(0);
   }

   return helper(n, divisor + 1);
}



int is_prime_number(int n){
   if (n <= 1){
      return(0);
   }

   return (helper (n, 2));
}
