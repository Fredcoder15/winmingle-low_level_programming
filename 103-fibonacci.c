#include <stdio.h>
#include <stdio.h>
int main(void){
	unsigned long int f=1, r=2, next;

	unsigned long int sum=0;
	
   while( r < 4000000){
     if (r  % 2 == 0){
      sum +=r;
	 }
	 next = f + r;
	 f = r;
	 r = next;
   }
     printf("%lu\n", sum);
	 return(0);
}
