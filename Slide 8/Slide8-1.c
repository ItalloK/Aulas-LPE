#include <stdio.h>

//Questão: Escreva um programa que calcule a soma dos primeiros 30 números pares

int main(){
    int i = 0, Soma = 0, Num, Verificao = 0;
    do{
        printf("Digite um numero: \n");
        scanf("%d", &Num);
        if(Num % 2 == 0){
            Soma += Num;
            i++;
        }
        if(i == 30){
            Verificao = 1;
        }
    }while(Verificao != 1);    
    printf("A soma dos 30 numeros pares e: %d", Soma);
    return 0;
}
