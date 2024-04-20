#include <stdio.h>

/*Questão: Dada uma matriz de 5x5 elementos float. Faça um programa que:
a) a inicialização de todos os elementos da matriz seja com valores informados pelo usuário;
b) calcule e mostre na tela a soma de todos os seus elementos, bem como a média desses elementos;
c) imprima os valores da diagonal principal e a soma desses valores.*/

int main(){
    float Matriz[5][5], Total = 0, Media, Soma_Diagonal = 0;
    int i, j;
    for(i = 0; i<5; i++){
        for(j = 0; j<5; j++){
            printf("Digite um numero: Posicao: %d - %d\n", i, j);
            scanf("%f", &Matriz[i][j]);
        }
    }
    for(i = 0; i<5; i++){
        for(j = 0; j<5; j++){
            Total += Matriz[i][j];
        }
    }
    Media = Total/25;
    printf("A media dos valores e: %f\n\n", Media);
    for (int i = 0; i < 5 && i < 5; i++) {
        printf("Valores Diagonal: %f\n", Matriz[i][i]);
        Soma_Diagonal += Matriz[i][i];
    }
    printf("A soma da diagonal e: %f\n", Soma_Diagonal);
    return 0;
}
