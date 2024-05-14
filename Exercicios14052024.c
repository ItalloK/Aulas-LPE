#include <stdio.h>
// Exercicios propostos em Sala.
// 1 versão: usar variaveis simples
// 2 versão: usar vetores
// 3 versão: usar struct
// 4 versão: usar vetor de struct
// 5 versão: usar struct de vetor
	
typedef struct{
	int Num1;
	float Num2;
} Dados;

typedef struct{
	int Num1[1];
	float Num2[1];
} Dados2;

int main(){
	int versao;
	do{
		printf("Digite a versao que deseja: (1 a 5)\n");
		scanf("%d", &versao);	
	}while(versao > 5 || versao < 1); 
	switch(versao){
		case 1:{
			versao1();
			break;
		}
		case 2:{
			versao2();
			break;
		}
		case 3:{
			versao3();
			break;
		}
		case 4:{
			versao4();
			break;
		}
		case 5:{
			versao5();
			break;
		}
	}   
    return 0;
}

void versao1(){
	int num1;
	float num2, res;
	printf("Digite o valor inteiro: \n");
	scanf("%d", &num1);
	printf("Digite o valor real: \n");
	scanf("%f", &num2);
	res = num1+num2;
	printf("Resultado: %f\n", res);
}

void versao2(){
	int num1[1];
	float num2[1], res[1];
	printf("Digite o valor inteiro: \n");
	scanf("%d", &num1[0]);
	printf("Digite o valor real: \n");
	scanf("%f", &num2[0]);
	res[0] = num1[0] + num2[0];
	printf("Resultado: %f\n", res[0]);
}

void versao3(){
	Dados versao3;
	printf("Digite o valor inteiro: \n");
	scanf("%d", &versao3.Num1);
	printf("Digite o valor real: \n");
	scanf("%f", &versao3.Num2);
	printf("Resultado: %f\n", versao3.Num1 + versao3.Num2);
}

void versao4(){
	Dados versao3[1];
	printf("Digite o valor inteiro: \n");
	scanf("%d", &versao3[0].Num1);
	printf("Digite o valor real: \n");
	scanf("%f", &versao3[0].Num2);
	printf("Resultado: %f\n", versao3[0].Num1 + versao3[0].Num2);
}

void versao5(){
	Dados2 versao5;
	printf("Digite o valor inteiro: \n");
	scanf("%d", &versao5.Num1[0]);
	printf("Digite o valor real: \n");
	scanf("%f", &versao5.Num2[0]);
	printf("Resultado: %f\n", versao5.Num1[0] + versao5.Num2[0]);
}
