#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **agrv)
{

    int resultado,resultado1;
    int entrada;
    //desarrollar un programa que imprima un numero por unidades decena y centenas en ese orden y que pida por pantalla el numero entre 0 y 999//
    printf("Escriba un numero entero entre 0 y 999: ");//pides por pantalla el numero entre 0 y 999
    scanf(" %i",&entrada); // coges el numero de entrada y lo guardas en una variable entera
    printf(" %i=unidades", entrada%10);//para obtener el primer valor,calculamos el modulo 10 del valor suponiendo que es de 3 digitos
    resultado = entrada/10;// para obtener el segundo valor redirijo el ultimo valor de entrada a otra variable entera para no perdersu valor

    printf(" %i=decenas",resultado%10);//con ese ultimo valor realizamos el modulo nuevamente para obtener el valor de las decenas
    resultado1= resultado/10;//redijo el ultimo valor a otra variable entera para no perder ese valor 
    printf(" %i=centenas\n",resultado1%10);//al segundo valor le hago el modudlo para obtener las centenas 

    return EXIT_SUCCESS;

}
