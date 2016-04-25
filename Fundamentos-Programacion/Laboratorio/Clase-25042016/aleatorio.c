#include <stdio.h>
#include <stdlib.h>


int main(){

	int n=10, i;
	
	srand(time(NULL));
	for(i=0;i<n; i++){
		printf("%d\n", rand()%4);
	}

	printf("\n\n");
}
