#include <stdio.h>

int main(){

	int opcion = 0;

	while(opcion != 10){
	printf("Elije una opción\n");

	printf("1) Guacamaya \t 2)Guajolota\n");
	printf("3) Taquitos \t 4) Sopes\n");
	
	printf("Su opción: ");
	scanf("%d", &opcion);

	switch(opcion){
		case 1:
			printf("Usted quiere guacamayas");
			break;

		case 2: 
			printf("Usted quiere guajolotas");
			break;
		
		case 3:
			printf("Usted quiere Taquitos");
			break;

		case 4:
			printf("Usted quiere Sopes");
			break;

		default:
			printf("Usted no quiere nada, largo, :P");
			break;
	}
	printf("\n\n");
 }// fin del while
 printf("\nGracias por su visita\n");

}