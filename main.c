#include <stdio.h>
#include <math.h>

void somatoria (int x, int y){
    int i; 
    long int soma=0;
    for (i=x; i<=y; i++){
        soma = soma +1;
    }
    printf("\nA somatoria é %ld\n", soma);
}

long int somatoriaRecursiva(int x,int y){
    if(x<=y){
        long int soma = x;
        long int resultado = somatoriaRecursiva(x+1, y);
        printf("%ld - ",resultado);
        return soma + resultado;
    }else{
        return 0;
    }
}

int main (void){
    int x, y;
    printf("\n\n :::::::::::::::::: INICIO DO PROGRAMA ::::::::::::::::\n\n");
    printf("\nDigite x");
    scanf("%d",&x);
    printf("\nDigite y");
    scanf("%d",&y);

    soma(x, y);

    return 0;
}