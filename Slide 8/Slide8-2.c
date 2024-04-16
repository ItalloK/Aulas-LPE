#include <stdio.h>

//Questão: Escreva um programa que receba o preço e a quantidade de 20 diferentes produtos e mostre o valor total da compra

int main(){
    int Num, i = 0, Quantidade;
    float Preco, Total = 0;
    do{
        do{
            printf("Digite o preco do produto: \n");
            scanf("%f", &Preco);
        }while(Preco < 0);
        do{
            printf("Digite a quantidade do produto: \n");
            scanf("%d", &Quantidade);
        }while(Quantidade < 1);
        Total += (Preco * Quantidade);
        i++;
    }while(i < 20);
    printf("O total da compra foi: %.2f\n", Total);
    return 0;
}
