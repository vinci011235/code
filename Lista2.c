#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	int valor1, valor2 = 0;

	float peixes = 0.0;
	float excesso = 0.0;
	float multa = 0.0;
	char nome[64];
	char sexo = '\0';
	int opc;

	int cod = 0;
	float hr = 0.0;
	float salario_basico = 0.0;
	float salario_excedente = 0.0;
	float salario = 0.0;
	
	strcpy(nome,"");

	inicio:
	printf("Escolha qual exercicio..: 1, 2, 3, 4, 5\n99 - SAIR\n");
	__fpurge(stdin);
	scanf("%d",&opc);
	
		while(opc != 99){
			if(opc == 1){
				printf("Insira o primeiro valor\n: ");
				__fpurge(stdin);
				scanf("%d",&valor1);
				printf("Insira o segundo valor\n: ");
				__fpurge(stdin);
				scanf("%d",&valor2);
		
					if(valor1 > valor2){
						printf("O maior valor é %d\n",valor1);
						//goto inicio;
					}
					else if(valor1 < valor2){
						printf("O maior valor é %d\n",valor2);
						//goto inicio;
					}
					else{
						printf("Valores Iguais\n");
					}
				printf("*----------------------------------------*\n\n");
				goto inicio;
			}
			else if(opc == 2){
				printf("Insira qualquer valor inteiro\n: ");
				__fpurge(stdin);
				scanf("%d",&valor1);
				
				valor1%2 == 0 ? printf("Numero par\n") : printf("Numero impar\n");
				printf("*----------------------------------------*\n\n");
				goto inicio;
			}
			else if(opc == 3){
				printf("Insira o peso de peixes\n\a: ");
				__fpurge(stdin);
				scanf("%f",&peixes);
					if(peixes > 50){
						excesso = peixes - 50;
						multa = excesso * 4.00;
						printf("Multa à ser paga pelo excesso de %.2f Kg\nR$ %.2f\n",excesso,multa);
					}
					else{
						printf("O peso de peixes esta conforme o regulamento oficial de pesca\n");
					}
				printf("*----------------------------------------*\n\n");
				goto inicio;
			}
			else if(opc == 4){
				printf("Insira seu nome\n:");
				__fpurge(stdin);
				scanf("%s",nome);
				sexo:
				printf("Insira o sexo [F/M]\n");
				__fpurge(stdin);
				scanf("%c",&sexo);
				sexo = toupper(sexo);

					if(sexo != 'F' && sexo != 'M'){
						printf("Opção errada\n");
						goto sexo;
					}
					else if(sexo == 'F'){
						printf("Ilma. Sra. %s\n",nome);
					}
					else if(sexo == 'M'){
						printf("Ilmo. Sr. %s\n",nome);
					}
				printf("*----------------------------------------*\n\n");
				goto inicio;
			}
			else if(opc == 5){
				printf("Insira o Codigo do funcionario\n:");
				__fpurge(stdin);
				scanf("%d",&cod);
				printf("Quantidade de horas trabalhadas\n:");
				__fpurge(stdin);
				scanf("%f",&hr);
				
					if(hr > 50){
						excesso = hr - 50;
						salario_excedente = excesso * 20.00;
					}
					else{
						excesso = 0.0;	
					}

				salario_basico = hr * 10.00;
				salario = salario_basico + salario_excedente;

				printf("O salario Basico: R$ %.2f\n",salario_basico);
					if(excesso == 0.0){
						printf("Valor excendete: R$ 0.0\n");
					}
					else{
						printf("Valor excedente: R$ %.2f\n",salario_excedente);
					}
				printf("Salario TOTAL: R$ %.2f\n",salario);
				printf("*----------------------------------------*\n\n");
				goto inicio;
			}
		}
	return(0);
}
