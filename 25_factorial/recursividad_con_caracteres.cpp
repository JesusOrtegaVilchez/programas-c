#include <stdio.h>
#include <stdlib.h>


void devuelve_frase(const char *frase){
    
        if(*frase == '\0'){

        printf("\n"); 
        return;
    }

    printf("%c",*frase);        
    devuelve_frase(frase+1);

}


int main(int argc, const char **argv){

    if(argc < 2){
        fprintf(stderr,"Uso: %s <frases>\n", argv[0]);
        return EXIT_FAILURE;
    }
    devuelve_frase(argv[1]); 


    return EXIT_SUCCESS;
    //siguiente programa que escriba un numero en binario de manera recursiva
}
