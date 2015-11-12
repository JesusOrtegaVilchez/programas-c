#include <stdio.h>
#include <stdlib.h>

int main()
{
        FILE *pf;
        /*abre o crea el archivo indicado*/
        pf = fopen("archivotexto.txt", "w");
        /*escribe en el archivo creado la frase */
        fprintf(pf, "esto es una mera prueba");
        fclose(pf);
        return EXIT_SUCCESS;



}
