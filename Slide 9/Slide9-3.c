#include <stdio.h>

/*Questão: Faça um programa para ler 40 números inteiros, calcular a média dos mesmos e exibir todos os números 
que estiverem acima da média.*/

int main(){
    int i, Numeros[40], Valor = 0;
    float Media;
    for(i = 0; i < 40; i++){
        do{
            printf("Digite um numero: \n");
            scanf("%d", &Numeros[i]);
        }while(Numeros[i] < 0);
        Valor += Numeros[i];
    }
    Media = Valor/40;
    for(i = 0; i < 40; i++){
        if(Numeros[i] > Media){
            printf("Acima da Media: %d\n", Numeros[i]);
        }
    }
    return 0;
}
