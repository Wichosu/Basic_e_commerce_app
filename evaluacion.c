#include <stdio.h>

int main(){
	int calificacion;
	printf("Ingresa tu calificacion y te dire como te fue \n");
	scanf("%d", &calificacion);
	if(calificacion > 10){
		printf("No existen calificaciones mayores a 10, al menos no en Mexico \n");
	}
	if(calificacion == 10){
		printf("Tu calificacion es excelente \n");
	}
	if(calificacion == 9){
		printf("Tu calificacion es muy buena \n");
	}
	if(calificacion == 8){
		printf("Tu calificacion es buena \n");
	}
	if(calificacion == 7){
		printf("Tu calificacion es regular \n");
	}
	if(calificacion == 6){
		printf("Tu calificacion es regular \n");
	}
	if(calificacion <= 5){
		printf("Tu calificacion es mala \n");
	}
	return(0);
	
}
