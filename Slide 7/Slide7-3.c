#include <stdio.h>

/*Questão: Um programa deve receber o preço e a quantidade de 20 diferentes produtos e mostrar o valor total da compra. 
Valide as entradas.*/

int main(){
    int Quantidade, i = 0;
    float Valor, Total = 0.0;
    for(i = 0; i < 20; i++){
        do{
            printf("Digite o valor do produto: \n");
            scanf("%f", &Valor);
        }while(Valor < 0);
        do{
            printf("Digite a quantidade do produto: \n");
            scanf("%d", &Quantidade);
        }while(Quantidade < 0);
        Total += Valor * Quantidade;
    }
    printf("O valor total da compra e: %.2f", Total);
    return 0;
}
