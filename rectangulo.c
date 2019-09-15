#include <stdio.h>

int main(){
	int base, altura, area, perimetro;
	printf("Ingresa la base del rectangulo \n");
	scanf("%d",&base);
	printf("Ingresa la altura del rectangulo \n");
	scanf("%d",&altura);
	area = base * altura;
	perimetro = (base + altura) * 2;
	printf("El area del rectangulo es: %d y su perimetro es: %d", area, perimetro);
	return(0);
}
