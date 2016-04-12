//Factorial Recursivo

#include <stdio.h>

int factorial(int n);

int main(){
	int valor;
	valor = factorial(5);
	printf("%d\n", valor);
}

int factorial(int n){
	int resultado = 0;
	if(n>1){
		resultado = n * factorial(n-1);
		return resultado;		
	}
	if(n==1) return 1;
}