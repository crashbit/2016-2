#include <stdio.h>

void cambia(int *var);

int main(){

	int x = 50;
	cambia(&x);
	printf("Valor de x: %d\n", x);

}

void cambia(int *var){
	printf("Valor de var: %d\n", *var);
	*var = 10;
}