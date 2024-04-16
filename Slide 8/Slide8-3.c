#include <stdio.h>

/*Questão:  Escreva um programa que solicite ao usuário digitar um número inteiro positivo e depois 
calcule o somatórios de todos os números pares no intervalo de 0 até o número digitado.*/

int main(){
    int Num, i, Soma = 0;
    do{
        printf("Digite um numero Inteiro possitivo: \n");
        scanf("%d", &Num);
    }while(Num < 0);
    for(i = 0; i <= Num; i++){
        if(i % 2 == 0){
            Soma += i; 
        }
    }
    printf("O Somatorio desses valores e: %d", Soma);
    return 0;
}
