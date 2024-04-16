#include <stdio.h>

/*Questão: Escreva um programa que apresente ao usuário as opções: (a) Saldo; (b) Depósito, (c) Saque e (x) Sair. 
O algoritmo deve repetir até que o usuário digite “x”. O valor inicial do saldo é R$ 0,00.
Se o usuário escolher a opção depósito, deve digitar o valor do depósito e o saldo é incrementado. 
Caso o usuário escolha a opção saque, deve digitar o valor a ser sacado e exibir mensagem “Saldo insuficiente” 
(se não houver saldo) ou debitar o valor, alterando o saldo. Em ambas as opções, o novo saldo é exibido.
*/

int main(){
    char Opcao, Verificacao = 0;
    float Saldo = 0.0, Deposito, Saque;
    do{
        printf("(a) - Saldo\n");
        printf("(b) - Deposito\n");
        printf("(c) - Saque\n");
        printf("(x) - Sair\n");
        printf("Escolha uma Opcao:");
        scanf(" %c", &Opcao);
        switch(Opcao){
            case 'a':
            {
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("Seu saldo e: %.2f\n", Saldo);
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                break;
            }
            case 'b':
            {
                do{
                    printf("Digite um valor para depositar: \n");
                    scanf("%f", &Deposito);
                }while(Deposito < 0);
                Saldo += Deposito;
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("Seu novo saldo e: %.2f\n", Saldo);
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                break;
            }
            case 'c':
            {
                do{
                    printf("Digite um valor para sacar: \n");
                    scanf("%f", &Saque);
                }while(Saque < 0);
                if(Saque > Saldo){
                    printf("Saldo Insuficiente.\n");
                }else{
                    Saldo -= Saque;
                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    printf("Seu novo saldo e: %.2f\n", Saldo);
                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                }
                break;
            }
            case 'x':
            {
                Verificacao = 1;
                break;
            }
        }
    }while(Verificacao != 1);
    return 0;
}
