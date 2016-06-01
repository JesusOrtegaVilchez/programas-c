#include <stdio.h> 
#include <stdlib.h>

#define Nelementos 9


int main(int argc, const char **argv){

    int i,j; //Variables contadoras del ciclo.
    int lista[Nelementos]={3,7,1,9,2,1,4,2,5}; //Declaracion e inicializacion de un arreglo de 4 elementos.
    int temp=0;             //Variable temporal.

    for (i=1;i<Nelementos;i++)
    {
        for (j=0; j <= Nelementos-1 ;j++) // for(j=0; j < Nelementos-1; j++) es menor y no menor igual
        {
            if (lista[j] > lista[j+1])//Condicion mayor-menor si quieres de menor-mayor solo haz la condicion al contrario
            {
                temp=lista[j];
                lista[j]=lista[j+1];
                lista[j+1]=temp;
            }
        }
    }


    printf("\nLos valores ORDENADOS de lista son: \n");
    for(i=0;i<Nelementos;i++)
            printf("%i",lista[i]);
             printf("\n");
    return EXIT_SUCCESS;
    //siguiente programa que escriba un numero en binario de manera recursiva
}
