
/*
Programa que imprime multiplos de 3
*/
#include <stdio.h>

int main(){
	int x = 2;

	for(x=0;x<100;x++){
		if(x%3 ==0)
			printf("%d\n",x);
	}

	return 0;	
}