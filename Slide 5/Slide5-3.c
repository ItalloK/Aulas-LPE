#include <stdio.h>

/*Questão: Construa um programa que leia dois números e exiba-os em ordem crescente.*/

int main(){
    int Num1, Num2;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &Num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &Num2);
    if(Num1 > Num2){
        printf("%d, %d\n", Num2, Num1);
    }else if(Num1 < Num2){
        printf("%d, %d\n", Num1, Num2);
    }else if(Num1 == Num2){
        printf("%d, %d\n", Num1, Num2);
    }
    return 0;
}
