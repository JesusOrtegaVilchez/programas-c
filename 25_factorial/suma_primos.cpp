#include <stdio.h>
#include <stdlib.h>

int suma(int n){
    if ( n == 0 )
        return 0;

    return  n + suma(n-1);

}


int main(){
    printf("el factorial es: %i\n",suma(n));

    return EXIT_SUCCESS;
}
