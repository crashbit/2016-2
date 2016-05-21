#include <stdio.h>

void intercambia(int *a, int *b);

int main(){

	int x = 50;
	int y = 33;
	printf("Valor de x: %d\n", x);
	printf("Valor de y: %d\n", y);
	intercambia(&x, &y);
	printf("Valor de x: %d\n", x);
	printf("Valor de y: %d\n", y);

}

void intercambia(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}