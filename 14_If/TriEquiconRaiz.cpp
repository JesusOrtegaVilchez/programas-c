#include <stdio.h>
#include <stdlib.h>
#include <cmath>//libreria para ejecutar raices
/*ATENCION SI ESTAS COMPILANDO CON GNU LINUX AÑADIR gcc -o  main main.cpp -lm*/
/*Buscamos hallar el area el perimetro y la altura mediante formulas.*/
/*Como buscamos formar una ecuacion,lo ideal es pedir una serie de valores para que pueda aplicarse la solucion*/
int main ()
{
    float lado,altura,base,perimetro,superficie,hipotenusa,catetom, resultado;
    int operacion=0;
    
    printf("Halla la superficie, perimetro y altura de un TRIANGULO EQUILATERO en sencillos pasos\n");
    printf("Te empezare preguntando que es lo que deseas hallar: \n");
    printf("\t-Perimetro = 1\n");
    printf("\t-Superficie= 2\n");
    printf("\t-Altura = 3\n");
    printf("Ahora,dime la operacion que deseas hallar: ");
    scanf(" %i", &operacion);
    do  {

        if (operacion == 1)
        {
            printf("Valor del lado: ");
            scanf(" %f",&lado);
            perimetro = lado * 3;//metodo para hallar el perimetro
            printf("El perimetro es: %1.2f U\n",perimetro);

        }
        else
            if(operacion == 2)
            {
                printf("vamos a hallar la superficie del triangulo para ello necesito los siguientes datos: \n");
                printf("introduce el valor de la base: ");
                scanf(" %f", &base);
                printf("Introduce el valor de la altura: ");
                scanf(" %f", &altura);
                superficie = (base * altura)/2;//metodo para hallar la superficie
                printf("La superficie del TRIANGULO EQUILATERO ES: %1.2f UC\n", superficie); //volcamos por pantalla la solucion con 2 decimales medidas en UC (unidades cuadradas)

            }
            else
                if (operacion == 3)
                { 
                    printf("vamos a hallar la altura del triangulo para ello necesito los siguientes datos: \n");
                    printf("introduce el valor de la base: ");
                    scanf(" %f",&base);
                    printf("Introduce el valor del lado: ");
                    scanf(" %f", &lado);
                    /*Para hallar la altura basta con darse cuenta de que en un triangulo equilatero al dividir la base y trazar la linea imaginaria de la altura 
                     * vemos como se forma un triangulo rectagulo con lo cual, bastaria con usar el teorema de pitagoras para hallar la altura o en este caso el cateto 
                     * que falta.*/
                    catetom=base/2; //para hallar el cateto menor dividimos la base entre 2
                    hipotenusa=lado; 
                    altura =  (hipotenusa*hipotenusa) - (catetom*catetom);//metodo para hallar la altura
                    resultado=sqrt(altura); //funcion a la que llamamos para hallar la raiz de la variable altura  para obtener el valor real guardado en la variable resultado
                    printf("La altura es: %1.2f\n",resultado);
                }
                else 
                    if(operacion == 0)
                    {
                        printf("Gracias por usar el programa");
                    }
    } while (operacion ==0);//fin de bucle

    printf("\n");



    return EXIT_SUCCESS;

}

