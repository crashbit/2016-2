#include <stdio.h>

int busca_numero(int numero);

int arreglo[10] = {2,4,4,6,6,8,8,9,0};

int main(){

	int valor = 4;
	int resultado;

	resultado = busca_numero(valor);

	printf("El numero %d se repite %d veces\n\n", valor, resultado);

}

int busca_numero(int numero){
	int i;
	int total = 0;

	for(i=0; i<10;i++){
		if(arreglo[i] == numero)
			total = total + 1;

	}

	return total;
}
