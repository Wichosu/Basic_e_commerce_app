#include <stdio.h>

int main(){
	int tabla, i, resultado;
	i = 1;
	printf("Ingresa el numero del cual desees saber su tabla de multiplicar \n");
	scanf("%d", &tabla);
	while(i <= 10){
		resultado = tabla * i;
		printf("%d X %d = %d \n", tabla, i, resultado);
		i = i + 1;
	}
	return(0);
}
