#include <stdio.h>

/*Questão: Escreva um programa que calcule a soma dos primeiros 30 números ímpares.*/

int main(){
    int Num, Condicao = 0, i, Total = 0;
    for(i = 0; Condicao < 30; i++){
        printf("Digite um numero impar: \n");
        scanf("%d", &Num);
        if(Num % 2 != 0){
            Total += Num;
            Condicao++;
        }
    }
    printf("Somatorios dos impares e: %d", Total);
    return 0;
}
