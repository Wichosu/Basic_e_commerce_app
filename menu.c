#include <stdio.h>

int main(){
	int option;
	option = 0;
	while (option != 5){
		printf("Escoge una de las siguientes opciones \n");
		printf("1. Suma \n");
		printf("2. Calcular el area y perimetro de un rectangulo \n");
		printf("3. Evaluar calificaciones \n");
		printf("4. Escoge un numero para saber su tabla de multiplicar \n");
		printf("5. Salir del menu \n");
		scanf("%d", &option);
		switch (option){
			case 1: printf("Has escogido la opcion suma \n");
					int num1, num2, result;
					printf("Ingresa el primer numero a sumar \n");
					scanf("%d", &num1);
					printf("Ingresa el segundo numero a sumar \n");
					scanf("%d", &num2);
					result = num1 + num2;
					printf("%d + %d = %d \n", num1 , num2 , result);
					break;
			case 2: printf("Has escogido la opcion del rectangulo \n");
					int length, width, area, perimeter;
					printf("Ingresa la base del rectangulo \n");
					scanf("%d", &length);
					printf("Ingresa la altura del rectangulo \n");
					scanf("%d", &width);
					area = length * width;
					perimeter = (length + width) * 2;
					printf("El area es %d y el perimetro es %d \n", area, perimeter);
					break;
			case 3: printf("Has escogido la opcion para evaluar calificaciones \n");
					int grade;
					printf("Ingresa tu calificacion y te dire como te fue \n");
					scanf("%d", &grade);
					if(grade > 10){
						printf("Tu calificacion no puede ser mayor de 10 \n");
					}
					if(grade==10){
						printf("Tu calificacion fue excelente \n");
					}
					if(grade==9){
						printf("Tu calificacion fue muy buena \n");
					}
					if(grade==8){
						printf("Tu calificacion fue buena \n");
					}
					if(grade==7){
						printf("Tu calificacion fue regular \n");
					}
					if(grade==6){
						printf("Tu calificacion fue regular \n");
					}
					if(grade<=5){
						printf("Tu calificacion fue muy mala \n");
					}
					break;
			case 4: printf("Has escogido la opcion tablas de multiplicar \n");
					int table, i, table_result;
					printf("Ingresa cualquier numero y te mostrare su tabla \n");
					scanf("%d", &table);
					for (i=1; i<=10; ++i){
						table_result = table * i;
						printf("%d X %d = %d \n", table, i, table_result);
					}
					break;
			case 5: printf("Hasta la vista \n");
					break;
			default:printf("Escoge un numero entre 1 y 5 \n");
					break;
		}
	}
	return(0);
}
