#include <stdio.h>
#include <stdlib.h>

bool tiene_divosores(int comprobando, int posible_divisor){
    bool mi_respuesta;
    if(posible_divisor == 1)
        return false;
    mi_respuesta = comprobando % posible_divisor == 0;
    return mi_respuesta|| tiene_divisores(comprobando,posible_divisor-1);
}


int main(){
        printf("el factorial es: %i\n",factorial(7));

        return EXIT_SUCCESS;
}
