#include <stdio.h>

/*Questão: Faça um programa em Linguagem C para o cenario abaixo. Indique todas as bibliotecas necessarias.
O programa deve ler a velocidade maxima permitida em uma avenida e a velocidade com que o motorista estava dirigindo nela.
Tais entradas devem ser validadas de modo que os valores inválidos não sejam aceitos para o processamento. O Programa deve
calcular e exibir:

A) A multa que uma pessoa vai receber, sabendo que são pagos: R$ 150,00 reais se o motorista estiver ultrapassado em até 10Km/h
a velocidade permitida ( ex: Velocidade maxima é de 50km/h e o motorista estava a 60km/h);(R$ 200,00 reais se o motorista 
ultrapassar de acima de 10 até 30km/h a velocidade permitida; e R$ 300,00 reais, se estiver acima de 30km/h da velocidade
permitida. O programa deve considerar que o motorista pode não ter ultrapassado o limite de velocidade da avenida e que neste
caso não haverá multa.*/

int main(){
    float Velocidade_Maxima, Velocidade_Atual;
    do{
        printf("Digite a velocidade maxima permitida: \n");
        scanf("%f", &Velocidade_Maxima);
    }while(Velocidade_Maxima < 0);
    do{
        printf("Digite a velocidade em que o motorista passou: \n");
        scanf("%f", &Velocidade_Atual);
    }while(Velocidade_Atual < 0);
    printf("teste: %f \n\n\n", Velocidade_Atual - Velocidade_Maxima);
    if(Velocidade_Atual - Velocidade_Maxima < 0){
        printf("Voce nao foi multado.\n");
    }else if((Velocidade_Atual - Velocidade_Maxima) > 0 && (Velocidade_Atual - Velocidade_Maxima) <= 10){
        printf("Voce passsou a 10 km/h a mais do permitido e recebeu uma multa de R$ 150,00\n");
    }else if((Velocidade_Atual - Velocidade_Maxima) > 10 && (Velocidade_Atual - Velocidade_Maxima) <= 30){
        printf("Voce passou acima da velocidade de 10 a 30 km/h de tolerancia, e recebeu uma multa de R$ 200,00\n");
    }else if((Velocidade_Atual - Velocidade_Maxima) > 30){
        printf("Voce passou a  mais de 30 km/h acima do permitido e recebeu uma multa de R$ 300,00\n");
    } 
    
    return 0;
}