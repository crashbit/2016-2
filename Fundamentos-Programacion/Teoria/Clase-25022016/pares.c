#include <stdio.h>

int main(){
	int numero[5];
	int n;
	int i;

	while(i<5){
		printf("Introduce un numero: ");
		scanf("%d", &n);
		if(n%2 == 0){
			numero[i]=n;
			i = i + 1;
		}

	}
	printf("el resultado es: ");
	for(i = 0; i< 5; i++){
		printf("%d,", numero[i]);
	}


}
