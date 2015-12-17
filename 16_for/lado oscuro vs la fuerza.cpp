#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado;
    printf("Escribe el valor del lado: ");
    scanf(" %i",&lado);
    for(int fila=1;fila<lado;fila++){
        for(int col=0; col<lado;col++)
            if (fila>col)       
                printf("x ");
            else                
                printf("* ");		
        printf(" \n");
    }

    return EXIT_SUCCESS;
}
