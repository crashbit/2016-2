#include <stdio.h>
#include <stdlib.h>

int main(){

	int *p;

	p = (int *)malloc(sizeof(p));

	printf("%p\n\n", p);

	*p = 3;
	p++;
	*p = 20;

}

