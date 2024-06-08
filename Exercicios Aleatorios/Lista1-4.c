#include <stdio.h>

#define qntNotas 3

/* Questão: Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matricula do aluno, 
nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.

(a) Permita ao usuario entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral.
(d) Encontre o aluno com menor media geral.
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovacão.*/

typedef struct Alunos{
    char Nome[50];
    float p1;
    float p2;
    float p3;
    int MatriculaAluno;
    float Media;
};

float CalcMedia(float n1, float n2, float n3){
    float res;
    res = (n1+n2+n3)/3;
    return res;
}

int main(){
    struct Alunos A[2];

    for(int i = 0; i<qntNotas; i++){
        printf("Digite o Nome do %dº Aluno ( apenas o primeiro nome do aluno ): \n",i+1);
        scanf("%s", &A[i].Nome);
        printf("Digite o numero da matricula do %dº Aluno: ",i+1);
        scanf("%d", &A[i].MatriculaAluno);
        do{
            printf("Digite 1º nota do %dº aluno: \n", i+1);
            scanf("%f", &A[i].p1);
        }while(A[i].p1 > 10 || A[i].p1 < 0);
        do{
            printf("Digite 2º nota do %dº aluno: \n", i+1);
            scanf("%f", &A[i].p2);
        }while(A[i].p2 > 10 || A[i].p2 < 0);
        do{
            printf("Digite 3º nota do %dº aluno: \n", i+1);
            scanf("%f", &A[i].p3);
        }while(A[i].p3 > 10 || A[i].p3 < 0);        
        A[i].Media = CalcMedia(A[i].p1, A[i].p2, A[i].p3);
    }

    float firstP1, maiorMedia, menorMedia;
    int indiceMaior, indiceMenor;
    for(int i = 0; i<qntNotas; i++){
        if(i == 0){
            firstP1 = A[0].p1;
            maiorMedia = A[0].Media;
            menorMedia = A[0].Media;
            indiceMaior = 0;
            indiceMenor = 0;
            continue;
        }
        if(A[i].p1 > firstP1){
            firstP1 = A[i].p1;
        }
        if(A[i].Media > maiorMedia){
            maiorMedia = A[i].Media;
            indiceMaior = i;
        }
        if(A[i].Media < menorMedia){
            menorMedia = A[i].Media;
            indiceMenor = i;
        }
    }

    printf("-------------------------- DADOS --------------------------\n");
    for(int i = 0; i<qntNotas; i++){
        printf("------------------------------- %dº Aluno -------------------------------\n", i+1);
        printf("Nome do %d aluno: %s\n", i+1, A[i].Nome);
        printf("Nº da Matricula do %dº Aluno: %d\n", i+1, A[i].MatriculaAluno);
        printf("Notas do %dº Aluno, 1º: %.2f, 2º: %.2f, 3º %.2f\n", i+1, A[i].p1, A[i].p2, A[i].p3);
        printf("Media do %dº Aluno: %.2f\n",i+1, A[i].Media);
        printf("--------------------------------------------------------------------------\n", i+1);
    }
    printf("-------------------------- DADOS --------------------------\n");

    printf("Maior 1º Nota: %.2f, Maior Media: %.2f, Menor Media: %.2f\n", firstP1, maiorMedia, menorMedia);
    printf("Aluno com Maior Media: %s, Media: %.2f\n", A[indiceMaior].Nome, A[indiceMaior].Media);
    printf("Aluno com a Menor Media: %s, Media: %.2f\n", A[indiceMenor].Nome, A[indiceMenor].Media);

    return 0;
}