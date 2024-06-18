#include <iostream>
#include <cstdlib>
#include <conio.h>

int main(int argc, char** argv) {
		char opcion;
		opcion = 0;
		do{
			int y = 0;
		    int x;
			printf("Ingrese el numero a invertir: ");
	        scanf("%i", &x);
	        printf("\n");
	        printf("El numero ingresado es %i", x);
	        if (x<=99999) {
				while (x != 0){
	        	
		    y = y * 10 + x % 10;
		    x = x / 10;
	    		}		
	    	printf("\n");
	        printf("El numero invertido es %i", y);
	        printf("\n");
        	printf("Desea continuar?: s/n");
	        opcion = getch();
	        printf("\n");
	    	}else {
	    	printf("\n*********Numero incorrecto************\nDesea ingresar otro numero?: s/n");
	        opcion = getch();
	        printf("\n");
			}	
	    } while (opcion=='s');
	return 0;
}
