#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void capturar(char*);
void converter(char*,int*);
void validar_d1(int*);
void validar_d2(int*);
void verificar_estado(int*);
int main(){
	char cpf[11];
	int cpf_convertido[11];

	capturar(cpf);
	converter(cpf,cpf_convertido);
	validar_d1(cpf_convertido);

	return 0;
}
/*
CAPTURA O CPF
*/
void capturar(char cpf[]){
	printf("Insira o CPF sem pontuacao e hífen\n:");
	__fpurge(stdin);
	scanf("%s",cpf);

	if(strlen(cpf) != 11){
		printf("CPF inválido..: Insira novamente\n:");
		capturar(cpf);
	}
}
/*
FUNÇÃO PARA CONVERTER O CHAR (ASCII) PARA UM NUMERO INTEIRO
'0' = 48 - 48 -> INTEIRO 0
'1' = 49 - 48 -> INTEIRO 1
*/
void converter(char cpf[], int cpf_convertido[]){
	int i = 0;
	for (i = 0; i < strlen(cpf); i++){
		cpf_convertido[i] = cpf[i] - 48;
	}
}
/*
VALIDAR 1º DIGITO
MULTIPLICA OS VALORES DIGITADOS POR 10 ATE 2, SOMA/DIVIDE POR 11/RESTO DA DIVISÃO SUBTRAI DE 11;
SE > 9 ENTAO DIGITO TEM QUE SER 0; SENAO É O PROPRIO RESULTADO DA SUBTRAÇÃO
*/
void validar_d1(int cpf[]){
	int mod,i,z = 0;
	int soma = 0;

	for(i = 0, z = 10; i < 9 && z >= 2; i++, z--){
		soma += (cpf[i] * z);
	}
	mod = 11 - (soma % 11);

	if(mod > 9 && cpf[9] == 0)
		validar_d2(cpf);
	else if(mod == cpf[9])
		validar_d2(cpf);
	else
		printf("\n::..CPF invalido..::\n");
}
/*
VALIDAR 2º DIGITO
MESMO ALGORITMO DA FUNÇÃO 'VALIDAR_D1'
*/
void validar_d2(int cpf[]){
	int mod,i,z = 0;
	int soma = 0;

	for(i = 0, z = 11; i < 10 && z >= 2; i++, z--){
		soma += (cpf[i] * z);
	}
	mod = 11 - (soma % 11);

	if(mod > 9 && cpf[10] == 0){
		printf("\n::..CPF VALIDO!..::\n");
		verificar_estado(cpf);
	}
	else if(mod == cpf[10]){
		printf("\n::..CPF VALIDO!..::\n");
		verificar_estado(cpf);
	}
	else
		printf("\n::..CPF invalido..::\n");
}
/*
VERIFICANDO 000.000.00X-00 À QUAL ESTADO PERTENCE
1. Distrito Federal, Goiás, Mato Grosso do Sul e Tocantins
2. Pará, Amazonas, Acre, Amapá, Rondônia e Roraima
3. Ceará, Maranhão e Piauí
4. Pernambuco, Rio Grande do Norte, Paraíba e Alagoas
5. Bahia e Sergipe
6. Minas Gerais
7. Rio de Janeiro e Espírito Santo
8. São Paulo
9. Paraná e Santa Catarina
0. Rio Grande do Sul
*/
void verificar_estado(int cpf[]){
	if(cpf[8] == 1)
		printf("Distrito Federal, Goiás, Mato Grosso do Sul e Tocantis\n");
	else if(cpf[8] == 2)
		printf("Pará, Amazonas, Acre, Amapá, Rondônia e Roraima\n");
	else if(cpf[8] == 3)
		printf("Ceará, Maranhão e Piauí\n");
	else if(cpf[8] == 4)
		printf("Pernambuco, Rio Grande do norte, Paraíba e Alagoas\n");
	else if(cpf[8] == 5)
		printf("Bahia e Sergipe\n");
	else if(cpf[8] == 6)
		printf("Rio de Janeiro e Espírito Santo\n");
	else if(cpf[8] == 7)
		printf("São Paulo\n");
	else if(cpf[8] == 8)
		printf("São paulo");
	else if(cpf[8] == 9)
		printf("Paraná e Santa Catarina\n");
	else
		printf("Rio Grande do Sul\n");
}