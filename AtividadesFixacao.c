#include <stdio.h>
#include <stdlib.h>

int main(){
    int Opcao;
    do{
        printf("Digite a atividade que quer fazer: \n");
        scanf("%d", &Opcao);
    }while(Opcao < 1 || Opcao > 8);
    switch(Opcao){
        case 1:
        {
            Atividade1();
            break;
        }
        case 2:
        {
            Atividade2();
            break;
        }
        case 3:
        {
            Atividade3();
            break;
        }
        case 4:
        {
            Atividade4();
            break;
        }
        case 5:
        {
            Atividade5();
            break;
        }
        case 6:
        {
            Atividade6();
            break;
        }
        case 7:
        {
            Atividade7();
            break;
        }
        case 8:
        {
            Atividade8();
            break;
        }
    }

    return 0;
}

void Atividade1(){
	float Lado, Perimetro, Area, Diagonal;
	do{
		printf("Insira o lado do quadrado: \n");
    	scanf("%f", &Lado);
	}while(Lado < 0);
	Perimetro = 4 * Lado;
	Area = Lado * Lado;
	Diagonal = sqrt(2) * Lado;	
	printf("O Lado digitado foi: %f\n", Lado);
	printf("O perimetro e: %f\n", Perimetro);
	printf("A area e: %f\n", Area);
	printf("A diagonal e: %f\n", Diagonal);
}

void Atividade2(){
    float salario_minimo, salario;
	float qntssalario;
	do{
		printf("Digite o valor do salario minimo: \n");
		scanf("%d", &salario_minimo);
	}while(salario_minimo < 0);
	do{
		printf("Agora digite seu salario: \n");
		scanf("%d", &salario);
	}while(salario < 0);
	qntssalario =  salario / salario_minimo;
	printf("Voce recebe %.2f salarios minimo(s).", qntssalario);
}

void Atividade3(){
	int diaria = 120, qnt_dias, salario_bruto, new_salario;
	printf("Digite a quantidade de dias trabalhados: \n");
	scanf("%d", &qnt_dias);
	salario_bruto = diaria * qnt_dias;
	if(salario_bruto >= 2000 && salario_bruto <= 3000){
		new_salario = salario_bruto * 0.95;
	}else if(salario_bruto >3000){
		new_salario = salario_bruto * 0.90;
	}else{
		new_salario = salario_bruto;
	}	
	printf("O salario bruto e de: %d\n", salario_bruto);
	printf("O salario liquido e de: %d\n", new_salario);
}

void Atividade4(){
    int num1, num2, result;
    char opcao;
    printf("Digite o primeiro valor: \n");
    scanf("%d", &num1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &num2);
    do{
        printf("Digite a opcao do calculo: \n");
        printf("+ para adicao \n");
        printf("- para subtracao \n");
        printf("* para multiplicacao \n");
        printf("/ para divisao \n");
        scanf(" %c", &opcao);
    }while(opcao != '+' && opcao != '-' && opcao != '*' && opcao != '/');
    switch(opcao){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 == 0){
                printf("Divisao por 0 nao permitida.\n");
                return 1;
            } else {
                result = num1 / num2;
            }
            break;
    }
    printf("O resultado e: %d\n", result);
}

void Atividade5(){
	int distancia = 0, tempo = 0, velocidade = 0, litros_usados = 0;
    do{
        printf("Quanto tempo voce gastou na viagem? \n");
        scanf("%d", &tempo);
    }while(tempo < 0);
	do{
        printf("Qual a velocidade media durante a viagem? \n");
        scanf("%d", &velocidade);
    }while(velocidade < 0);
	distancia = tempo * velocidade;
	litros_usados = (distancia/12);
	printf("A velocidade media foi: %d\n", velocidade);
	printf("A o tempo gasto na viagem foi: %d\n", tempo);
	printf("A distancia percorrida foi: %d\n", distancia);
	printf("A quantidade de combustivel usada foi: %d\n", litros_usados);
}

void Atividade6(){
	int i = 0, taxa_condominio, opcao;
	while(i < 120){
		do{
			printf("Voce possui animais de estimacao??\n");
			printf("1 - Cachorro\n");
			printf("2 - Gato\n");
			printf("3 - Ave\n");
			printf("4 - Outros\n");
			printf("5 - Nenhum\n");
			printf("Digite a opcao desejada: \n");
			scanf("%d", &opcao);
		}while(opcao > 5 || opcao < 1);
		taxa_condominio = 320;
		switch(opcao){
			case 1:
			{
				taxa_condominio += 50;
				printf("Voce possui um cachorro.\n");
				break;
			}
			case 2:
			{
				taxa_condominio += 30;
				printf("Voce possui um gato.\n");
				break;	
			}
			case 3:
			{
				taxa_condominio += 12;
				printf("Voce possui uma ave.\n");
				break;	
			}
			case 4:
			{
				taxa_condominio += 100;
				printf("Voce possui um outro tipo de animal.\n");
				break;
			}
			case 5:
			{
				taxa_condominio -= 20;
				printf("Voce possui nenhum animal.\n");
				break;	
			}
		}
		i++;
		printf("Sua taxa de condominio e: %d\n", taxa_condominio);
	}	
}

void Atividade7(){
    int Continuar = 0,Base,Expoente, Resultado, i = 0;
    float Result = 0.0;
    do{
        printf("Digite a base: \n");
        scanf("%d", &Base);
        printf("Digite o expoente: \n");
        scanf("%d", &Expoente);
        Resultado = pow(Base, Expoente);
        printf("O resultado do calculo e: %d\n", Resultado);
        if(Resultado < 40){
            printf("Classificacao: Baixo\n");
        }else if(Resultado >= 40 && Resultado <= 60){
            printf("Classificacao: Medio\n");
        }else if(Resultado > 60){
            printf("Classificacao: Alto\n");
        }
        printf("Deseja continuar? ( Digite 1 )\n");
        scanf("%d", &Continuar);
        i++;
        Result += Resultado;
    }while(Continuar == 1);
    printf("A media dos valores e: %.2f", Result/i);
}

void Atividade8(){
    int Numero_Matricula, Total_Vendas, Salario_Mensal, i, Maior_Salario = 0, Matricula_MS, Maior_Venda = 0, Comissao, Salario_Total;
    for(i = 0; i<50; i++){
        do{
            printf("Digite o numero da matricula: \n");
            scanf("%d", &Numero_Matricula);
        }while(Numero_Matricula < 1);
        do{
            printf("Digite o total de vendas: \n");
            scanf("%d", &Total_Vendas);
        }while(Total_Vendas < 1);
        do{
            printf("Digite o salario mensal: \n");
            scanf("%d", &Salario_Mensal);
        }while(Salario_Mensal < 1);
        if(Total_Vendas > 20000){
            Comissao = Total_Vendas * 0.09;
        }else if(Total_Vendas >= 10000 && Total_Vendas < 20000){
            Comissao = Total_Vendas * 0.07;
        }else if(Total_Vendas >= 5000 && Total_Vendas < 10000){
            Comissao = Total_Vendas * 0.05;
        }else if(Total_Vendas < 5000){
            printf("Esse Funcionario vendeu menos de 5000 e nao obteve comissao.\n");
        }
        if(Total_Vendas > Maior_Venda){
            Maior_Venda = Total_Vendas;
            Matricula_MS = Numero_Matricula;            
        }
        if(Comissao > 0){
            Salario_Total = Salario_Mensal + Comissao;
        }else{
            Salario_Total = Salario_Mensal;
        }
        if(Maior_Salario < Salario_Total){
            Maior_Salario = Salario_Total; 
        }
        printf("Matricula digitada: %d e o total do salario dele e: %d\n\n", Numero_Matricula, Salario_Total);    
    }
    printf("O maior salario mensal foi: %d\n", Maior_Salario);
    printf("A matricula do funcionario que mais vendeu e: %d, e o total de vendas e: %d\n", Matricula_MS, Maior_Venda);
}