#include "pedido.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 6
#define M 9


void inicializarPedidoEstado(ePedido carga[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        carga[i].pendiente = 0;
    }
}


int inicializarPedidoHardCode(ePedido carga[], int tam)
{
    int retorno=-1;
    int i;
    int id[M] = {1, 1, 2, 2, 3, 4, 1, 5, 6 };
    char tBasura[M][50];
    int pendiente[M]={1, 1, 0, 0, 1, 1, 0, 1, 0};
    int kilos[M] = {1000, 800, 100, 300, 1500, 750, 200, 30, 456};

    for(i=0; i<M; i++)
    {
        carga[i].idPedido=id[i];
        carga[i].kilos=kilos[i];
        carga[i].pendiente=pendiente[i];
        strcpy(carga[i].tipoDeBasura, tBasura[i]);
    }
     for(i=0;i<M;i++)
            {
                   printf("\nID: %d\n tipo: %s\n cantidad %d\n estado%d\n", carga[i].idPedido, carga[i].tipoDeBasura, carga[i].kilos, carga[i].pendiente);
            }

            retorno=0;


    return retorno;

}






