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
	//		Inicio Captura de dados										//
	//**********************************************//

	printf("Insira seu nome completo..:\n");
	scanf("%[a-z A-Z]s",nome);
	__fpurge(stdin);

	printf("Insira seu cargo..:\n");
	scanf("%[a-z A-Z]s",cargo);
	__fpurge(stdin);

	printf("Insira sua Empresa..:\n");
	scanf("%[a-z A-Z]s",empresa);
	__fpurge(stdin);

	printf("Valor por hora trabalhada..:\n");
	scanf("%f",&valor_hr);
	__fpurge(stdin);

	printf("Quantas Horas Mensais o %s trabalhou..:\n",nome);
	scanf("%d",&total_horas);
	__fpurge(stdin);

	//**********************************************//
	//		Fim Captura de dados											//
	//**********************************************//

	//**********************************************//
	//		Inicio Calculos														//
	//**********************************************//

	//Inicio Calculo Mensal
	salario_bruto = total_horas * valor_hr;
	inss = salario_bruto * 0.11;
	contr_sind = salario_bruto * 0.01;
	impos_renda = salario_bruto * 0.27;
	salario_liquido = salario_bruto - inss - contr_sind - impos_renda;
	//Fim calculo Mensal
	
	//Inicio calculo Anual
	salario_bruto_anual = salario_bruto * 13;
	inss_anual = salario_bruto_anual * 0.11;
	impos_renda_anual = salario_bruto_anual * 0.27;
	contr_sind_anual = salario_bruto_anual * 0.01;
	salario_liquido_anual = salario_bruto_anual - inss_anual - impos_renda_anual - contr_sind_anual;
	
	printf("\n\nFuncionário: %s\n",nome);
	printf("Cargo: %s\n",cargo);
	printf("Empresa: %s\n",empresa);
	
	printf("\n\n*************DESMONSTRAÇÃO DE PAGAMENTO MENSAL*************\n");
	printf("Salario bruto..: R$ %.2f\n",salario_bruto);
	printf("INSS..: R$ %.2f\n",inss);
	printf("Contribuicao sindical..: R$ %.2f\n",contr_sind);
	printf("IR..: R$ %.2f\n",impos_renda);
	printf("SALARIO LIQUIDO..: R$ %.2f\n",salario_liquido);
	printf("***********************************************************\n\n");
	
	printf("\n********************DESMONSTRAÇÃO ANUAL********************\n");
	printf("Salario bruto anual (Incluindo 13º salário)..: R$ %.2f\n",salario_bruto_anual);
	printf("INSS anual..: R$ %.2f\n",inss_anual);
	printf("IR Anual..: R$ %.2f\n",impos_renda_anual);
	printf("Contribuição Sindical Anual..: R$ %.2f\n",contr_sind_anual);
	printf("Salário Liquido anual..: R$ %.2f",salario_liquido_anual);
		printf("\n***********************************************************\n\n");

	
	
	return (0);
}
