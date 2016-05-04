
#include <stdio.h>
#include <stdlib.h>

int main(){
	

	int *p;

	p = (int *)malloc(sizeof(p));

	*p = 30;
	p[2] = 72;
	printf("%d\n\n\n", p[2]);

}