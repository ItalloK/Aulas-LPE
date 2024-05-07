#include <stdio.h>

/*Questão: 1. Faça um programa que crie um vetor denominado A que armazene 8 números inteiros. O programa
deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 3;
(b) Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do
vetor e mostre na tela esta soma;
(c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 239;
(d) Mostre na tela cada valor do vetor A, um em cada linha*/

int main(){
    int A[8] = {1, 0, 5, -2, -5, 3, 0, 0};
    int B = A[0]+A[1]+A[5];
    printf("A soma dos valores e: %d\n", B); // Valor correto: 4
    A[4] = 239;
    int i = 0;
    for(i = 0; i < 8; i++){
        printf("Valor %d: %d\n", i, A[i]);
    }
    return 0;
}