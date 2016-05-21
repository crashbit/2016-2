#include <stdio.h>

int main(){

	int x[4] = {3, 5, 20, 8};
	int *p;

	p = x;

	printf("%d\n", *p);
	p++;p++;p++;p++;p++;
	printf("%d\n", *p);


}

