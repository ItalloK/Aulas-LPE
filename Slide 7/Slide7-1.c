#include <stdio.h>

/*Questão: Escreva um programa que solicite ao usuário digitar um número inteiro positivo e depois calcule o somatório 
de todos os números pares no intervalo de 0 até o número digitado.*/

int main(){
    int Num, i, Soma = 0;
    printf("Digite num numero: \n");
    scanf("%d", &Num);
    for(i = 0; i <= Num; i++){
        if(i %2 == 0){
            Soma += i;
        }
    }
    printf("A soma dos valores entre 0 e %d e: %d\n", Num, Soma);
    return 0;
}
