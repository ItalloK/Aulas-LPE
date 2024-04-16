#include <stdio.h>

/*Questão: 
    Escreva um algoritmo que leia as duas notas de cinco alunos de uma turma, calcule e mostre:
    • A média aritmética de cada aluno;
    • a mensagem de aluno reprovado, caso a média seja menor que 6.0; a mensagem de aluno em recuperação, caso a média 
    esteja entre 6.0 e 7.0; a mensagem de aluno aprovado, caso a média seja maior ou igual a 7.0;
    • o total de alunos aprovados, o total de alunos reprovados e o o total de alunos em recuperação;
    • a média geral da turma.
*/

int main(){
    int i;
    float Nota1, Nota2, Media, Nota_Geral = 0, Media_Geral;
    for(i = 0; i < 5; i++){
        do{
            printf("Digite a primeira nota do %d aluno: \n", i+1);
            scanf("%f", &Nota1);
        }while(Nota1 < 0);
        do{
            printf("Digite a segunda nota do %d aluno: \n", i+1);
            scanf("%f", &Nota2);
        }while(Nota2 < 0);
        Media = (Nota1+Nota2)/2;
        Nota_Geral += Media;
        printf("A Media do aluno %d e: %.2f\n", i+1, Media);
        if(Media < 6.0){
            printf("Aluno %d reprovado.\n", i+1);
        }else if(Media >= 6.0 && Media < 7.0){
            printf("Aluno %d de recuperacao.\n", i+1);
        }else if(Media >= 7.0){
            printf("Aluno %d aprovado.\n", i+1);
        }
    }
    Media_Geral = Nota_Geral / 5;
    printf("A Media geral e: %.2f\n", Media_Geral);
    return 0;
}
