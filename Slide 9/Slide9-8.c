#include <stdio.h>

/*Questão: Faça um programa que leia duas matrizes A e B, contendo cada um 10 elementos numéricos quaisquer. 
Crie uma nova matriz, também de 10 elementos, onde cada elemento corresponde a soma dos elementos de A e B. Escreva na tela 
os elementos do novo conjunto, obtido. */

int main(){
    int MatrizA[2][5] = {{1,2,3,4,5},{6,7,8,9,10}}, MatrizB[2][5] = {{10,9,8,7,6},{5,4,3,2,1}}, MatrizC[2][5], i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 5; j++){
            MatrizC[i][j] = MatrizA[i][j] + MatrizB[i][j];
            printf("%d + %d : %d\n", MatrizA[i][j] , MatrizB[i][j], MatrizC[i][j]);
        }
    }
    return 0;
}
