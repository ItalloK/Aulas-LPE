#include <stdio.h>

/*Questão: Construa um programa que leia um número de 1 a 7 e que informa o dia da semana correspondente, 
sendo que o domingo será associado ao número 1. Se o número não corresponder a um dia da semana, deve ser 
exibida uma mensagem de erro ao usuário.*/

int main(){
    int Dia;
    printf("Digite um numero de 1 a 7: \n");
    scanf("%d", &Dia);
    switch(Dia){
        case 1:
        {
            printf("Domingo\n");
            break;
        }
        case 2:
        {
            printf("Segunda-Feira\n");
            break;
        }
        case 3:
        {
            printf("Terça-Feira\n");
            break;
        }
        case 4:
        {
            printf("Quarta-Feira\n");
            break;
        }
        case 5:
        {
            printf("Quinta-Feira\n");
            break;
        }
        case 6:
        {
            printf("Sexta-Feira\n");
            break;
        }
        case 7:
        {
            printf("Sabado\n");
            break;
        }
        default:
        {
            printf("Valor invalido");
            break;
        }
    }
    return 0;
}