#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "clientes.h"
//#include "informes.h"

#define T 6//clientes 100
#define M 9//pedidos 1000
void procesarResiduos(ePedido carga[], int tam);
void imprimirPedidosPendientes(eClientes datos[], ePedido carga[], int tam);
void imprimirPedidosProcesados(eClientes datos[], ePedido carga[], int tam);


int main()
{
    int op;
    char seguir='s';
    eClientes datos[T];
    ePedido carga[M];
     do
    {
        printf("\n1-ALTA DE CLIENTE: \n");
        printf("2-MODIFICAR DATOS DEL CLIENTE: \n");
        printf("3-BAJA DEL CLIENTE: \n");
        printf("4-CREAR PEDIDO DE RECOLECCION: \n");
        printf("5-PROCESAR RESIDUOS: \n");
        printf("6-IMPRIMIR CLIENTES: \n");
        printf("7-IMPRIMIR PEDIDOS PENDIENTES: \n");
        printf("8-IMPRIMIR PEDIDOS PROCESADOS: \n");
        printf("9-INFORMAR: \n");

        scanf("%d", &op);
        switch (op)
        {
        case 1:
            clientesAlta(datos, T);//LLAMADA A FUNCION
            break;
        case 2:
          modificarCliente(datos, T);
            break;
        case 3:
           bajaCliente(datos, T);
            break;
        case 4:
           inicializarPedidoHardCode(carga, M);
            break;
        case 5:
            procesarResiduos(carga, M);
            break;
        case 6:
            imprimirClientes(datos, T);
            break;
        case 7:
            imprimirPedidosPendientes(datos,carga, T);
            break;
        case 8:
            imprimirPedidosProcesados(datos, carga, M);
            break;
        case 9:
            clienteConMasPedidos(datos,carga, T);
            break;
        }

    }while(seguir=='s');

    return 0;
}

void imprimirPedidosPendientes(eClientes datos[], ePedido carga[], int tam)
{
    int i;
    for(i=0;i<T;i++)
    {
        if(carga[i].pendiente==0)
        {
              printf("%d--%ld--%s--%s--%s---%d---%d---%d\n", datos[i].idCliente, datos[i].CUIT, datos[i].nombreDeLaEmpresa, datos[i].direccion, datos[i].localidad, carga[i].kilos, carga[i].idPedido, carga[i].pendiente);

        }
        else
        {
            printf("Ninguno pendiente");
        }

}
}
void imprimirPedidosProcesados(eClientes datos[], ePedido carga[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        if(carga[i].pendiente==1)
        {

                printf("ningun pedido pendiente");

        }
        else
            {
                 printf("%d--%ld--%s--%s--%s---%d---%d---%d\n", datos[i].idCliente, datos[i].CUIT, datos[i].nombreDeLaEmpresa, datos[i].direccion, datos[i].localidad,carga[i].kilos, carga[i].idPedido, carga[i].pendiente);
          break;

            }

    }

}
void procesarResiduos(ePedido carga[], int tam)
{
    int i;
    for(i=0;i<T;i++)
            {
                   printf("\nID: %d\n tipo: %s\n cantidad %d\n estado%d\n", carga[i].idPedido, carga[i].tipoDeBasura, carga[i].kilos, carga[i].pendiente);
            }

                 printf("ingrese ID del pedido a procesar: ");
                 scanf("%d", &carga[i].idPedido);

                printf("\nID: %d\n tipo: %s\n cantidad %d\n estado%d\n", carga[i].idPedido, carga[i].tipoDeBasura, carga[i].kilos, carga[i].pendiente);
                printf("INGRESAR CANTIDAD DE KILOS DE CADA TIPO A PROCESAR: ");
                printf("pedido completado");


}

