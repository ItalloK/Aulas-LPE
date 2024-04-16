#include <stdio.h>

/*Questão: Escreva um algoritmo que determine o ano em que a população brasileira supera ou iguala a população americana. 
O usuário deverá informar as populações e o ano referente a estas informações. Além disso, o cálculo do reajuste da população
brasileira deve ser de 4% ao ano e a americana de 2% ao ano.*/

int main(){
    double PopulacaoBR, PopulacaoUSA;
    int Data;
    do{
        printf("Digite a Populacao Brasileira: \n");
        scanf("%lf", &PopulacaoBR);
    }while(PopulacaoBR < 0);
    do{
        printf("Digite a Populacao Americana: \n");
        scanf("%lf", &PopulacaoUSA);
    }while(PopulacaoUSA < 0);
    do{
        printf("Digite o Ano atual: \n");
        scanf("%d", &Data);
    }while(Data < 0);
    while(PopulacaoBR < PopulacaoUSA){
        PopulacaoBR *= 1.04;
        PopulacaoUSA *= 1.02;
        //printf("LOG: BRA: %.2lf, USA: %.2lf\n", PopulacaoBR, PopulacaoUSA); /*LOG PARA VERIFICAR CALCULOS*/
        Data++;
    }
    printf("Populacao BR atual e: %d, e a Americana e: %d\n", (int)PopulacaoBR, (int)PopulacaoUSA);
    printf("O ano atual e: %d\n", Data);
    return 0;
}
