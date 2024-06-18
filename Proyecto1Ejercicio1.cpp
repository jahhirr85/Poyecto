#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char** argv) {
	 
	int comparar=0, primo=0, noprimo=0, numero=0, posicion=0, contnoprimo=0, contprimo=0, posinum=0; 
	float promprimo=0.0, promnoprimo=0.0, sumprimo=0.0, sumnoprimo=0.0;
	char opcion;
	
	do {
	system ("cls");	
	printf("Digite un numero: ");
	scanf("%i", &numero);
	posicion++;
	primo=0, noprimo=0;
	for (int div = 1; div <= numero; div++) {
		
		if (numero % div== 0) {
			primo++;
		}else {
			noprimo++;
		}
	}
	if (primo==2) {
		printf("El numero es primo");
		contprimo++;
		sumprimo=numero+sumprimo;
		promprimo=sumprimo/contprimo;
		
		} else {
		printf("El numero no es primo");
		contnoprimo++;
		sumnoprimo=numero+sumnoprimo;
		promnoprimo=sumnoprimo/contnoprimo;	
		}
	

	if	(numero>comparar) {
		comparar=0+numero;
		posinum=0+posicion;
		}
	printf("\n");	
	printf("\nDesea ingresar otro numero (s/n): ");
	scanf(" %c", &opcion);
	}while (opcion=='s' || opcion=='S');
	system("cls");
	printf("*****************ESTADISTICAS*************************");
	printf("\n");
	printf("\nEl numero mayor digitado es %i", comparar);
	printf(" y se digito en la posicion %i", posinum);
	printf("\nCantidad de numeros primos digitados:		%i", contprimo);
	printf("\nLa sumatoria de los numeros primos es:		%.0f", sumprimo);
	printf("\nEl promedio de los numeros primos es:		%.1f", promprimo);
	printf("\nCantidad de numeros no primos digitados:	%i", contnoprimo);
	printf("\nLa sumatoria de los numeros no primos es:	%.0f", sumnoprimo);
	printf("\nEl promedio de los numeros primos es:		%.1f", promnoprimo);
	
	return 0;
}
