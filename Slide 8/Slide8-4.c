#include <stdio.h>

/*Questão: Escreva um programa que leia dois números quaisquer informados pelo usuário e 
calcule a média aritmética de todos os números que estiverem entre os números lidos, incluindo os números lidos */

int main(){
    int Num1, Num2, i, j = 0, Total = 0;
    float Media;
    do{
        printf("Digite o primeiro numero: \n");
        scanf("%d", &Num1);
    }while(Num1 < 0);
    do{
        printf("Digite o segundo numero: \n");
        scanf("%d", &Num2);
    }while(Num2 < 0);

    for(i = Num1; i < Num2; i++){
        Total += ++Num1;
        j++;
    }
    Media = Total / j;
    printf("A media aritmetica dos numeros entre %d e %d e = %.2f", Num1-j, Num2, Media);
    return 0;
}
