
/*
Programa que indica si un numero es multiplo de 3
*/
#include <stdio.h>

int main(){

	int x = 0;
	printf("Introduce un numero:");
	scanf("%d", &x);
	if(x%3 == 0)
		printf("Es multiplo\n\n");
	else
		printf("No es multiplo\n\n");
	return 0;	
}