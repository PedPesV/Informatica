#include <stdio.h>

int main(){

    int contador;

    printf("Hasta que número quieres llegar?");
    if (scanf("%d", &contador) != 1){

        printf("Solo se aceptan números, ");
        return 1;

    }
    if (contador <=0){
        printf("Ingresa numeros positivos");
        return 1;
    }

    for (int i = 1; i <= contador; i++){
        for(int j=1; j <= i;j++){
            printf("%d", j);
            if (j < i){
               printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
    

}