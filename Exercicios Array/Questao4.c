#include <stdio.h>

/*Questão: 4. Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3 números inteiros quaisquer.
Em seguida, gere um array unidimensional pela soma dos números de cada coluna da matriz e mostre na
tela esse array. Por exemplo, a matriz:
5 -8 10
1 2 15
25 10 7
Vai gerar um vetor, onde cada posição é a soma das dos valores de cada coluna dessa matriz. A primeira
posição do vetor será a somatória de 5 + 1 + 25, e assim por diante.*/

int main(){

    int Matriz[3][3], i, j, Vetor[3] = {0,0,0};
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o [%d][%d] valor: \n", i, j);
            scanf("%d", &Matriz[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            Vetor[i] += Matriz[j][i];  
        }
    }
    for(i = 0; i<3; i++){
        printf("A soma da coluna %d e: %d\n", i+1, Vetor[i]);
    }
    return 0;
}