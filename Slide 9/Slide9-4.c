#include <stdio.h>

/*Questão: Escreva um algoritmo que verifique se dois vetores são iguais. Os vetores devem ter 10 elementos cada.*/

int main(){
    int Vetor1[10], Vetor2[10], i, j, Iguais = 0;
    for(i = 0; i < 10; i++){
        printf("Digite um valor i %d: ", i);
        scanf("%d", &Vetor1[i]);
    }
    for(j = 0; j < 10; j++){
        printf("Digite um valor j %d: ", j);
        scanf("%d", &Vetor2[j]);
    }
    for(i = 0; i < 10; i++){
        if(Vetor1[i] == Vetor2[i]){
            Iguais++;
        }
    }
    if(Iguais == 10){
        printf("Os Vetores sao iguais");
    }else{
        printf("Os vetores nao sao iguais");
    }
    return 0;
}
