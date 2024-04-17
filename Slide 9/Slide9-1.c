#include <stdio.h>

/*Questão: Escreva um programa que cria um vetor de inteiros com duas posições e, depois, troque o conteúdo 
entre essas posições.*/

int main(){
    int Num[2], Trade;
    printf("Digite um numero: \n");
    scanf("%d", &Num[0]);
    printf("Digite outro numero: \n");
    scanf("%d", &Num[1]);
    printf("Antes os numeros eram %d e %d\n", Num[0], Num[1]);
    Trade = Num[0];
    Num[0] = Num[1];
    Num[1] = Trade;
    printf("Agora sao: %d e %d\n", Num[0], Num[1]);
    return 0;
}
