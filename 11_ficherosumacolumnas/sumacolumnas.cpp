#include <stdio.h>
#include <stdlib.h>

int main()
{
        int numeros;
                /*printf("escriba los numeros: \n");
                scanf(" %i",&numeros);*/
        FILE *fichero;
            fichero = fopen("sumaColum.txt","w");
        fscanf(fichero," %i",&numeros);
        for(int i=0; i<10; i++)
                fscanf(fichero," %*i");
                 fprintf(fichero," %i\n",numeros);
        printf(" %i\n",numeros);
        fclose(fichero);

        return EXIT_SUCCESS;


}
