#include <stdio.h>

int main(){
	int numeros[10]={3, 2, 2, 6, 3, 1, 2, 8, 10, 3 };
	int i,j;
	int moda, suma, suma_max, suma_ant, moda_ant;

	moda = moda_ant = numeros[0];
	suma = suma_max = 0;
	for(i = 0; i< 10; i++){
		for(j=i+1;j<10; j++){
			if(numeros[i] == numeros[j]){
				suma = suma + 1;
				printf("sumando para %d\n", numeros[i]);
			}

			else{
				if(suma >= suma_max){
					suma_ant = suma_max;
					suma_max = suma;
					moda_ant = moda;
					moda = numeros[i];
					printf("Esta es la moda: %d\n", moda);
				}
			}
		}
		suma = 0;
	}
	printf("%d ", moda);
	printf("\n");
	printf("\n\n");
}