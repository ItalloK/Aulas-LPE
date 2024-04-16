#include <stdio.h>

/*Questão: Construa um programa que leia um número de 1 a 12 e informa o trimestre do ano correspondente. 
Se o número não corresponder a um mês do ano, deve ser exibida uma mensagem de erro*/

int main(){
    int Mes;
    printf("Digite um numero de 1 a 12\n");
    scanf("%d", &Mes);
    switch(Mes){
        case 1: case 2: case 3:
        {
            printf("Primeiro Trimestre\n");
            break;
        }
        case 4: case 5: case 6:
        {
            printf("Segundo Trimestre\n");
            break;
        }
        case 7: case 8: case 9:
        {
            printf("Terceiro Trimestre\n");
            break;
        }
        case 10: case 11: case 12:
        {
            printf("Quarto Trimestre\n");
            break;
        }
        default:
        {
            printf("Valor Invalido\n");
            break;
        }
    }
    return 0;
}
