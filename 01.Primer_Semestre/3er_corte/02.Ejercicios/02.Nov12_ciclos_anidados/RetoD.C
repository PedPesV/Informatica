#include <stdio.h>

int main(){

    int contador, contador2, j;

    printf("Hasta que numero quieres llegar?");
    if (scanf("%d", &contador) != 1){
        printf("Favor de ingresar solo numero enteros");
    }
    if (contador < 0){
        printf("Favor de ingresar numero enteros mayores a 0");
    }

    contador2 = contador;
    j = 0;
    for (int i = contador; i >= 0; i--){ 
        while (contador2>=j){ 
            printf("%d ", contador2);
            contador2 -= 1;
        }
        j++;
        contador2 = contador;
        printf("\n");
    }
    
    return 0;
}