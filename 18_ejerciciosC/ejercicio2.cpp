#include <stdio.h>
#include <stdlib.h>

int main()
{
    int media=0,num,cont,numero_valores;//variables media, numero, contador, numero_valrores
    printf("Programa para hallar la media con n valores\n");
    printf("Dime la cantidad de numeros que vas a escribir: ");
    scanf("%i",&numero_valores);
    for(cont=1;cont<=numero_valores;cont++){//bucle que pedira el numero n veces, el for esta igualado a 1 porque siendo <=numero_valores son n las veces que realizara las instrucciones
        printf("Escribe el valor %i: ",cont);
        scanf("%i",&num);//escaneamos el numero n veces
        if(num>0)//en cuanto sea menor que 0 para de leer numeros
            media = media + num;//metodo para hallar la suma de los valores introducidos
        else
        { numero_valores=numero_valores-1;//reducimos en -1 la cantidad de valores para que al hallar la media no se tenga en cuenta el numero negativo
            printf("La media es: %i\n", media/numero_valores);//imprimimos la media sabiendo que se van a introducir n valores por lo que dividimos el valor de media/numero_valores para obtener la media
        }
    }
    return EXIT_SUCCESS;
}
