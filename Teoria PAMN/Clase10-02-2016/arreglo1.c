#include <stdio.h>

int main(){
	
	int x[10];
	int i;
	for(i=0; i<10; i++){
		printf("%p \n", &x[i]);
	}
}