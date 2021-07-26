#include <stdio.h>

int main(void) {
	
	int contrasenia = 1234;
	int user_pass;
	
	
	printf("Ingrese la contrasenia:");
	scanf ("%d", &user_pass);
	
	if(user_pass == contrasenia){
		printf("La contrasenia es valida:\n");
	}
	if (user_pass != contrasenia) {
		printf ("contrasenia no valida\n");
		
	}
	
	
	return 0;
}

