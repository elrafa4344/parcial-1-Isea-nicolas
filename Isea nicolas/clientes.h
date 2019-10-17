#include "pedido.h"
typedef struct
{
    int idCliente;
    char nombreDeLaEmpresa[20];
    char direccion[10];
    char localidad[15];
    int long CUIT;
    int isEmpty;
}eClientes;
/** \brief realiza una carga harcodeada de los datos de los clientes
 *
 * \param datos[] eClientes
 * \param tam int
 * \return int
 *
 */
int clientesAlta(eClientes datos[], int tam);
/** \brief modifica la direccion y localidad de un di buscado
 *
 * \param datos[] eClientes
 * \param tam int
 * \return void
 *
 */
void modificarCliente(eClientes datos[], int tam);
/** \brief realiza una baja logica de una id buscada
 *
 * \param datos[] eClientes
 * \param tam int
 * \return void
 *
 */
void bajaCliente(eClientes datos[], int tam);
/** \brief realiza la muestra de los clientes existentes
 *
 * \param datos[] eClientes
 * \param tam int
 * \return void
 *
 */
void imprimirClientes(eClientes datos[], int tam);


