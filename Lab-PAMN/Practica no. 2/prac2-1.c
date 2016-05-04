

#include <stdio.h>

int main(){
	
	int x[5];
	int *p;

	p = x;

	*p = 2;
	p++; 
	*p = 30;

	printf("%d %d\n\n\n", x[0], x[1]);

}
