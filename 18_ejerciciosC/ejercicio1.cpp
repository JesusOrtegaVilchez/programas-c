#include <stdio.h>
#include <stdlib.h>

int main()
{
    int media=0,num,cont;//variables media, numero y contador
    printf("Programa para hallar la media con 10 valores\n"); 
    for(cont=1;cont<=10;cont++){//bucle que pedira el numero 10 veces, el for esta igualado a 1 porque siendo <=10 son 10 las veces que realizara las instrucciones
        printf("Escribe el valor %i: ",cont);
        scanf("%i",&num);//escaneamos el numero 10 veces
        media = media + num;//metodo para hallar la suma de los valores introducidos
    }
    printf("La media es: %i\n", media/10);//imprimimos la media sabiendo que se van a introducir 10 valores, si se desea hallar una media con mas valores se asignara una variable que guarde el contenido del total de numeros
    return EXIT_SUCCESS;
}
