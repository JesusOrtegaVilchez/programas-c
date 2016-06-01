#include <stdio.h>
#include <stdlib.h>

int main(int agrc, const char **argv){

    int numero= 33;
    int *p_numero= &numero;

    *p_numero= 35;
    printf("numero = %I \n",numero);
    printf("Usuaria . Numero: ");
    scanf(" %i",p_numero);
    printf("numero = %i\n",numero);

    if(numero == 27){
        p_numero = (int *) malloc(sizeof(int));
        printf("Usuario.Numero dinámico: ");
        scanf("%i", p_numero);
        printf("numero dinámico = %i",*p_numero);
        free(p_numero);
    }


        printf("numero= %i\n", numero);

}

return EXIT_SUCCESS;
}
