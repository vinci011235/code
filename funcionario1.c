#include <stdio.h>
#include <string.h>

int main ()
{
	char nome[45];
	char cargo[25];
	char empresa[30];
	float valor_hr = 0.0;
	float salario_bruto = 0.0;
	float inss = 0.0;
	float contr_sind = 0.0;
	float impos_renda = 0.0;
	float salario_liquido = 0.0;
	int total_horas = 0;
	int aliquota_impos = 0;
	int aliquota_impos_anual = 0;
	int dependentes = 0;
	int numero_dependentes = 0;
	int dependentesV = 0;

	float impos_faixa2 = 69.1995;  //7.5%
	float impos_faixa3 = 138.6585; //15%
	float impos_faixa4 = 205.5645; //22.5%
	
	//Variaveis de calculo anual
	float salario_bruto_anual = 0.0;
	float inss_anual = 0.0;
	float impos_renda_anual = 0.0;
	float contr_sind_anual = 0.0;
	float salario_liquido_anual = 0.0;
	

	strcpy(nome, "");
	strcpy(cargo,"");
	strcpy(empresa, "");	

	//**********************************************//
	//		Inicio Captura de dados		//
	//**********************************************//

	printf("Insira seu nome completo..:\n");
	__fpurge(stdin);
	scanf("%[a-z A-Z]s",nome);

	printf("Insira seu cargo..:\n");
	__fpurge(stdin);
	scanf("%[a-z A-Z]s",cargo);

	printf("Insira sua Empresa..:\n");
	__fpurge(stdin);
	scanf("%[a-z A-Z]s",empresa);

	printf("Valor por hora trabalhada..:\n");
	__fpurge(stdin);
	scanf("%f",&valor_hr);

	printf("Quantas Horas Mensais o %s trabalhou..:\n",nome);
	__fpurge(stdin);
	scanf("%d",&total_horas);
	
	printf("Possui quantos dependentes ?\n");
	__fpurge(stdin);
	scanf("%d",&numero_dependentes);
	
		if(numero_dependentes >= 12){
			aliquota_impos = 1;
			aliquota_impos_anual = 1;
		}
		else{
			dependentesV = 1;
		}

	//**********************************************//
	//		Fim Captura de dados		//
	//**********************************************//

	//**********************************************//
	//		Inicio Calculos			//
	//**********************************************//

	//Inicio Calculo Mensal
	salario_bruto = total_horas * valor_hr;
	inss = salario_bruto * 0.11;
	contr_sind = salario_bruto * 0.01;

		if(dependentesV == 1){
			dependentes = numero_dependentes * 189.59;
		}

	salario_liquido = salario_bruto - inss - contr_sind - dependentes;

		if(salario_liquido < 1903.98){
			aliquota_impos = 1;
		}
		else if(salario_liquido > 1903.99 && salario_liquido < 2826.65){
			impos_renda = ((salario_liquido - 1903.99) * 0.075);
		}

		else if(salario_liquido > 2826.66 && salario_liquido < 3751.05){
			impos_renda = ((salario_liquido - 2826.66) * 0.15) + impos_faixa2; 
		}

		else if(salario_liquido > 3751.06 && salario_liquido < 4664.68){
			impos_renda = ((salario_liquido - 3751.06) * 0.225) + impos_faixa2 + impos_faixa3;
		}

		else if(salario_liquido > 4664.69){
			impos_renda = ((salario_liquido - 4664.69) * 0.275) + impos_faixa2 + impos_faixa3 + impos_faixa4;
		}

	salario_liquido = salario_liquido - impos_renda;

	//Fim calculo Mensal
	
	//Inicio calculo Anual
	salario_bruto_anual = salario_bruto * 13;
	inss_anual = salario_bruto_anual * 0.11;
	impos_renda_anual = impos_renda * 13;
	contr_sind_anual = salario_bruto_anual * 0.01;
	salario_liquido_anual = salario_bruto_anual - inss_anual - contr_sind_anual;

		if(salario_liquido_anual < 24751.74){
			aliquota_impos_anual = 1;
		}

	salario_liquido_anual = salario_liquido_anual - impos_renda_anual;

	//**********************************************//
	//		Impresssao de dados		//
	//**********************************************//

	printf("\n\nFuncionário: %s\n",nome);
	printf("Cargo: %s\n",cargo);
	printf("Empresa: %s\n",empresa);

	printf("\n\n*************DESMONSTRAÇÃO DE PAGAMENTO MENSAL*************\n");
	printf("Salario bruto..: R$ %.2f\n",salario_bruto);
	printf("INSS..: R$ %.2f\n",inss);
	printf("Contribuição Sindical..: R$ %.2f\n",contr_sind);
		if(aliquota_impos == 1){
			printf("Imposto de Renda Mensal: ISENTO\n");
		}
		else{
			printf("Imposto de Renda Mensal: R$ %f\n",impos_renda);
		}
	printf("SALARIO LIQUIDO..: R$ %.2f\n",salario_liquido);
	printf("***********************************************************\n\n");
	
	printf("\n********************DESMONSTRAÇÃO ANUAL********************\n");
	printf("Salario bruto anual (Incluindo 13º salário)..: R$ %.2f\n",salario_bruto_anual);
	printf("INSS anual..: R$ %.2f\n",inss_anual);
	printf("Contribuição Sindical Anual..: R$ %.2f\n",contr_sind_anual);
		if(aliquota_impos_anual == 1){
			printf("Imposto de Renda Anual..: ISENTO\n");
		}
		else{
			printf("Imposto de Renda Anual..: R$ %.2f\n",impos_renda_anual);
		}
	printf("Salário Liquido anual..: R$ %.2f",salario_liquido_anual);
	printf("\n***********************************************************\n\n");

	return (0);
}
