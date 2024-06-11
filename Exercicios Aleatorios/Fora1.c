#include <stdio.h>

float CalcMedia(float, float);

typedef struct Alunos{
    int Ra;
    float Nota1, Nota2, Media;
};

int main(){
    struct Alunos A[2];

    for(int i = 0; i<2; i++){
        printf("Digite o RA do %dº Aluno: \n", i+1);
        scanf("%d", &A[i].Ra);
        do{
            printf("Digite a 1º nota do %dº Aluno: \n", i+1);
            scanf("%f", &A[i].Nota1);
        }while(A[i].Nota1 < 0 || A[i].Nota1 > 10);
        do{
            printf("Digite a 2º nota do %dº Aluno: \n", i+1);
            scanf("%f", &A[i].Nota2);
        }while(A[i].Nota2 < 0 || A[i].Nota2 > 10);
        A[i].Media = CalcMedia(A[i].Nota1, A[i].Nota2);
    }

    for(int i = 0; i<2; i++){
        printf("%dº Aluno: \n", i+1);
        printf("RA: %d\n", A[i].Ra);
        printf("Media: %.2f\n", A[i].Media);
    }

    return 0;
}

float CalcMedia(float n1, float n2){
    float res = (n1+n2)/2;
    return res;
}