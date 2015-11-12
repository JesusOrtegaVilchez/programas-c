#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
   for(int veces=0; veces<80; veces++){
    printf("\r");
    printf("8");
   for(int i=0; i<veces;i++)
        printf("=");
    printf("D\n");
   sleep(0.25);
   }
    return EXIT_SUCCESS;
}
