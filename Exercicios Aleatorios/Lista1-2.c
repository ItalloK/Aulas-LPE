#include <stdio.h>

/* Questão: Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura.*/

typedef struct Dados{
    char Nome[50];
    int Idade;
    char Endereco[100];
};

int main(){

    struct Dados dados;
    printf("Digite o nome da pessoa: \n");
    fgets(dados.Nome, sizeof(dados.Nome), stdin);
    printf("Digite o endereco da pessoa: \n");
    fgets(dados.Endereco, sizeof(dados.Endereco), stdin);
    printf("Digite a Idade da pessoa: \n");
    scanf("%d", &dados.Idade);

    printf("--------- Dados ---------\n");
    printf("Nome: %s\n", dados.Nome);
    printf("Idade: %d\n", dados.Idade);
    printf("Endereco: %s\n", dados.Endereco);
    printf("--------- Dados ---------\n");
    return 0;
}