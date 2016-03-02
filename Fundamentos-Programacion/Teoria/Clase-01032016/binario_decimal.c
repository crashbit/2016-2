#include <stdio.h>
#include <math.h>

int main(){
	int decimal = 0;
	int digito;
	int i;

	printf("Introduce un número binario: (digito por digito)");

	for(i = 0; i<4; i++){
		printf("Introduce i%d\n ", i);
		scanf("%d", &digito);
		decimal = decimal + (digito * pow(2, i));
	}
	printf("El resultado es: %d", decimal);
	printf("\n\n");
}