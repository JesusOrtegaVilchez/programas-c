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
        fprintf(pf,"texto.txt", tuTex);

         
        printf(" %s\n", tuTex);
        fclose(pf);


        return EXIT_SUCCESS;



}
