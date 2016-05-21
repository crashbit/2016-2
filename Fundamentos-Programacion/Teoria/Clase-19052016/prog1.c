#include <stdio.h>

int main(){
	
	int x = 30;
	int *p;

	printf("Contenido-> %d\n", x);
	printf("Dir. memoria-> %p\n", &x);

	p = &x;
	*p = 100;
	printf("-------------------\n");
	printf("Contenido-> %d\n", x);
	printf("Dir. memoria-> %p\n", &x);
	printf("Contenido-> %p\n", p);
	printf("Dir. memoria-> %p\n", &p);

	printf("\n\n");
}