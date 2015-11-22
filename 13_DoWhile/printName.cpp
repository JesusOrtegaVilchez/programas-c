#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **agrv)
{

    int numero=0;
    char nombre [10];
   
    do {
        printf("\nEscriba el número que desea escribir su nombre: ");
        scanf("%i", &numero);
        if (numero!=0)
       {
           printf("\nEscriba su nombre: ");
           scanf(" %s",nombre);
            printf("Tu nombre es: \n");
           for(int i=0; i<numero; i++)
           {
               printf(" %s ,",nombre);
           }
       }
        else
            if(numero ==0)
            {
                printf("No estoy autorizado a hacer eso\n");
            }

    } while(numero == 0);
        printf("\n");
        return EXIT_SUCCESS;

}
