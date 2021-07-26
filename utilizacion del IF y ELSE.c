#include <stdio.h>

int main(void) {
	
	int contrasenia = 1234;
	int user_pass;
	
	
	printf("Ingrese la contrasenia:");
	scanf ("%d", &user_pass);
	
	if (user_pass == contrasenia){
		printf ("La contraseniaes es valida\n");
	} else {
		printf("La contrasenia no es valida\n");
	}
	
	
	
	return 0;
}

