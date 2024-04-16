#include <stdio.h>

/*Questão: Um programa deve solicitar 10 valores quaisquer informados pelo usuário e calcular a quantidade de valores positivos 
e a quantidade de valores negativos. Validade a entrada. Valide a entrada.*/

int main(){
    int i, Num, Positivos = 0, Negativos = 0;

    for(i = 0; i < 10; i++){
        printf("Digite um numero: \n");
        scanf("%d", &Num);
        if(Num > 0){
            Positivos++;
        }else{
            Negativos++;
        }
    }
    printf("Tem %d numeros positivos e %d numeros negativos.\n", Positivos, Negativos);
    return 0;
}
