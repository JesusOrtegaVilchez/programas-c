#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **agrv)
{
/* & and
   | or
   ~ not
   ^ XOR
*/

     int a;

     printf("Escriba en numero que desea convertir: ");
     scanf(" %i",&a);
     printf(" %X - %i - %u - %x - %i\n",a, a, ~a, ~a, ~a);

    return EXIT_SUCCESS;

}
