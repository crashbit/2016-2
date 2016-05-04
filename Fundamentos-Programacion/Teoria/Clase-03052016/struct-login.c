#include <stdio.h>
#include <string.h>

int main(){
	
	struct Usuario{
		char login[10];
		char passwd[10];
	};

	struct Usuario users[3];

	strcpy(users[0].login, "Pedro");
	strcpy(users[1].login, "Juan");
	strcpy(users[2].login, "Rosa");

	strcpy(users[0].passwd, "1234");
	strcpy(users[1].passwd, "abcd");
	strcpy(users[2].passwd, "12ab");	 
	


}