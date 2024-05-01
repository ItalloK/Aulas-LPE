#include <stdio.h>

int main() {
    int Idade, i, Quant_Gastos = 0, Quant_Pessoas = 0;
    float Valor, Porcentagem;

    for(i = 0; i < 5; i++) { // Corrigido para iterar 500 vezes
        do {
            printf("Digite o valor que deseja gastar: \n");
            scanf("%f", &Valor);
        } while (Valor < 0);

        do {
            printf("Digite a idade: \n");
            scanf("%d", &Idade);
        } while (Idade < 0);

        if ((Idade >= 20 && Idade <= 30) && (Valor >= 100 && Valor <= 200)) { // Corrigido os operadores lógicos
            Quant_Gastos++;
        }
        if (Valor > 300) {
            Quant_Pessoas++;
        }
    }
    Porcentagem = ((float)Quant_Pessoas / 5) * 100;
    printf("O Percentual de pessoas que pretende gastar mais de R$ 300,00 e: %.2f%%\n", Porcentagem); 
    printf("A quantidade de pessoas na faixa de 20 a 30 anos que vai gastar entre R$ 100 e R$ 200,00 e: %d\n", Quant_Gastos);
    return 0;
}