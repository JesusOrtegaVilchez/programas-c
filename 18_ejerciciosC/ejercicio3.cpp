#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado;//variable que guardara el numero de filas y columnas que va a tener 
    printf("Escribe el valor del lado: ");
    scanf(" %i",&lado);
    for(int fila=0;fila<=lado;fila++){//primer bucle que se ejecutara tantas veces como sea el valor de lado    
        for(int col=0; col<=lado;col++)//segundo bucle que se ejecutara tantas veces como valga lado
            if(fila>col){ 
                printf("x ");//imprimimos * cada vez que las filas sea mayor que las columnas, para conseguir la forma del triangulo 
            }
        printf(" \n");//salto de linea para que imprima en cada fila un asterisco más
    }

    return EXIT_SUCCESS;
}


