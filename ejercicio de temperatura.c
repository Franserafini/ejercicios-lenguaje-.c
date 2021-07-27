#include <stdio.h>

int main() {
	//diseñar un programa que imprima la fase del agua esperada
	//temperatura en grados centigrados ingresa por el usuario
	//Las temperaturas seran:
	//solido temperatura menor a 0 ºC
	//liquido para temperatura mayor a 0 y menor que 100
	//gaseoso para temperatura mayor a 100
	
	int temperatura;
	
	printf("Ingrese Temperatura:");
		scanf("%d", &temperatura);
	
	if (temperatura < 0 ){
		printf("Solido:");
}
	if (temperatura >= 0){
		if (temperatura < 100){
			printf("Liquido:");
		}
	}
	if (temperatura >= 100);
		printf("Gaseoso:");
		
	return 0;
}

