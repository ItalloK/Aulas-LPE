#include <stdio.h>

/*Questão: Escreva um programa que leia dois números e exiba o maior e o menor deles. Caso os números sejam iguais 
deve ser exibida uma mensagem ao usuário informando isto.*/

int main(){
    int Num1, Num2;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &Num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &Num2);
    if(Num1 > Num2){
        printf("O maior e: %d e o menor: %d", Num1, Num2);
    }else if(Num1 < Num2){
        printf("O maior e: %d e o menor: %d", Num2, Num1);
    }else if(Num1 == Num2){
        printf("Os numeros sao iguais");
    }
    return 0;
}
