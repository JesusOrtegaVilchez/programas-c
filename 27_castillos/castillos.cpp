#include <stdio.h>
#include <stdlib.h>


int main()
{


    int i = 0;
    double valores[4];
    int contador = 0;
    double resul = 0;

    while (contador != 4) {
        printf("Introduce el valor de los numeros a sumar: ");
        scanf(" %lf", &valores[i]);
        contador++;
        i++;
    }

    printf("\nHas introducido %i numeros\n", contador);
    for (int i = contador; i > 0; i--) {
        printf("\nEl valor de N es: %.2lf\n", valores[i-1]);
    }
    resul = 1. / valores[contador]; 
    resul += valores[contador-1];
    for (int k = contador-2; k >= 0; k--) {
        resul = valores[k] + 1 / resul;
    }
        printf("\nOperacion:\t%.2lf\n\n", resul);
   

    return 0;
}


