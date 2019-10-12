#include <stdio.h>

int main(){
	int numero, unidad, decena, centena;
	printf("Ingresa un numero de 3 digitos lo dividire entre 100 y te mostrare su unidad, decena, y centena \n");
	scanf("%d", &numero);
	centena = numero / 100;
	numero = numero % 100;
	printf("La centena es %d \n", centena);
	decena = numero / 10;
	numero = numero % 10;
	printf("La decena es %d \n", decena);
	unidad = numero / 1;
	printf("La unidad es %d \n", unidad);
	return(0); 
}
