#include <stdio.h>

/*Questão: Dado um conjunto de 30 valores reais faça um algoritmo que exiba os valores positivos e calcule e exiba 
a média dos valores negativos. Caso não haja nenhum valor positivo o programa deve sinalizar isto.*/

int main(){
    int i,j, Qnt_Positivos = 0, Qnt_Negativos = 0;
    float Numeros[5], Negativos = 0, Positivos[30], Media;
    for(i = 0; i<5; i++){
        printf("Digite o %d valor: \n", i+1);
        scanf("%f", &Numeros[i]);
        if(Numeros[i] > 0){
            Qnt_Positivos++;
            Positivos[Qnt_Positivos-1] = Numeros[i];
        }else{
            Qnt_Negativos++;
            Negativos = Negativos + (Numeros[i]);
        }
    } 
    Media = Negativos/Qnt_Negativos;
    if(Qnt_Positivos > 0){
        for(i = 0; i < Qnt_Positivos; i++){
            if(Positivos[i] > 0){
                printf("Os positivos sao: %f\n", Positivos[i]);
            }
        }
    }else{
        printf("Nao ha numeros positivos.\n");
    }
    printf("A media dos negativos e: %f\n", Media);
    return 0;
}
