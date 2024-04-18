#include <stdio.h> 

/*Questão: Escreva um programa que solicite ao usuário que informe 40 elementos inteiros (valide isso). 
Após isso o programa deve calcular a quantidade de números pares, a quantidade de números ímpares, 
a somatória dos números pares e a somatória dos números ímpares. Ao final, exiba os resultados.*/

int main(){
    int Numeros[40], i, Pares = 0, Impares = 0, SomatorioPar = 0, SomatorioImpar = 0;
    for(i = 0; i<40; i++){
        do{
            printf("Digite o %d numero inteiro: \n", i+1);
            scanf("%d", &Numeros[i]);
        }while(Numeros[i] < 0);
        if(Numeros[i] % 2 == 0){
            Pares++;
            SomatorioPar += Numeros[i];
        }else{
            Impares++;
            SomatorioImpar += Numeros[i];
        }
    }
    printf("Tem %d numeros pares e %d numeros impares.\n", Pares, Impares);
    printf("O somatorio dos pares e: %d e dos impares e: %d\n", SomatorioPar, SomatorioImpar);
    return 0;
}
