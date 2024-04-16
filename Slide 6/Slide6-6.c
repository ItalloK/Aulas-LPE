#include <stdio.h>

/*Questão: O programa deve solicitar ao usuário que digite um número inteiro positivo e depois
calcule o somatório de todos os números pares no intervalo de 0 até o número digitado.*/

int main(){
    int Num, i, Total = 0;
    do{
        printf("Digite um numero positivo: \n");
        scanf("%d", &Num);
    }while(Num < 0);
    for(i = 0; i <= Num; i++){
        Total += i;
    }
    printf("O somatorio total e: %d", Total);
    return 0;
}
