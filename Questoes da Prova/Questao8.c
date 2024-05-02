#include <stdio.h> 

/*Questão: Faça um programa em linguagem C para o cenario abaixo. Indique todas as bibliotecas necessarias.
Um programa deve receber uma quantidade indeterminada de valores correspondentes ao peso das pessoas. O programa deve
parar de solicitar os pesos das pessoas quando um peso negativo ou zero for informado. O programa deve calcular e exibir:

A) A quantidade de pesos validos informados.
B) A média dos pesos válidos informados.*/

int main(){
    int Qnt_Pesos = 0;
    float Peso, Media_Pesos, Soma_Pesos = 0;;
    do{
        printf("Digite o peso: \n");
        scanf("%f", &Peso);  
        if(Peso > 0){
            Soma_Pesos += Peso;
            Qnt_Pesos++;
        }      
    }while(Peso > 0);
    Media_Pesos = Soma_Pesos/Qnt_Pesos;
    printf("A quantidade de pesos validos e: %d\n", Qnt_Pesos);
    printf("A media dos pesos validos e: %.2f", Media_Pesos);
    return 0;
}