#include <stdio.h>
#include <stdlib.h>
int PintarTablero(int lado)
{
        
    for(int filas=0;filas<=lado; filas++){
        for(int columnas=0;columnas<=lado; columnas++)
          // if(filas>columnas){
               printf("|-|");
          // }
         printf("\n"); 
        }
        return 0;
}
int main()
{

PintarTablero(4);

return EXIT_SUCCESS;
}
