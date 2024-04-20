#include <stdio.h>
#include <string.h>

/*Questão: Faça um programa que leia uma matriz A que armazene 12 nomes de pessoas informados pelo usuário. 
O algoritmo deverá procurar na matriz se existe um determinado nome que foi informado pelo usuário. Caso exista, exibir 
uma mensagem avisando que encontrou e em qual posição da matriz. Caso não, exibir uma mensagem de que o nome não foi
encontrado.*/

int main(){
    char Matriz[12][20], Nome[20];
    int i, Nome_Encontrado = 0;
    for(i = 0; i<12; i++){
        printf("Digite o %d nome: (Ate 20 caracteres)\n", i);
        gets(Matriz[i]);
    }
    printf("Digite o nome que deseja pesquisar: \n");
    gets(Nome);
    for(i = 0; i<12; i++){
        if (strcmp(Matriz[i], Nome) == 0) {
            printf("O nome %s foi encontrado na posicao %d. \n", Nome, i);
            Nome_Encontrado = 1;
        }
    }
    if(Nome_Encontrado == 0){
        printf("O nome procurado nao foi encontrado.\n");
    }
    return 0;
}
