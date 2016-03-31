#include <stdio.h>

int main(){
	char cadena[10] = "Murcielago";
	char resultado[10]="         ";
	char letra;
	int fallos = 0;
	int se_encuentra = 0;
	int i;

	printf("Introduzca una letra: \n");

	while(fallos < 3){
		printf("Otra letra: \n");
		fflush(stdin);
		//scanf("%c", &letra);
		letra = getchar();

		letra = getch();
		for(i=0; i< 10;i++){
			if(letra == cadena[i]){
				resultado[i] = letra;
				printf("%s\n", resultado);
				se_encuentra = 1;
			}
		}

		if(se_encuentra!=1){
			fallos = fallos + 1;
			se_encuentra = 0;
			printf("Fallaste %d \n", fallos);
		}
	}


}