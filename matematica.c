#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float soma(float,float);
float subt(float,float);
float mult(float,float);
float divisao(float,float);


int main()
{
	float z,y,r = 0.0;
	char op = '\0';

	inicio:
	printf("s - sair\n");
	printf("Escolha uma operação\n");
	printf("(+ - * / p r): ");
	__fpurge(stdin);
	scanf("%c",&op);

	if (op == 'r')
	{
		printf("Insira o valor para raiz\n:");
		__fpurge(stdin);
		scanf("%f",&z);

		r = sqrt(z);

		printf("Raiz quadrada de %.2f = %.2f\n",z,r);
		goto inicio;
	}
	else if (op == 's')
	{
		system("clear");
		printf("Finalizando\n");
		return(0);
	}
	else
	{

		printf("Insira os valores\n:");
		__fpurge(stdin);
		scanf("%f",&z);

		printf("\n:");
		__fpurge(stdin);
		scanf("%f",&y);

		switch(op)
		{
			case '+':
				r = soma(z,y);
				printf("%.2f + %.2f = %.2f\n",z,y,r);
				goto inicio;

			case '-':
				r = subt(z,y);
				printf("%.2f - %.2f = %.2f\n",z,y,r);
				goto inicio;

			case '*':
				r = mult(z,y);
				printf("%.2f x %.2f = %.2f\n",z,y,r);
				goto inicio;

			case '/':
				r = divisao(z,y);
				printf("%.2f / %.2f = %.2f\n",z,y,r);
				goto inicio;

			case 'p':
				r = pow(z,y);
				printf("%.2f ^ %.2f = %.2f\n",z,y,r);
				goto inicio;

			default:
				system("clear");
				printf("Invalido..:\n");
				goto inicio;

		}
		return(0);
	}
}

float soma (float a, float b)
{
	float r = 0;
	r = a + b;
	return r;	
}

float subt(float a, float b)
{
	float r = 0;
	r = a - b;
	return r;	
}

float mult(float a, float b)
{
	float r = 0;
	r = a * b;
	return r;
}

float divisao(float a, float b)
{
	float r = 0;
	r = a / b;
	return r;
}
