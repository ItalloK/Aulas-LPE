#include <stdio.h>

/*Questão: Construa uma estrutura aluno com nome, numero de matricula e curso. 
Leia do usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.*/

typedef struct Alunos{
    char Nome[50];
    int NumMatricula;
    char Curso[50];
};

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    struct Alunos A[5];

    for(int i = 0; i<5; i++){
        printf("Digite o nome do %dº Aluno: \n", i+1);
        fgets(A[i].Nome, sizeof(A[i].Nome), stdin);
        printf("Agora digite o Curso do %dº Aluno: \n", i+1);
        fgets(A[i].Curso, sizeof(A[i].Curso), stdin);
        printf("Agora digite o numero da matricula do %dº Aluno: \n", i+1);
        scanf("%d", &A[i].NumMatricula);
        limparBufferEntrada();
    }

    puts("----------- Dados -----------");
    for(int i = 0; i<5; i++){
        printf("----------- Aluno %d -----------\n", i+1);
        printf("Nome: %s\n", A[i].Nome);
        printf("Curso: %s\n", A[i].Curso);
        printf("Numero de Matricula: %d\n", A[i].NumMatricula);
        printf("----------- Aluno %d -----------\n", i+1);
    }
    puts("----------- Dados -----------");

    return 0;
}