#include <stdio.h>
#include <stdlib.h>

#define BASE 8
int main(int argc, char **agrv)
{

    int resultado,resultado1,resultado2,numeroEnOctal;
    int entrada,unidades,decenas,centenas,millares;
    //desarrollar un programa que imprima un numero por unidades decena y centenas en ese orden y que pida por pantalla el numero entre 0 y 999//
    printf("Escriba un numero entero entre 0 y 999: ");//pides por pantalla el numero entre 0 y 999
    scanf(" %i",&entrada); // coges el numero de entrada y lo guardas en una variable entera
    unidades=entrada%BASE; 
    printf("los restos del numero en octal son: ");
    printf(" %i",unidades);//para obtener el primer valor,calculamos el modulo 10 del valor suponiendo que es de 3 digitos
    resultado = entrada/BASE;// para obtener el segundo valor redirijo el ultimo valor de entrada a otra variable entera para no perdersu valor
    decenas=resultado%BASE;
    printf(" %i",decenas);//con ese ultimo valor realizamos el modulo nuevamente para obtener el valor de las decenas
    resultado1=resultado/BASE;//redijo el ultimo valor a otra variable entera para no perder ese valor 
    centenas=resultado1%BASE;
    printf(" %i",centenas);//al segundo valor le hago el modudlo para obtener las centenas 
    resultado2=resultado1/BASE;
    millares=resultado2%BASE;
    printf(" %i\n",millares);;
    numeroEnOctal=(millares * 1000) + (centenas * 100) + (decenas * 10) + (unidades * 1);
    printf("El numero en octal es %i\n",numeroEnOctal);
    return EXIT_SUCCESS;

}
