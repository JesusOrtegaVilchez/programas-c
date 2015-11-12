#include <stdio.h>
#include <stdlib.h>

int main()
{
   char mi_nombre[20];
   char comando_g[0x100];
   system ("toilet --gay -f pagga \"NOMBRE\"");
    /*bloque de entrada de datos*/
    printf("Nombre: ");
   
    scanf(" %s",mi_nombre);
   //opcion clasica//
   // printf("tu nombre es: %s\n", mi_nombre);
   /*emo*/
    sprintf(comando_g, "toilet --gay -f pagga %s", mi_nombre);
    system(comando_g);

    return EXIT_SUCCESS;
}
