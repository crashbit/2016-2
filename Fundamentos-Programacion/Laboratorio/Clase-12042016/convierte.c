#include <stdio.h>

char convierte(int num);

int main(){
	
	char letra;
	
	letra = convierte(114);

	printf("%c", letra);

	printf("\n\n");

}

char convierte(int num){
	return (char)num;   // Typecast o casting de datos
}
