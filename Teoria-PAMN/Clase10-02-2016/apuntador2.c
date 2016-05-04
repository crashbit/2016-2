#include <stdio.h>

int main(){
	
	int x[10];
	int *p;
	x[0] = 19;
	x[1] = 22;
	x[2] = 25;

	p = x;

	printf("%p -> %p -> %d \n\n", p, x, *p);
	p++;
	printf("%p -> %p -> %d \n\n", p, x, *p);
	p++;
	printf("%p -> %p -> %d \n\n", p, x, *p);
}