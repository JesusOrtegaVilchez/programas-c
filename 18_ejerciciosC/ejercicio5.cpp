#include <stdio.h>
#include <stdlib.h>

int main()
{
    int altura,j;//variables altura y auxiliar
    printf("Introduce el valor de la altura: ");
    scanf(" %i", &altura);//obtenemos el valor de altura
    for(int fila=1;fila<=altura;fila++){//buble para generar tantas filas como altura tenga
        for(int col=1;col<=altura;col++){//bucle para generar tantas columnas como altura tenga
            if((col==1)||(col==altura)||(fila==altura)||(fila==1))//condicion para que se ejecute correctamente el cuadrado vacio
                printf("+");//en cada punto donde sea igual a 1 tanto filas como columnas o las filas y las columnas sean iguales a la altura se imprimira un +
            else
                printf(" ");//en los casos donde no se cumpla, que sera dentro del cuadrado se dejara en blanco
        }
        printf("\n");//salto que es necesario para que se genere correctamente el cuadrado, se ejecuta cada vez que se realiza un recorrido en el bucle

    }
}
