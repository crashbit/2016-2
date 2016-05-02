// Controla el login y password
#include <stdio.h>
#include <string.h>


int main(){

	int i, j=0;
	int valido =0;
	char login[3][10]={"juan", "pedro", "luis"};
	char passwd[3][10] = {"abcd", "1234","ab12"};

	char login_user[10];
	char passwd_user[10];

	while(j<3){
		printf("login: ");
		scanf("%s", login_user);

		printf("password: ");
		scanf("%s", passwd_user);

		//validamos primero el login
		for(i=0; i<3; i++){
			if(strcmp(login_user, login[i])== 0){
				printf("Login valido\n");
				if(strcmp(passwd_user, passwd[i])==0){
					printf("Password valido\n");
					valido =1;
				}
				else{
					printf("Password invalido\n");
				}
			}
		}

		if(valido==1){
			printf("Iniciando sesion para usuario %s",login_user);
			return 0;
		}

		else
			j++;
	}
	printf("Usuario invalido, apagando sistema\n\n");

}