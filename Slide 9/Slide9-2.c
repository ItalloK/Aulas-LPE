#include <stdio.h>

/*Questão: Faça um programa para calcular a média final de uma turma composta por 60 alunos. A média de cada aluno 
deve ser informada pelo usuário.*/

int main(){
    int i;
    float Notas[60], Media = 0;
    for(i = 0; i<60; i++){
        do{
            printf("Digite a media do %d aluno: \n", i+1);
            scanf("%f", &Notas[i]);
        }while(Notas[i] < 0 || Notas[i] > 10);
        Media += Notas[i];
    }
    printf("A media final da turma e: %.2f", Media/60);
    return 0;
}
