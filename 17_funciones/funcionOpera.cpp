#include <stdio.h>
#include <stdlib.h>
int calcular(char operacion,int op1,int op2)
{
    int resultado=1;
    switch(operacion){
        case '+':
            return op1+op1;
            break;
        case '-':
            return op1-op2;
            break;
        case 'x':
            return op1*op2;
            break;
        case '%':
            return op1/op2;
            break;
        case '^':
            for(int i=0;i<op2;i++)
                resultado*=op1;
            return resultado;
            break;
        case 'v':
            return 0;
            break;
        default:
            return 0;
            break;
    }
}

int main(int argc, const char **argv){
    int resultado=0;
    resultado = 2+3 * 5 - calcular('^',2,3);
    printf("resultado: %i\n",resultado);


    return EXIT_SUCCESS;
}


