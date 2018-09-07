#include <stdio.h>
#include <stdlib.h>
#include "Arrays.h"
#define CANTIDAD 5

int main()
{
    int i;
    int array[CANTIDAD];
    int numeros []= {1,7,5,2};

    array_init(array,CANTIDAD,0);
    array_mostrarArray(array,CANTIDAD);

    ordenarArray(numeros,4,'m') ;
    for(i=0;i<4;i++)
    {
        printf("\n posicion: %d",numeros[i]);
    }
    return 0;
}
