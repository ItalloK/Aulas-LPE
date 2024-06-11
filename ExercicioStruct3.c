#include <stdio.h>

/* Questão: Faça um programa para um concurso de beleza onde precisa-se armazenar os dados das 30 candidatas, que são: 
número da inscrição, altura e peso. O programa deve:
a) Calcular e exibir a quantidade de candidatas que estão entre 1.70m e 1.80;
b) Mostrar a candidata mais magra e a mais gorda;
c) Calcular e exibir o peso médio das candidatas.*/

typedef struct Concurso{
    int numInscricao;
    float altura, peso;
};

int main(){
    struct Concurso A[30];
    float pesoMedio = 0;
    for(int i = 0; i<30; i++){
        printf("Digite o numero de inscrição do(a) %dº canditato(a): \n", i+1);
        scanf("%d", &A[i].numInscricao);
        printf("Digite a altura do(a) %dº candidato: \n", i+1);
        scanf("%f", &A[i].altura);
        printf("Digite o peso do(a) %dº candidato(a): \n", i+1);
        scanf("%f", &A[i].peso);
        pesoMedio += A[i].peso;
    }

    int cont = 0, codAlunoMenor, codAlunoMaior;
    float menorPeso, maiorPeso;
    for(int i = 0; i<30; i++){
        if(A[i].altura >= 1.70 && A[i].altura <= 1.80){
            cont++;
        }
        if(i == 0){
            menorPeso = A[i].peso;
            maiorPeso = A[i].peso;
            codAlunoMenor = A[i].numInscricao;
            codAlunoMaior = A[i].numInscricao;
            continue;
        }
        if(A[i].peso > maiorPeso){
            maiorPeso = A[i].peso;
            codAlunoMaior = A[i].numInscricao;
        }
        if(A[i].peso < menorPeso){
            menorPeso = A[i].peso;
            codAlunoMenor = A[i].numInscricao;
        }
    }

    printf("Quantidade entre 1.70 e 1.80: %d\n", cont);
    printf("A candidata mais magra e... COD:%d, Peso: %.2f\n", codAlunoMenor, menorPeso);
    printf("A candidata mais gorda e... COD:%d, Peso: %.2f\n", codAlunoMaior, maiorPeso);
    printf("O peso medio dos(as) candidatos(as) e: %.2f\n", pesoMedio/3);

    return 0;
}