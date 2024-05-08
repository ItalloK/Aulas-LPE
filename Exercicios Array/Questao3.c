#include <stdio.h>

/*Questão: 3. Fazer um programa para ler 10 valores e os armazene em um vetor. Em seguida, mostre a posição onde
se encontram o maior e o menor valor.*/

int main(){
    int i, menor_pos, maior_pos; 
    int Vetor[10];
    for(i = 0; i < 10; i++){
        printf("Digite o %d valor: \n", i);
        scanf("%d", &Vetor[i]);
        if(Vetor[i] < Vetor[i-1]){
            menor_pos = i;
        }
        if(Vetor[i] > Vetor[i-1]){
            maior_pos = i;
        }
    }
    for(i = 0; i<10; i++){
        printf("pos: %d, valor: %d\n", i,  Vetor[i]);
    }
    printf("Posicao do menor: %d e Posicao do Maior: %d\n", menor_pos, maior_pos);
    return 0;
}