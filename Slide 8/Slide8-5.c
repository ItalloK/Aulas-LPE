#include <stdio.h>

/*Questão: Escreva um programa que solicite ao usuário digitar um número inteiro positivo e imprima na tela todos os 
números ímpares deste intervalo (de 0 até o número digitado).*/

int main(){
    int Num, i;
    do{
        printf("Digite um numero: \n");
        scanf("%d", &Num);
    }while(Num < 0);
    for(i = 0; i <= Num; i++){
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }
    return 0;
}
