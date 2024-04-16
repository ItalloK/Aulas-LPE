#include <stdio.h>

/*Questão: Escreva um programa que leia dois números quaisquer informados pelo usuário e calcule a média aritmética de todos
os números que estiverem entre os números lidos, incluindo os números lidos. Valide os números informados.*/

int main(){
    int Num1, Num2, i, Quantidade = 0;
    float Total = 0;
    do{
        printf("Digite o primeiro numero: \n");
        scanf("%d", &Num1);
    }while(Num1 < 0);
    do{
        printf("Digite o segundo numero: \n");
        scanf("%d", &Num2);
    }while(Num2 < 0);
    
    for(i = Num1; i <= Num2; i++){
        Total += Num1++;
        Quantidade++;
    }
    printf("%.2f", Total/Quantidade);
    return 0;
}
