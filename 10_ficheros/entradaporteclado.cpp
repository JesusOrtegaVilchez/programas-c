#include <stdlib.h>
#include <stdio.h>
int main()
{
        char tuTex[20];
        
        printf("escribe algo: \n");
        scanf(" %s",tuTex);

        FILE *pf;
        pf  = fopen("texto.txt", "w");
        fscanf(pf, " %s", tuTex);
        fprintf(pf,"no se esta copiando el texto");

         //for(int i=0; i<filas; i++)
         //fscanf(imagenes, " %*s");
         
        printf(" %s\n", tuTex);
        fclose(pf);


        return EXIT_SUCCESS;



}
