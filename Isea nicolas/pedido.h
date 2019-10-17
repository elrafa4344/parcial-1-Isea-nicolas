
typedef struct
{
    int idPedido;
    int idCliente;
    int kilos;
    char tipoDeBasura[10];
    int pendiente;

}ePedido;

void inicializarPedidoEstado(ePedido[], int);
int inicializarPedidoHardCode(ePedido[], int);
