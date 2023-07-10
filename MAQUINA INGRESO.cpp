#include <stdio.h>
#include <stdlib.h>
typedef struct MAQUINAEXPENDEDORA {
	char Nombre_producto [25];
	int codigo_producto;
	int cantidad;
	float precio;
} Producto;
int main(){
    int Num_productos;
    printf("Dame la cantidad de producto que tienes:");
    scanf("%d",&Num_productos);
    Producto producto[Num_productos];
    Producto articulo;
    for(int auxiliar=0;auxiliar<Num_productos;auxiliar++){
    	printf("\n Agregando el producto %d",auxiliar+1);
    	printf("\n Dame el nombre del producto: ");
    	scanf("%s",&articulo.Nombre_producto);
    	printf("\n Dame el codigo del producto: ");
    	scanf("%d",&articulo.codigo_producto);
    	printf("\n Dame la cantidad del producto: ");
    	scanf("%d",&articulo.cantidad);
    	printf("\n Dame el precio del producto: ");
    	scanf("%f",&articulo.precio);
    	producto[auxiliar]=articulo;
    	}
    printf("\nProductos:");
   for(int auxiliar=0;auxiliar<Num_productos;auxiliar++){
    	printf("\nNombre del producto: %s",producto[auxiliar].Nombre_producto);
    	printf("\nCodigo del producto:%d",producto[auxiliar].codigo_producto);
    	printf("\nCantidad:%d",producto[auxiliar].cantidad);
    	printf("\nPrecio: $%2f",producto[auxiliar].precio);
    	printf("\n");
	}
	return 0;
}