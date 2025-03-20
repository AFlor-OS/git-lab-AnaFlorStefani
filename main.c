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

long int produtoriaRecursiva(int x, int y){
    if(y>=x){
        //long int produto=y;
        long int resultado = produtoriaRecursiva(x,y-1);
        printf("%ld - ", resultado);
        return y*resultado;
    }else{
        return 1;
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

    printf("\nA somatória é: %ld",somatoriaRecursiva(x,y));
 printf("\nA produtória é: %ld",produtoriaRecursiva(x,y));
    return 0;
}