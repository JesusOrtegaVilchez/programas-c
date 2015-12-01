#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv)
{
    int input1, input2,comodin;
    printf("escribe dos numeros y el programa de lo ordenara de mayor a menor\n");
    printf("Numero1: ");
    scanf(" %i",&input1);
    printf("Numero2: ");
    scanf(" %i",&input2);

    if (input1 > input2)

        printf("%i\n%i\n", input1, input2);
    else
        if(input1<input2){
            comodin=input1;
            input1=input2;
            input2=comodin;
            printf("%i\n%i\n",input1,input2);



        }
        else
            printf("Ambos son iguales");
    return EXIT_SUCCESS;
}
