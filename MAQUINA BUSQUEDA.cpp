#include <stdio.h>
#include <stdlib.h>
typedef struct MAQUINAEXPENDEDORA {
	char Nombre_producto [25];
	int codigo_producto;
	int cantidad;
	float precio;
} Producto;
int Pedir_cantidad();
Producto Agregar_producto();
void Mostrar_productos(Producto *productos,int Num_productos);
void Mostrar_producto(Producto *productos, int posicion);
int Busqueda(Producto *productos,int Codigo,int contador);

int main() {
	int Num_producto,eleccion=0,contador_producto=0;
	Num_producto=Pedir_cantidad();
	Producto producto[Num_producto];
	system("cls");
	while(eleccion!=4){
	printf("\nQue deseas realizar:\n");
	printf("1) Agregar producto\n");
	printf("2) Buscar producto\n");
	printf("3) Mostrar producto\n");
	printf("4) Salir\n");
	scanf("%d",&eleccion);
	switch(eleccion){
		case 1: {
			if(contador_producto==Num_producto){
				printf("\nNo es posible agregar mas productos");
			}else{
				producto[contador_producto]=Agregar_producto();
				contador_producto++;
			}
			break;
		}
		case 2:{
			int buscado, Codigo;
			printf("Dame el codigo para encontrar el producto:");
			scanf("%d", &Codigo);
			buscado=Busqueda(producto,Codigo,contador_producto);
			if (buscado==-1){
				printf("\nProducto no encontrado");
			}else{
				Mostrar_producto(producto,buscado);
			}
			break;
		}
		case 3:{
			Mostrar_producto(producto,contador_producto);
			break;
		}
		case 4:{
			printf("\nAdios");
			break;
		}
	}
    }
	return 0;
}

int Pedir_cantidad(){
	int cantidad;
	printf("dame la cantidad de producto que deseas agregar a tu maquina:");
	scanf("%d",&cantidad);
	return cantidad;
}

Producto Agregar_producto(){
	Producto articulo;
	printf("\nDame el nombre del producto:");
	scanf("%s",&articulo.Nombre_producto);
	printf("\nDame el precio del producto:");
	scanf("%f",&articulo.precio);
	printf("\nDame la cantidad disponible de producto:");
	scanf("%d",&articulo.cantidad);
	printf("\nDame el codigo de producto:");
	scanf("%d",&articulo.codigo_producto);
	return articulo;
}

void Mostrar_productos(Producto *producto,int Num_productos){
			
	for(int i=0;i<Num_productos;i++){
		printf("\nProducto: %s",producto[i].Nombre_producto);
		printf("\nPrecio: $%.2f",producto[i].precio);
		printf("\nCantidad disponible: %d",producto[i].cantidad);
		printf("\nCodigo de producto: %d",producto[i].codigo_producto);
		printf("\n");
	
}
}

void Mostrar_producto(Producto *productos, int posicion){
	printf("\nProducto: %s",productos[posicion].Nombre_producto);
		printf("\nPrecio: $%.2f",productos[posicion].precio);
		printf("\nCantidad disponible: %d",productos[posicion].cantidad);
		printf("\nCodigo de producto: %d",productos[posicion].codigo_producto);
		printf("\n");
}

int Busqueda(Producto *productos,int Codigo,int contador){
	int i=0;
	for(i;i<contador;i++){
		if(productos[i].codigo_producto==Codigo){
			return i;
		}
	}
	return -1;
}