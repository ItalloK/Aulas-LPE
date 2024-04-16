#include <stdio.h>

/*Questão: Um programa deve receba uma quantidade indeterminada de números positivos e informar quantos deles estão no 
intervalo de 0 a 25, quantos estão no intervalo de 26 a 50 e quantos são maiores que 50. O algoritmo deve parar quando o usuário
digitar um número negativo. Valide a entrada.*/

int main(){
    int i = 0, Num, Intervalo1 = 0, Intervalo2 = 0, Intervalo3 = 0;
    while(i >= 0){
        printf("Digite um Numero: \n");
        scanf("%d", &Num);
        if(Num < 0){
            i = -1;
        }
        if(Num >= 0 && Num <= 25){
            Intervalo1++;
        }else if(Num >= 26 && Num <= 50){
            Intervalo2++;  
        }else if(Num > 50){
            Intervalo3++;
        }
    }
    printf("Tem %d numeros no intervalo entre 0 e 25.\n", Intervalo1);
    printf("Tem %d numeros no intervalo entre 26 e 50.\n", Intervalo2);
    printf("Tem %d numeros no maiores que 50.\n", Intervalo3);
    return 0;
}
