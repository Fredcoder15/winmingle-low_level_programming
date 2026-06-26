#include <stdio.h>

int main(int argc, char *argv[]){
 (void)argc;//compiler will complain about me not using argc, so i voided it because it is necessary that it must be there.

 printf("%s\n", argv[0]);

 return(0);
}
