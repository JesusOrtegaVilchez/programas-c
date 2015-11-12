#include <stdio.h>
#include <stdlib.h>

int main()
{
        /*int saldo;
        int dia,mes,anio;*/
        char name [0x20];

        //printf("Cuanto dinero tienes?\n ");
       // printf("yo = <cantidad>\n");

        //scanf(" yo=%i",&saldo);
        //printf("saldo: %i\n", saldo);

        printf("Tell me your name: ");
        gets(name);
        printf("%s and I´ll make you"
               "the queen of a"
               "rose garden.\n",name);

        return EXIT_SUCCESS;
}
