#include <stdio.h>
#include <stdlib.h>

int main(){

	int x[5] = {3,5,7,9,10};	
	int *p;

	p = x;
	*p = 10;
	p++;
	*p = 12;
	p++;
	*p = 15;

	printf("%d\n\n\n",x[0]);
	printf("%d\n\n\n",x[1]);
	printf("%d\n\n\n",x[2]);
}