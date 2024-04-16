#include <stdio.h>

/*Questão: Escreva um algoritmo que receba um número diversas vezes e mostre o seu inverso (1/n). 
O algoritmo encerra quando o valor digitado é zero, exibindo uma mensagem de erro que diz que não se pode dividir por zero.*/

int main(){
    int i = 0;
    float Num = 1;
    while(i != 1){
        printf("Digite um numero: \n");
        scanf("%f", &Num);
        if(Num <= 0){
            i = 1;
            printf("%d nao pode ser divido por 0 ou numero inferior.\n", Num);
        }else{
        	printf("O inverso de %.2f e: %f\n", Num, 1/Num);
		}
    }
    return 0;
}
