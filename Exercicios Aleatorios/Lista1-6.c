#include <stdio.h>

/* Questão: Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de
alunos: Matricula, Nome, Codigo da Disciplina, Nota1 e Nota2. Considere uma turma de ate 10 alunos. 
Após ler todos os dados digitados, e depois de armazena-los em um vetor de estrutura, 
exibir na tela a listagem final dos alunos com as suas respectivas medias finais 
(use uma media ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0). */
#define qntAlunos 2

typedef struct Alunos{
    char Nome[20];
    int Matricula, CodigoDisciplina;
    float Nota1, Nota2;
};

int main(){

    struct Alunos A[qntAlunos];

    for(int i = 0; i<qntAlunos; i++){
        printf("Digite o primeiro nome do %dº Aluno: \n",i+1);
        //fgets(A[i].Nome, sizeof(A[i].Nome), stdin);
        scanf("%s", &A[i].Nome);
        printf("Digite a Matricula do %dº Aluno: \n", i+1);
        scanf("%d", &A[i].Matricula);
        printf("Digite o Cod da Disciplina do %dº Aluno: \n", i+1);
        scanf("%d", &A[i].CodigoDisciplina);
        printf("Digite a 1º nota do %dº Aluno: \n", i+1);
        scanf("%f", &A[i].Nota1);
        printf("Digite a 2º nota do %dº Aluno: \n", i+1);
        scanf("%f", &A[i].Nota2);
    }

    printf("--------------- Dados ---------------\n");
    for(int i = 0; i<qntAlunos; i++){
        printf("---------------------------------------------------------------------------\n");
        printf("Aluno: %d\n", i+1);
        printf("Nome: %s \n", A[i].Nome);
        printf("Matricula: %d \n", A[i].Matricula);
        printf("Codigo Disiciplina: %d \n", A[i].CodigoDisciplina);
        printf("Nota 1: %.2f, com Peso 1: %.2f \n", A[i].Nota1, (A[i].Nota1 * 1.0));
        printf("Nota 2: %.2f, com Peso 2: %.2f \n", A[i].Nota2, (A[i].Nota1 * 2.0));
        printf("---------------------------------------------------------------------------\n");
    }
    printf("--------------- Dados ---------------\n");
    return 0;
}