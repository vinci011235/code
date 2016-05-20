#include<stdio.h>

float imc(float,float);

int main()
{
	float alt, peso,r = 0.0;

	printf("Insira sua altura\n");
	__fpurge(stdin);
	scanf("%f",&alt);

	printf("Insira seu peso\n");
	__fpurge(stdin);
	scanf("%f",&peso);

	r = imc(peso,alt);

//	printf("%.2f\n", r);

	
	if(r < 18.5)
	{
		printf("IMC = %.2f\nAbaixo do peso ideal\n",r);
	}
	else if (r >= 18.5 && r < 25)
	{
		printf("IMC = %.2f\nPeso normal\n",r);
	}
	else if (r >= 25 && r < 30)
	{
		printf("IMC = %.2f\nExcesso de peso\n",r);
	}
	else if (r >= 30 && r < 35)
	{
		printf("IMC = %.2f\nObesidade I\n",r);
	}
	else if (r >= 35 && r < 40)
	{
		printf("IMC = %.2f\nObesidade II\n",r);
	}
	else if (r >= 40)
	{
		printf("IMC = %.2f\nObesidade III\n",r);
	}
	return(0);
}

float imc(float a, float p)
{
	float z = 0.0;
	z =	a/(p*p);

	return z;
}