#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p;

	p = (int *)malloc(sizeof(int));

	p[3] = 500;
	p[4] = 201;

	printf("%d\n\n\n",p[3]);
}