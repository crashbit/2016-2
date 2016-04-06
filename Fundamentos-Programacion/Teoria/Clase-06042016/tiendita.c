#include <stdio.h>
#include <string.h>

int menu();

int main(){
	int opcion;
	int cantidad;
	char productos[2][10]={{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}, {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}} ;
	float precios[2] = {14.5, 31};
	float total;
	int carrito[10][2];
	int i=0;
	int elemento;
	int total_elementos;

	strcpy(productos[0], "Leche");
	strcpy(productos[1], "Caguamas");

	while(opcion!= 10){

		opcion = menu();
		if(opcion == 10) break;

		printf("El cliente quiere: %s\n\n",productos[opcion]);

		printf("¿Cuanto quiere? \n");
		scanf("%d", &cantidad);

		total = total + (cantidad * precios[opcion]);
		printf("El total es: %2.2f", total);

		carrito[i][0] = opcion;
		carrito[i][1] = cantidad;
		i++;

		printf("\n\n");
	}

	total_elementos= i;
	for(i=0; i<total_elementos;i++){
		elemento = carrito[i][0];
		cantidad = carrito[i][1];
	// 	printf("%s -> %2.2f", productos[elemento], precios[elemento] );
	
		if(elemento != -1)
			printf("%s\t %d\t %2.2f \n", productos[elemento],cantidad, precios[elemento]);

	}

	printf("\t\t\t%2.2f\n\n", total);
}

int menu(){
	int opcion;
	printf("Bienvenido a la tiendita FI\n\n");
	printf("0) Leche $14.50lt \t 1) Caguamas $31.00\n");
	printf("10)Salir\n");
	printf("¿Que va a llevar? \n");	
	scanf("%d", &opcion);
	return opcion;
}
