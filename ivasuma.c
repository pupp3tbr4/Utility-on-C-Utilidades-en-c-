#include <stdio.h>

int main(){
	
float numero;
int iva=21;
int porc=100;



printf("\nPor favor escribe el numero a calcular:\n");
scanf("%f", &numero);
float resultado=(numero*iva)/porc;

printf("Las suma de tu numero mas iva es: %f",numero+resultado);


main();
	
	
}
