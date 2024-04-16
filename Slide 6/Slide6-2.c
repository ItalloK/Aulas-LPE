#include <stdio.h>

/*Questão: Um programa deve gerar todos os múltiplos de um número qualquer inteiro positivo informado pelo usuário. 
O intervalo de múltiplos a serem gerados é até 20. Validade a entrada.*/

int main(){
    int Num, i = 0;
    printf("Digite um numero positivo: \n");
    scanf("%d", &Num);
    while(Num < 0){
        printf("Numero incorreto, Digite um numero positivo: \n");
        scanf("%d", &Num);
    }
    while(i <= 20){
        printf("%d * %d = %d\n", Num, i, Num*i);
        i++;
    }
    return 0;
}
