#include <stdio.h>

/*Questão:Um programa deve gerar todos os múltiplos de um número qualquer inteiro positivo informado pelo usuário. 
O intervalo de múltiplos a serem gerados é até 20. Validade a entrada.*/

int main(){
    int Num, i;
    do{
        printf("Digite um numero: \n");
        scanf("%d", &Num);
    }while(Num < 0);
    for(i = 0; i <= 20; i++){
        printf("%d * %d = %d\n", Num, i, Num * i);
    }
    return 0;
}
