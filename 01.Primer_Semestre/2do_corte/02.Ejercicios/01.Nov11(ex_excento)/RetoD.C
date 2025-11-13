#include <stdio.h>

int main(){

    int nI, nF, rango, multi, numero;

    printf("---Programa para hacer un ciclo de multilplicaciones--- \n");
    
    //Primer numero
    printf("Ingresa numero inicial: \n");
    if(scanf("%d", &nI) != 1){
        printf("Favor de ingresar solo numeros validos enteros \n");
        return -1;
    }
    if(nI < 0){
        printf("Favor de ingresar numero mayores a cero \n");
        return -2;
    }

    //Segundo numero
    printf("Ingresa numero final: \n");
    if(scanf("%d", &nF) != 1){
        printf("Favor de ingresar solo numeros validos enteros \n");
        return -1;
    }
    if(nF < 0){
        printf("Favor de ingresar numero mayores a cero \n");
        return -2;
    }

    //nI menos que nF
    if(nI > nF){
        printf("El numero inicial no puede ser mayor al numero final \n");
        return -3;
    }

    rango = nF - nI;

    for(int i = 0; i < rango; i++){
        numero = nI + 1;
        multi = nI * numero; 
        nI = numero;
        printf("%d * %d = %d \n", nI-1, numero, multi);
    }

}