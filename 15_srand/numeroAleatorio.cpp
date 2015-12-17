#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero, pensado;
    printf("Estoy pensando un numero\n");
    printf("Intenta Adivinarlo\n");
    srand (time(NULL));
    pensado =rand()%10+1;

    do{
        printf("Numero: ");
        scanf(" %i", &numero);
        //printf("Has acertado maquina puto amo\n");

    } while(numero!=pensado);
        printf("HAS ACERTADO");
    return EXIT_SUCCESS;
}
