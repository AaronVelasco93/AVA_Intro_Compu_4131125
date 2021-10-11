#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int main(int argc, char** argv) {
	
	/*Sumar dos numeros, estos numero pedirlos por teclado*/
	
	//Declaracion de variables
	int iDato1;
	int iDato2;
	int iResultado;
	
	printf("\n ----- SUMA DE DATOS [DOS DATOS]-----\n");
	
	
	//LECTURA DE DATOS
	printf("Ingresa tu primer numero:");
		scanf("%d",&iDato1); //entrada de dato tipo numerico por teclado Dato1
	
	printf("Ingresa tu segundo numero:");
		scanf("%d",&iDato2); //entrada de dato tipo numerico por teclado Dato2
		
	//Operacion
	iResultado=iDato1+iDato2;
	
	
	//Imprimir el resultado
	
	printf("El resultado de la suma es: %d",iResultado);	
		
	
	return 0;
}
