#include <stdio.h>

/*Questão: Escreva um programa que receba uma quantidade indeterminada de números positivos e diga quantos deles estão no 
intervalo de 0 a 25, quantos estão no intervalo de 26 a 50 e quantos são maiores que 50. O programa deve parar quando
o usuário digitar um número negativo.*/

int main(){
    int Num, i = 0, j = 0, k = 0, Condicao = 0;
    do{
        printf("Digite um numero: \n");
        scanf("%d", &Num);
        if(Num >= 0 && Num <= 25){
            i++;
        }else if(Num >= 26 && Num <= 50){
            j++;
        }else if(Num > 50){
            k++;
        }
        if(Num < 0){
            Condicao = 1;
        }
    }while(Condicao != 1);
    printf("Tem %d numero(s) entre 0 e 25\n", i);
    printf("Tem %d numero(s) entre 26 e 50\n", j);
    printf("Tem %d numero(s) maiores que 50\n", k);
    return 0;
}
