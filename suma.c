#include<stdio.h>

int main(){
	int num1, num2, resultado;
	printf("Ingresa el primer numero a suma \n");
	scanf("%d", &num1);
	printf("Ingresa el segundo numero a sumar\n");
	scanf("%d", &num2);
	resultado = num1 + num2;
	printf("%d + %d = %d", num1, num2, resultado);
	return(0);
}
