#include <stdio.h>
#include <stdlib.h>

char cpu[4][4];
char jugador[4][4];

void carga_cpu();
//void carga_jugador();
int main(){
	int i, j;
	carga_cpu();

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%c", cpu[i][j]);
		}
		printf("\n");
	}

	//carga_jugador();
}

void carga_cpu(){
	int i, j, x;

	for(i=0; i<5;i++){
		for(j=0;j<5;j++){
			matriz[i][j]=' ';
		}
	}

	srand(time(NULL));   // Se genera la semilla
	for(x=0;x<5; x++){
		i = rand()%4;   // coordenada en renglon
		j = rand()%4;   // coordenada en columna

		cpu[i][j] = '*';
	}

}