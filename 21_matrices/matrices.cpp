#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int af, ac, bf, bc, i=0, j=0, k=0;
    printf("Numero de filas la matriz  A: ");
    scanf("%i", &af);
    printf("Numero de columnas de la matriz  A: ");
    scanf("%i", &ac);
    printf("Numero de filas de la matriz B: ");
    scanf("%i", &bf);
    printf("Numero de columnas de la matriz  B: ");
    scanf("%i", &bc);
    if(ac!=bf){
        printf("no es posible hacer la multiplicación\n");
        return EXIT_SUCCESS;
    }
    int A[af][ac], B[bf][bc], C[af][bc]; /*para cargar los valores*/
    for(i=0;i<af;i++){
        for(j=0;j<ac;j++){
            printf("Escribe el valor de la matriz 1 (%i, %i): ",i+1, j+1);
            scanf("%i", &A[i][j]);
        }
    }
    printf("\n\n");
    for(i=0;i<bf;i++){
        for(j=0;j<bc;j++){
            printf("Escribe el valor de la matriz 2 (%i, %i): ", i+1, j+1);
            scanf("%i", &B[i][j]);
        }
    }

    for(i=0;i<af;i++){
        for(j=0;j<bc;j++){
            C[i][j]=0;
            for(k=0;k<ac;k++){
                C[i][j]=(C[i][j]+(A[i][k]*B[k][j]));
            }
        }
    }

    /*para imprimir la matriz*/
    printf("\n\n Matriz A");
    printf("\n");
    for(i=0;i<af;i++){
        printf("\n");
        for(j=0;j<ac;j++){
            printf("%3i", A[i][j]);
        }
    }
    printf("\n\n Matriz B");
    printf("\n");
    for(i=0;i<bf;i++){
        printf("\n");
        for(j=0;j<bc;j++){
            printf("%3i", B[i][j]);
        }
    }

    printf("\n\n Matriz C");
    printf("\n");
    for(i=0;i<af;i++){
        printf("\n");
        for(j=0;j<bc;j++){
            printf(" %3i", C[i][j]);
        }
    }
    printf("\n\n");

    return EXIT_SUCCESS;



}

