#include <stdio.h>
#include <stdlib.h>

int main(){
    int N=5;
    int i=0;
    float valores[N];
    float resultado=0;
    //float buffer
//float aux;
    int contador=0;
    while(contador != N){
    printf("introduce el valor de los numeros a sumar: ");

        scanf("%f",&valores[i]);
        contador++;
        i++;
    }
    //valorres+=valor;
    printf("has introducido: %i numeros \n", contador);
    for(i=0;i<N;i++){

    if(valores[i]==N){
            valores[i]+= (1 / valores[i]);
            i--;
            //printf("el valor de la fraccion es: %2f \n",valores[i-1]);
            valores[i] += (1 / valores[i]);
            i--;
            valores[i] += (1/valores[i]);
            i--;
            valores[i] += (1/valores[i]);
            i--;
            valores[i] += (1/valores[i]);
            i--;
            //printf("el valor de la fraccion es: %2f\n",valores[i]-1);
    }
    else
        printf("la fraccion conttinua vale: %2f\n", valores[i]-1);

}
    return 0;

}
