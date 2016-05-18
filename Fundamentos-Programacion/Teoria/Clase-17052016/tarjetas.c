#include <stdio.h>
#include <string.h>

int main(){
	
	struct Marathon{
		char pregunta[50];
		char r_a[20];
		char r_b[20];
		char r_c[20];
		char correcta;
		int puntos;
	};

	struct Marathon tarjeta[3];

	strcpy(tarjeta[0].pregunta, "Capital de Rusia");
	strcpy(tarjeta[0].rc_a, "Moscu");
	strcpy(tarjeta[0].rc_b, "leningrado");
	strcpy(tarjeta[0].rc_c, "chechenia");
	tarjeta[0].correcta = 'A';
	tarjeta[0].puntos = 3;

	

}