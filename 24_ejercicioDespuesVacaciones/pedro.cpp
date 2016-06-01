#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, const char **argv)
{
        //Desplazar el patron sobre el tablero hasta el final
        //que se encuentre toda la palabra
        //comprobar letra a letra todas las letras del patron hasta que haya una distinta 
        //o llegue al final del patron
        //
        int p=3;
        char tablero[]="arppedritusuo";
       /*0 char patron="pedro";*/ //si cambia si no cambia mejor utilizar 
        const char *patron="pedro";
        bool palabra_encontrada = false;
        for(int offset=0; tablero[offset + strlen(patron)]=='\0'&& !palabra_encontrada();offset++){
            palabra_encontrada = comprobar_letra_a_letra(patron,tablero,offset);
            if(comparador[1]==letras[p]){
                printf(" %c",comparador[i]);
                printf("\n");
                p++;
        }
            else
                printf("Las letras no son iguales\n");
                
        }

    return EXIT_SUCCESS;
}
