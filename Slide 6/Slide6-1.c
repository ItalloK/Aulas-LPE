#include <stdio.h>

/*Questão: Um programa deve receber o preço e a quantidade de 20 diferentes produtos e mostrar o valor total da compra. 
Valide as entradas.*/

int main(){
    int Condicao = 0, Quantidade, i = 0;
    float Valor, Total = 0;
    while(Condicao != 1){
        printf("Digite a preco do produto: \n");
        scanf("%f", &Valor);
        while(Valor < 0){
            printf("Valor Invalido, Digite a preco do produto: \n");
            scanf("%f", &Valor);
        }
        printf("Digite a quantidade de produtos: \n");
        scanf("%d", &Quantidade);
        while(Quantidade < 0){
            printf("Quantidade invalida, Digite a quantidade do produto: \n");
            scanf("%d", &Quantidade);
        }
        Total += (Valor * Quantidade);
        i++;
        if(i == 5){
            Condicao = 1;
        }
    }
    printf("O total da compra foi %.2f", Total);
    return 0;
}
