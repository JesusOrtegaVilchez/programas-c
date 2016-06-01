#include <stdio.h>
#include <stdlib.h>

#define N 7

int mediana (){
    return N/2;
}
int main(int argc, const char **argv){
    int posicion;
    int numero[N]={1,2,3,4,5,6,7};
    posicion = mediana();
    printf("El valor de la mediana es: %i\n",numero[posicion]);
    return EXIT_SUCCESS;

}
