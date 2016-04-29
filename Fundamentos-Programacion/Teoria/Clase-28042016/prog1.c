#include <stdio.h>

int main(){
	
	int x;
	float y=3.14159261234567890;

	printf("Introduce un valor: ");
	scanf("%d", &x);

	printf("\n%d", x);		// deciman
	printf("\n%o", x);		// octal
	printf("\n%#x", x);		// hexadecimal
	printf("\n%u", x);		// unsigned
	printf("\n%p", &x);		// direccion en memoria de la variable
	printf("\n%c", 'h');	// caracteres
	printf("\n%s", "cadena"); // cadenas
	printf("\n%f", y);
	printf("\n%2.2f", y);
	printf("\n%g", y);
	printf("\n%G", y);
	printf("\n\n");
}
