#include <stdio.h>
#include <stdlib.h>

int main(){
	
	struct Alumno{
		int id;
		char nombre[10];
		int edad;
		char sexo;
		struct Alumno *sig;
	};

	struct Alumno *fi;
	struct Alumno *lista;
	int i;
	lista = (struct Alumno *)malloc(sizeof(struct Alumno));

	for(i=0;i<10;i++){
		fi = (struct Alumno *)malloc(sizeof(struct Alumno));
		strcpy(fi->nombre, "german");
		fi->id = i;
		fi->sig = lista->sig;
		lista->sig = fi;
	}

}