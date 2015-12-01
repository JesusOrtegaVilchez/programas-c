#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv)
{
    int rojo, azul;
    printf("Responde a las siguientes preguntas, si solos si, no eres daltónico:\n");
    printf("Tu color tiene azul? si=1 no=0:  ");
    scanf(" %i",&azul);
    printf("Tu color tiene rojo? si=1 no=0:  ");
    scanf(" %i",&rojo);

    if (azul==1 && rojo==0)
    {

        printf("Tu color es azul como el ocenao\n");
    }
    else
        if(azul==0 && rojo==1)
        {
            printf("Tu color es rojo como el ferrari que no tienes\n");

        }
        else 
            if (azul ==0 && rojo ==0)
            {
                printf("Lo veo todo muy negro\n");
            } 
            else
                printf("Como tiene ambos puede ser morado como el vino caro que no tienes, de momento.\n ");
    return EXIT_SUCCESS;
}
