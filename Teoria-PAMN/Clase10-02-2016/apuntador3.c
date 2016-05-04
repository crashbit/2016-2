#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p;

	p = (int *)malloc(sizeof(int));

	*p = 100;
	p++;
	*p = 200;

	printf("%p -> %d", p, *p);
}