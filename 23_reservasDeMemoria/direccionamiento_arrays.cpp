#include <stdio.h>
#include <stdlib.h>

void meterValores_enMatriz(int *matriz, int fila, int col , int dato){//coloca los valores en la matriz



}

int imprimirMatriz(int *matriz, int fila, int col){//devuelve los valores cambiados y los muestra por pantalla
    int dato;





    return dato;
}
int main (int argc const char ** argv){

    int *a = NULL;
    int filas, col;
    printf("Indica la posicion a la que deseas saltar: ");
    scanf(" %i%i",filas,col);
    for (int f=0; f<filas; f++)
        for(int c=0;c<col;c++){
            printf("(%i, %i)",f+1,c+1);
            scanf(" %i",&entrada);//se guarda temporalmente para que posteriormente sea enviada a la cola de datos
           meterValores_enMatriz(a,f,c,entrada);
        }
    //imprimir la matriz usando get
    imprimirMatriz();
    //se libera espacio para la memoria de a




    return EXIT_SUCCESS;

}

