#include <stdio.h>

/* Questão: Crie um programa para cadastrar o código de 20 municípios, sua população e sua área. 
Todos os dados devem ser informados pelo usuário. O programa deve:
a) Mostrar o maior município (considere que nenhum município tem área igual a outro);
b) Mostrar o código dos municípios que tem a maior população.
c) Calcular a média de todas populações cadastradas.
*/
typedef struct Municipios{
    int codMunicipio, poulacao;
    float areaCidade;
};

int main(){

    struct Municipios M[2];
    
    for(int i = 0; i<2; i++){
        printf("Digite o codigo do municipio: \n");
        scanf("%d", &M[i].codMunicipio);
        printf("Digite a população do municipio: \n");
        scanf("%d", &M[i].poulacao);
        printf("Digite a Area do Municipio: \n");
        scanf("%f", &M[i].areaCidade);
    }

    float maiorArea;
    int maiorPop, codMaiorPop, mediaPop = 0;

    for(int i = 0; i<2; i++){
        mediaPop += M[i].poulacao;
        if(i == 0){
            maiorArea = M[i].areaCidade;
            maiorPop = M[i].poulacao;
            codMaiorPop = M[i].codMunicipio;
            continue;
        }
        if(M[i].areaCidade > maiorArea){
            maiorArea = M[i].areaCidade;
        }
        if(M[i].poulacao > maiorPop){
            maiorPop = M[i].poulacao;
            codMaiorPop = M[i].codMunicipio;
        }
    }

    printf("O maior municipio e: %.2f\n", maiorArea);
    printf("Media das populacoes: %d\n", mediaPop/2);
    printf("Codigo do municipio com maior população: %d\n", codMaiorPop);
    return 0;
}