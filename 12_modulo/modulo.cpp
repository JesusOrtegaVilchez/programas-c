#include <stdio.h>
#include <stdlib.h>

#define BASE 10
int main(int argc, char **agrv)
{

    int /*BASE*/resultado,resultado1;
    int entrada;
    //desarrollar un programa que imprima un numero por unidades decena y centenas en ese orden y que pida por pantalla el numero entre 0 y 999//
    printf("Escriba un numero entero entre 0 y 999: ");//pides por pantalla el numero entre 0 y 999
    scanf("%i",&entrada); // coges el numero de entrada y lo guardas en una variable entera
    printf("%i", entrada%BASE);//para obtener el primer valor,calculamos el modulo BASE del valor suponiendo que es de 3 digitos
    resultado = entrada/BASE;// para obtener el segundo valor redirijo el ultimo valor de entrada a otra variable entera para no perdersu valor

    printf("%i",resultado%BASE);//con ese ultimo valor realizamos el modulo nuevamente para obtener el valor de las decenas
    resultado1= resultado/BASE;//redijo el ultimo valor a otra variable entera para no perder ese valor 
    printf("%i\n",resultado1%BASE);//al segundo valor le hago el modudlo para obtener las centenas 

    return EXIT_SUCCESS;

}
