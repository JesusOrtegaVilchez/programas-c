#include <stdio.h>
#include <stdlib.h>
/*area del triangulo = b*h/2
 * perimetro = 3l
 * altura= raiz de 3*a/2
 * */
int main()
{
       int lado;
       float superficie, perimetro,base,altura;
        printf("PROGRAMA PARA HALLAR LA SUPERFICIE,PERIMETRO Y ALTURA DE UN TRIANGULO EQUILATERO\n");
        printf("Para ello necesitare que me proporciones los siguientes datos: \n");
        printf("valor del lado: ");
        scanf(" %i",&lado);
        perimetro = lado *3;
        printf("Introduce el valor de la base: ");
        scanf(" %f",&base);
        printf("Introduce el valor de la altura: ");
        scanf(" %f",&altura);
        superficie = (base * altura) / 2;
        printf("Perimetro = %1.2f \n",perimetro);
        printf("Superficie= %1.2f \n",superficie);






}
