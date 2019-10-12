#include <stdio.h>

int main(){
	int option, a, b, result, h = 0, i = 0;
	int history[5] = {0, 0, 0, 0, 0};
	while(option != 6 ){
		if(h > 4){
			h = 4;
			for(i = 0; i < 4 ; ++i ){
				history[i] = history[i + 1];
				
			}
		}
		printf("Hola, esto es una calculadora por favor selecciona la opcion que gustes \n");
		printf(" 1. Suma \n 2. Resta \n 3. Multiplicacion \n 4. Division \n 5. Historial \n 6. Salir \n");
		scanf("%d", &option);
		switch (option){
			case 1: printf("Suma \n");
					scanf("%d", &a);
					scanf("%d", &b);
					result = a + b;
					history[h] = result;
					h += 1;
					printf("%d \n", result);
					break;
			case 2: printf("Resta \n");
					scanf("%d", &a);
					scanf("%d", &b);
					result = a - b;
					history[h] = result;
					h += 1;
					printf("%d \n", result);
					break;
			case 3: printf("Multiplicacion \n");
					scanf("%d", &a);
					scanf("%d", &b);
					result = a * b;
					history[h] = result;
					h += 1;
					printf("%d \n", result);
					break;
			case 4: printf("Division \n");
					scanf("%d", &a);
					scanf("%d", &b);
					result = a / b;
					history[h] = result;
					h += 1;
					printf("%d \n", result);
					break;
			case 5: printf("Historial \n");
					for(i = 0; i < 4; ++i){
						printf("%d \n", history[i]);	
					}
					break;
		
		}
	}	
	return(0);
}
