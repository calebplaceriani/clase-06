#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"


static int getInt(int* pResultado);



int funcion(void)
{
    static int i=9;

    i++;
    return i;
}



int utn_getEntero(int* pEdad,int reintentos,char* msg,
                          char*msgErr,int min, int max)
{



    int retorno = -1;
    int auxiliarEdad;

    for(;reintentos > 0;reintentos--)
    {
        printf(msg);

        //if(scanf("%d",&auxiliarEdad) == 1)
        if(getInt(&auxiliarEdad) == 0)
        {
            if(auxiliarEdad >= min && auxiliarEdad < max)
            {
                *pEdad = auxiliarEdad;
                retorno = 0;
                break;
            }
            else
            {
                printf(msgErr);
            }
        }
        else
        {
            printf(msgErr);
            __fpurge(stdin);
        }
    }
    return retorno;
}






static int getInt(int* pResultado)
{
    int aux;
    int ret=-1;
    if(scanf("%d",&aux) == 1)
    {
        *pResultado = aux;
        ret=0; // ok
    }
    return ret;
}


