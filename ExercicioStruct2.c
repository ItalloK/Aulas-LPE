#include <stdio.h>

/* Questão: Faça um programa para cadastrar 100 produtos de uma loja com os seguintes dados: código do produto, 
quantidade mínima em estoque, quantidade atual em estoque e o preço. O programa deve: 

a) mostrar todos os dados dos produtos que contenham o estoque atual menor que o estoque mínimo para efetuar compra;
b) calcular o valor total dos produtos em estoque.*/

typedef struct Produtos{
    int codProduto, qntMinima, qntAtual;
    float preco;
};

int main(){
    struct Produtos prd[3];
    for(int i = 0; i<3; i++){
        printf("Digite o codigo do %dº produto: \n", i+1);
        scanf("%d", &prd[i].codProduto);
        printf("Digite a quantidade minima que esse produto deve ter: \n");
        scanf("%d", &prd[i].qntMinima);
        printf("Digite o atual estoque deste produto: \n");
        scanf("%d", &prd[i].qntAtual);
        printf("Digite o preço deste produto: \n");
        scanf("%f", &prd[i].preco);
    }

    int indices[100], index = 0;
    for(int i = 0; i<3; i++){
        if(prd[i].qntAtual < prd[i].qntMinima){
            indices[index] = i;
            index++;
        }
    }

    float totalPrecos = 0;
    for(int i = 0; i<3; i++){
        totalPrecos += prd[i].preco * prd[i].qntAtual;
    }
    printf("O total dos preços dos produtos e: %.2f\n", totalPrecos);

    if(index > 0){
        for(int i = 0; i<3; i++){
            int value;
            value = indices[i];
            printf("Codigo do produto: %d, Qnt Minima: %d, Estoque: %d, Preco: %.2f\n", prd[value].codProduto, prd[value].qntMinima, prd[value].qntAtual, prd[value].preco);
        }
    }
    
    return 0;
}