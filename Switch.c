#include <stdio.h>

int main(void) {
	unsigned int nota;
	
	nota = 4;
	
	switch (nota){
		
	case 10:
	case 9:
	case 8:
		printf("Promocionado\n");
	
		break;
	case 7:
	case 6:
		printf("Aprobado\n");
		break;
	default:
		printf("Libre");
		break;
		}
return 0;
}
