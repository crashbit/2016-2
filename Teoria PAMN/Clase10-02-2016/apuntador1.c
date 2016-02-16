#include <stdio.h>

int main(){
	
	int x;
	int *p;

	x = 20;
	p = &x;
	*p = 1000;

	printf("%p -> %d\n\n", p, *p);
	printf("%p -> %d\n\n", &x, x);


}