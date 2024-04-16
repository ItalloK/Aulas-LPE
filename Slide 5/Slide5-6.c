#include <stdio.h>

/*Questão: O programa deve calcular o valor final do produto, considerando o preço normal de etiqueta e a escolha da 
condição de pagamento. Deste modo, o vendedor deve informar o valor do produto e o código da condição de pagamento. 
Utilize os códigos da tabela a seguir para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado e 
mostrar na tela o valor final:
1 - À vista em dinheiro ou cheque, recebe 10% de desconto.
2 - À vista no cartão de crédito, recebe 5% de desconto.
3 - Em duas vezes, preço normal de etiqueta sem juros.
4 - Em três vezes, preço normal de etiqueta mais juros de 2%.*/

int main(){
    int Condicao;
    float Valor_Produto;
    do{
        printf("Digite valor do produto: \n");
        scanf("%f", &Valor_Produto);
    }while(Valor_Produto < 0);
    do{
        printf("1 - A vista Dinheiro/Chque - 10%% de desconto.\n");
        printf("2 - A vista Cartao de Credito - 5%% de desconto.\n");
        printf("3 - Em duas vezes - preco normal sem juros.\n");
        printf("4 - Em tres vezes - preco normal + 2%% de juros.\n");
        printf("\nDigite a opcao desejada: ");
        scanf("%d", &Condicao);
    }while(Condicao < 1 || Condicao > 4);
    if(Condicao == 1){
        printf("O valor final e: %.2f\n", Valor_Produto * 0.90);
    }else if(Condicao == 2){
        printf("O valor final e: %.2f\n", Valor_Produto * 0.95);
    }else if(Condicao == 3){
        printf("O valor final e: %.2f\n", Valor_Produto);
    }else if(Condicao == 4){
        printf("O valor final e: %.2f\n", Valor_Produto * 1.02);
    }
    return 0;
}
