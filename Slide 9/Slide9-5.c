#include <stdio.h>

/*Questão: Criar dois vetores de 10 elementos cada, sendo que estes valores serão informados pelo usuário. 
O programa deve calcular e exibir a quantidade de elementos do vetor B que são maiores do que o 1º elemento do vetor A. Exiba
também essas posições*/

int main(){
    int VetorA[10], VetorB[10], i, Quantidade = 0, Posicoes[10];
    for(i = 0; i<10; i++){
        printf("Digite um numero para o Vetor A (Posicao %d): \n", i);
        scanf("%d", &VetorA[i]);
    }
    for(i = 0; i<10; i++){
        printf("Digite um numero para o Vetor B (Posicao %d): \n", i);
        scanf("%d", &VetorB[i]);
    }
    for(i = 0; i<10; i++){
        if(VetorB[i] > VetorA[0]){
            Quantidade++;
            Posicoes[i] = i;
        }
    }
    printf("A quantidade de numeros do vetor B que e maior que o A e: %d\n", Quantidade);
    for(i = 0; i<10; i++){
        if(Quantidade >= 1){
            if(VetorB[i] > VetorA[0]){
                printf("As posicoes sao: %d\n", Posicoes[i]);
            }
        }        
    }
    return 0;
}
