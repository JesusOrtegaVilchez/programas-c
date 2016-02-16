#include <stdio.h>
#include <stdlib.h>

#define BASE 10
int main(int argc, char **agrv)
{

    int resultado,resultado1,resultado2,numeroEnOctal;
    int entrada,unidades,decenas,centenas,millares;
    //desarrollar un programa que transforme un numero a octal y que imprima un numero por unidades,decenas, centenas y millares si los tiene, en ese orden y que pida por pantalla el número entre 0 y 999 una vez impreso en el orden en que se piden imprimir el numero en orden guardando el resultado en una variable//
    printf("Escriba un numero entero entre 0 y 999: ");//pides por pantalla el numero entre 0 y 999
    scanf(" %i",&entrada); // coges el numero de entrada y lo guardas en una variable entera
    unidades=entrada%BASE; 
    printf("los restos del numero son: ");
    //imprimimos los numeros que formaran el numero en octal pero en el orden en el que aparecen los restos a medida que dividimos por la ba    se 
    printf("%i",unidades);
    //para obtener el primer valor,obtenemos el modulo del numero pedido por pantalla entre la base que adquirira el valor de las unidades
    resultado = entrada/BASE;
    // seguimos dividiendo por la base para obtener el siguiente numero del que se va a obtener el resto
    decenas=resultado%BASE;
    printf("%i",decenas);//el modulo obtenido se imprime otra vez por pantalla y se guarda el valor como las decenas
    resultado1=resultado/BASE;//seguimos dividiendo por la base para obtener el numero del cual obtendremos el siguiente resto
    centenas=resultado1%BASE;
    printf("%i\n",centenas);//realizamos el modulo para obtener el valor de las centenas guardado en la variable centenas 
    /*resultado2=resultado1/BASE;//volvemos a dividir por la base 
    millares=resultado2%BASE;//obtenemos el valor de los millares guardadps en la variable millares con el modulo de resultado1/BASE 
    printf("%i\n",millares);;//imprimimos los millares*/ 
    numeroEnOctal=/*(millares * 1000) +*/ (centenas * 100) + (decenas * 10) + (unidades * 1);
    //obtenemos el numero ordenado multiplicando cada valor por la potencia de 10 que le corresponde 
    printf("El numero guardado es %i\n",numeroEnOctal); //imprimimos el valor guardado en la variable numeroEnOctal
    return EXIT_SUCCESS;

}
