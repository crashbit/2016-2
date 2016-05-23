#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char* getfield(char* line, int num);

int main(){
	struct Marathon{
        char pregunta[50];
        char r_a[20];
        char r_b[20];
        char r_c[20];
        char correcta;
        int puntos;
    };

    char linea[1024];

    struct Marathon tarjetas[2];
    FILE *archivo;

    archivo = fopen("tarjetas.txt", "r");

    if(archivo == NULL){
    	printf("No existe el archivo");
    	return 0;
    }

    
    while(fgets(linea, 1024, archivo)){
    	char* tmp = strdup(linea);
        printf("Pregunta: %s\n", getfield(tmp, 1));
        printf("Respuesta %s\n", getfield(tmp, 1));
        free(tmp);
    }


	printf("\n\n");
}

const char* getfield(char* line, int num)
{
    const char* tok;
    for (tok = strtok(line, "|");
            tok && *tok;
            tok = strtok(NULL, "|\n"))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}
