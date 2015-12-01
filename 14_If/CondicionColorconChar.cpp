#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, const char **argv)
{
    int rojo, azul;
    char respuesta;
    printf("Responde a las siguientes preguntas, si solos si, no eres daltónico:\n");
    printf("Tu color tiene azul? s/n:  ");
    scanf(" %c",&respuesta);
    azul= tolower(respuesta);
    printf("Tu color tiene rojo? s/n:  ");
    scanf(" %c",&respuesta);
    rojo = tolower(respuesta);

    if (azul=='s' && rojo=='n')
    {

        printf("Tu color es azul como el ocenao\n");
    }
    else
        if(azul=='n' && rojo=='s')
        {
            printf("Tu color es rojo como el ferrari que no tienes\n");

        }
        else 
            if (azul =='n' && rojo =='n')
            {
                printf("Lo veo todo muy negro\n");
            } 
            else
                printf("Como tiene ambos puede ser morado como el vino caro que no tienes, de momento.\n ");
    return EXIT_SUCCESS;
}
