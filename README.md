# Utility-on-C-Utilidades-en-c-
Algunos de los programillas utiles que voy creando en lenguaje C,


#include <stdio.h>

int main(){
	
float numero;
int iva=21;
int porc=100;



printf("\nPor favor escribe el numero a calcular:\n");
scanf("%f", &numero);
float resultado=(numero*iva)/porc;

printf("El iva es: %f",numero+resultado);


main();
	
	
}
