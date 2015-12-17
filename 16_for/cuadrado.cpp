#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado,filas;
    printf("Escribe el valor de las filas: ");
   scanf(" %i",&lado);
   printf("Escribe el valor de las columnas: ");
       scanf("%i",&filas);
    for(int i=0;i<lado;i++){
        for(int d=0; d<filas;d++)
            printf("x ");
                printf(" \n");
    }
        
    return EXIT_SUCCESS;
}
