#include<stdio.h>

int main()
{
	int materias = 0;
	int pessoas = 0;
	int idade = 0;
	
	float n1,n2,n3,media= 0.0;
	float renda, renda_per_capita = 0.0;
	int boolRenda_per_capita = 0;
	int boolMedia = 0;

	char orient = '\0';
	int boolOrient = 0;
	
	printf("O estudante está matriculado em quantas disciplinas ?\n: ");
	__fpurge(stdin);
	scanf("%d",&materias);
		if(materias < 3){
			printf("O candidato não está matriculado no numero minimo(3) de disciplinas\n");
			printf("Finalizando..:\n");
			return (0);
		}

	printf("Informe o numero de pessoas da família\n: ");
	__fpurge(stdin);
	scanf("%d",&pessoas);
	
	printf("Informe a renda bruta da família\n:R$ ");
	__fpurge(stdin);
	scanf("%f",&renda);
	
	printf("Informe a idade do candidato\n: ");
	__fpurge(stdin);
	scanf("%d",&idade);
	
	printf("Insira 3 notas para o calculo de media\n1º: ");
	__fpurge(stdin);
	scanf("%f",&n1);
	printf("\n2º: ");
	__fpurge(stdin);
	scanf("%f",&n2);
	printf("\n3º: ");
	__fpurge(stdin);
	scanf("%f",&n3);

	/****calculo media****/
	media = (n1+n2+n3)/3;
	/*********************/
	
		if (idade < 18 && media < 50){
			boolMedia = 0;
		}
		else if(idade < 18 && media >= 50){
			boolMedia = 1;
		}
		else if(idade >=18 && media < 70){
			boolMedia = 0;
		}
		else if(idade >=18 && media >= 70){
			boolMedia = 1;
		}
	opc:
	printf("O candidato possui um orientador ?[s/n]\n: ");
	__fpurge(stdin);
	scanf("%c",&orient);
		if(orient != 's' && orient != 'n'){	//verificando o caractere
			printf("Opção incorreta..:\n");
			goto opc;
		}
		else if(orient == 's'){
			boolOrient = 1;
		}
		else{
			boolOrient = 0;
		}

	/**********calculo renda**********/
	renda_per_capita = renda / pessoas;
	/*********************************/
	
		if(renda_per_capita < 1000.00){
			boolRenda_per_capita = 1;
		}
		else{
			boolRenda_per_capita = 0;
		}
	
	/******************************************************/
	
		if(boolOrient == 1 && boolRenda_per_capita == 1 && boolMedia == 1){
			printf("Aprovado\n\n");
		}
		else{
			printf("\n\nReprovado, não se encaixou nos seguintes requisitos:\n");
				if(boolOrient == 0){
					printf("- O candidato não possui orientador\n");
				}
				if(boolRenda_per_capita == 0){
					printf("- Renda por pessoa maior que R$ 1.000,00\n");
				}
				if(boolMedia == 0){
					printf("- Não atingiu a media minima\n\n");
				}
				
		}

	return (0);
}
