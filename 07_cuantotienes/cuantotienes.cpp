#include <stdio.h>
#include <stdlib.h>

int main()
{
        int saldo;
        int dia,mes,anio;
       const  char *meses[12] = {
            "enero",
            "febrero",
            "marzo",
            "abril",
            "mayo",
            "junio",
            "julio",
            "agosto",
            "septiembre",
            "octubre",
            "noviembre",
            "diciembre",
        };
        printf("Cuanto dinero tienes?\n ");
        printf("yo = <cantidad>\n");
  
        scanf(" yo=%i",&saldo);
        printf("saldo: %i\n", saldo);

        printf("Fecha de nacimiento (dd/mm/aa): ");
        scanf(" %*i/%i/%i,",&mes,&anio);
     
        printf("Naciste en el mes %s en el año %i. \n", meses[mes-1], anio);
  
        return EXIT_SUCCESS;
}
