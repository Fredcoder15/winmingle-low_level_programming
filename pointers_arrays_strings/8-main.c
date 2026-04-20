#include "main.h"

int main(void){
   int  myArr [ ] = {98, 402, -198, 298, -1024, 45, 60};

   int size = sizeof(myArr)/sizeof(myArr[0]);

   print_array(myArr, size);

   return(0);

}
