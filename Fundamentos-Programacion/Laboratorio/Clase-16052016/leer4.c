#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char* getfield(char* line, int num);

int main(){
	
	FILE *archivo;
	int total = 0;
	char cadena[1024];

	archivo = fopen("tarjetas.txt", "r");

	if(archivo == NULL){
		printf("No existe el archivo\n");
		return 0;
	}

    while (fgets(cadena, 1024, archivo))
    {
        char* tmp = strdup(cadena);
        printf("Cadena %s\n", getfield(tmp, 3));
        printf("Cadena %s\n", getfield(tmp, 1));
        free(tmp);
    }


	fclose(archivo);

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