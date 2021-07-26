#include <stdio.h>

//Presentamos en el Trabajo Práctico 1 la calculadora del índice de masa corporal (BMI).
	//Las fórmulas para calcular el BMI son:
	//BMI= Peso en libras x 703 / (Altura en pulgadas) 2
	//BMI = Peso en kilogramos / (Altura en metros) 2
	//Cree una aplicación de calculadora de BMI que lea el peso del usuario en libras y la altura
	//en pulgadas (o, si lo prefiere, el peso del usuario en kilogramos y la altura en metros), luego
	//calcula y muestra el índice de masa corporal del usuario. Además, la aplicación debe
	//mostrar la siguiente información del Departamento de Salud y Servicios Humanos para que
	//el usuario pueda evaluar su BMI:
	//VALORES BMI
	//Bajo peso: menos de 18.5
	//Normal: entre 18.5 y 24.9
	//Sobrepeso: entre 25 y 29.9Obeso: 30 o más




int main(void) {
	
	float peso;
	float altura;
	float bmi;
	printf("Ingrese su altura en metros:");

	scanf("%f", &altura);
	
	printf("Ingrese su peso en kilogramos:");
	scanf("%f", &peso);
	
	//Realizamos el calculo
	
	bmi = peso /(altura * altura);
	
	printf("\nSu BMI es igual a:%f", bmi);
	printf ("\nVALORES BMI");
	printf ("\nBajo peso: menos de 18.5:");
	printf	("\nNormal: entre 18.5 y 24.9:");
	printf	("\nSobrepeso: entre 25 y 29.9Obeso: 30 o más:");
	
	
	return 0;
}

