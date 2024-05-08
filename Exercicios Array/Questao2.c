#include <stdio.h>

/*Questão: 2. Faça um programa que leia um conjunto de números reais, armazenando-os em vetor e depois calcule
o quadrado de cada um destes valores desse primeiro vetor e os armazene em outro vetor em posições
inversas. O conteúdo dos dois vetores deve ser exibido.*/

int main(){
    float Vetor[5], Vetor2[5];
    int i = 0;
    for(i = 0; i < 5; i++){
        printf("Digite o %d numero real: \n", i+1);
        scanf("%f", &Vetor[i]);
    }
    for(i = 0; i < 5; i++){
        Vetor[i] = (Vetor[i] * Vetor[i]);
        printf("VETOR 1: Posicao %d valor: %f\n", i, Vetor[i]);
    }
    int b = 4;
    for(i = 0; i < 5; i++){
        Vetor2[i] = Vetor[b];
        b--;
    }
    for(i = 0; i < 5; i++){
        printf("VETOR 2: Posicao %d valor: %f\n", i, Vetor2[i]);
    }
    return 0;
}