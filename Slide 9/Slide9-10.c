#include <stdio.h>

/*Questão: Dada uma matriz de 4x5 elementos inteiros. Faça um programa que:
a) a inicialização de todos os elementos da matriz seja com valores informados pelo usuário;
b) calcule e mostre na tela a soma de cada linha;
c) calcule e mostre na tela a soma de cada coluna;*/

int main(){
    int Matriz[4][5], i, j, Total_Linha = 0, Total_Coluna = 0;
    for(i = 0; i<4; i++){
        for(j = 0; j<5; j++){
            printf("Digite um valor: Posicao %d, %d\n", i, j);
            //scanf("%d", &Matriz[i][j]);
            Matriz[i][j] = rand() % 5;

        }
    }
    for(i = 0; i<4; i++){
        for(j = 0; j<5; j++){
            Total_Coluna += Matriz[i][j];
        }
        printf("A soma da coluna %d e: %d\n", i,Total_Coluna);
        Total_Coluna = 0;
    }
    for(j = 0; j<5; j++){
        for(i = 0; i<4; i++){
            Total_Linha += Matriz[i][j];
        }
        printf("A soma da coluna %d e: %d\n", j,Total_Linha);
        Total_Linha = 0;
    }
    return 0;
}
