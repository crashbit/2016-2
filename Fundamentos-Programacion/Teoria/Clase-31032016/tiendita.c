#include <stdio.h>
#include <string.h>

int menu();

int main(){
	int opcion;
	int cantidad;
	char productos[2][10];
	float precios[2] = {14.5, 31};

	strcpy(productos[0], "Leche");
	strcpy(productos[1], "Caguamas");

	opcion = menu();

	printf("El cliente quiere: %s\n\n",productos[opcion]);

	printf("¿Cuanto quiere? \n");
	scanf("%d", &cantidad);

	printf("El total es: %2.2f", cantidad * precios[opcion]);

	printf("\n\n");
}

int menu(){
	int opcion;
	printf("Bienvenido a la tiendita FI\n\n");
	printf("0) Leche $14.50lt \t 1) Caguamas $31.00\n");
	printf("¿Que va a llevar? \n");	
	scanf("%d", &opcion);
	return opcion;
}