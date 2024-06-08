#include <stdio.h>

/*Questão: Escreva um trecho de codigo para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
    • Horario: composto de hora, minutos e segundos. ´
    • Data: composto de dia, mes e ano. ˆ
    • Compromisso: composto de uma data, horario e texto que descreve o compromisso */

typedef struct Horario{
    int Hora;
    int Minuto;
    int Segundo;
};

typedef struct Data{
    int Dia;
    int Mes;
    int Ano;
};

typedef struct Compromisso{
    int Data;
    int Horario;
    char Text[50];
};

int main(){
    return 0;
}