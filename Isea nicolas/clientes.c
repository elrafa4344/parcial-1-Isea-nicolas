#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "clientes.h"


#define T 6
#define M 9



int clientesAlta(eClientes datos[], int tam)                          //cambiar pantalla
{
    int retorno=-1;
    int i;
            int ID[T]={1, 2, 3, 4, 5, 6};
            char nombre[T][20]={"Telefonica", "Datasoft", "Nestle", "Terrabusi", "Dia", "Quilmes"};
            char localidad[T][20]={"CABA", "CABA", "LANUS", "QUILMES", "AVELLANEDA", "QUILMES"};
            char direccion[T][20]={"Lima 1234", "Corrientes 2547", "cucha cucha 555", "rocha 784", "Mitre 750", "rocha 741" };
            int long CUIT[T]={30-11223344-5, 30-44556677-6, 30-88995521-9, 30-56781423-5, 31-54581253-3, 30-51485759-6};

            for(i=0;i<T;i++)
            {
                datos[i].idCliente=ID[i];
                strcpy(datos[i].nombreDeLaEmpresa, nombre[i]);
                strcpy(datos[i].direccion, direccion[i]);
                strcpy(datos[i].localidad, localidad[i]);
                datos[i].CUIT=CUIT[i];
                datos[i].isEmpty=1;

            }

            for(i=0;i<T;i++)
            {
                   printf("\nID: %d\n Empresa: %s\n Direccion: %s\n Localidad: %s\n CUIT: %ld",
                datos[i].idCliente, datos[i].nombreDeLaEmpresa,datos[i].direccion,datos[i].localidad,datos[i].CUIT);
            }


            retorno=0;


    return retorno;
}
void modificarCliente(eClientes datos[], int tam)
{
    int i;
      for (i=0;i<tam;i++)
            {
                printf("ingrese ID a buscar: ");
                scanf("%d", &datos[i].idCliente);

                printf("%d--%ld--%s--%s--%s\n", datos[i].idCliente, datos[i].CUIT, datos[i].nombreDeLaEmpresa, datos[i].direccion, datos[i].localidad);

                printf("Ingrese la nueva direccion a cambiar: ");
                fflush(stdin);
                gets(datos[i].direccion);
                printf("Ingrese la nueva localidad a cambiar: ");
                fflush(stdin);
                gets(datos[i].localidad);
                break;

            }

                printf("%d--%ld--%s--%s--%s\n", datos[i].idCliente, datos[i].CUIT, datos[i].nombreDeLaEmpresa, datos[i].direccion, datos[i].localidad);


}
void bajaCliente(eClientes datos[], int tam)
{
    int i;
    char resp='n';
      for (i=0;i<tam;i++)
            {
                printf("ingrese ID a buscar: ");
                scanf("%d", &datos[i].idCliente);
                for (i=0;i<tam;i++)
                {
                    printf("%d--%ld--%s--%s--%s\n", datos[i].idCliente, datos[i].CUIT, datos[i].nombreDeLaEmpresa, datos[i].direccion, datos[i].localidad);
                }
                printf("desea realizar la baja completa?? S/N: ");
                fflush(stdin);
                scanf("%c", &resp);
                if(resp=='s')
                {

                    datos[i].idCliente=0;                                                       //campo ID
                    datos[i].isEmpty=0;
                    datos[i].CUIT=0;
                    strcpy(datos[i].nombreDeLaEmpresa, "");
                    strcpy(datos[i].direccion, "");
                    strcpy(datos[i].localidad, "");
                }
                else
                {

                 break;
                }
                printf("%d---%d---%ld---%s---%s---%s", datos[i].idCliente, datos[i].isEmpty, datos[i].CUIT, datos[i].nombreDeLaEmpresa, datos[i].direccion, datos[i].localidad);
            }
}
void imprimirClientes(eClientes datos[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
         printf("%d---%d---%ld---%s---%s---%s\n", datos[i].idCliente, datos[i].isEmpty, datos[i].CUIT, datos[i].nombreDeLaEmpresa, datos[i].direccion, datos[i].localidad);
    }

}

