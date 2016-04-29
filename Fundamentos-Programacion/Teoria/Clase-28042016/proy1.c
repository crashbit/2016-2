#include <stdio.h>
#include <string.h>

int main(){

	char login[3][10] = {"lola", "pedro", "juan"};
	char passwd[3][10]= {"1234", "abcd", "12ab"};

	char login_user[10];
	char passwd_user[10];

	printf("login: ");
	scanf("%s", login_user);


// pongamos un Cero en lugar de "i" como la primer iteración
	if(strcmp(login_user, login[0])==0){
		printf("login valido");
	}

	else printf("Login no valido");
}