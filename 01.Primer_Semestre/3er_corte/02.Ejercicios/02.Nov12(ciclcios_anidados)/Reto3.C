#include <stdio.h>

int main(){

    int cont1, cont2;

    printf("Cuantos Hola quieres imprimir?");
    if (scanf("%d", &cont1) != 1){
        printf("Favor de solo meter números enteros");
    }
    if(cont1 <= 0){
        printf("Favor de meter numeros mayores a 0");
    }

    printf("Cuantos Mundo quieres imprimir?");
    if (scanf("%d", &cont2) != 1){
        printf("Favor de solo meter números enteros");
    }
    if(cont2 <= 0){
        printf("Favor de meter numeros mayores a 0");
    }

    for (int i = 0; i < cont1; i++){ //cont1 = 3; 
        printf("Hola \n"); //i = 0;
        while (i < cont1){ //0 < 3;
            for (int j = 0; j < cont2;j++){ //cont2 = 2
                printf("Mundo "); //j = 0
            }
        } //Nunca sale del while
    }
    
    return 0;
}