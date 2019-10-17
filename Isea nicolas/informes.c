#include "clientes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void clientesConMasPedidosPendientes(eClientes datos[], ePedido carga[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(carga[i].pendiente==1)
        {
              printf("%d--%ld--%s--%s--%s---%d---%d---%d\n", datos[i].idCliente, datos[i].CUIT, datos[i].nombreDeLaEmpresa, datos[i].direccion, datos[i].localidad, carga[i].kilos, carga[i].idPedido, carga[i].pendiente);

        }
        else
        {
            printf("Ninguno pendiente");
        }

}
}
void clienteConMasPedidos(eClientes datos[], ePedido carga[], int tam)
{
    int i;
    int canP=0;
    for(i=0;i<tam;i++)
    {
        if(carga[i].pendiente==1)
        {
              printf("%d--%ld--%s--%s--%s---%d---%d---%d\n", datos[i].idCliente, datos[i].CUIT, datos[i].nombreDeLaEmpresa, datos[i].direccion, datos[i].localidad, carga[i].kilos, carga[i].idPedido, carga[i].pendiente);
              canP++;

        }
        else
        {
            printf("Ninguno pendiente");
        }
    printf("%d", canP);
}
}
