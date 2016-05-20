#include<stdio.h>
#include<math.h>

void baskara (float,float,float);
float delta (float,float,float);
float r_delt (float);
float raiz_1 (float,float,float);
float raiz_2 (float,float,float);

int main()
{
	float a,b,c = 0.0;

	printf("A: ");
	__fpurge(stdin);
	scanf("%f",&a);

	printf("B: ");
	__fpurge(stdin);
	scanf("%f",&b);

	printf("C: ");
	__fpurge(stdin);
	scanf("%f",&c);

	printf("------------------------------\n");
	baskara(a,b,c);

	return(0);
}

void baskara (float a, float b, float c)
{
	float d,r_d,x1,x2 = 0.0;

	d = delta(a,b,c);
	r_d = r_delt(d);
	x1 = raiz_1(b,r_d,a);
	x2 = raiz_2(b,r_d,a);

	printf("Delta: %.2f\n",d);
	printf("Raiz de delta: %.2f\n",r_d);
	if(d < 0)
	{
		printf("Equação sem raiz\n");
	}
	else if(d == 0)
	{
		printf("Equação com 1 raiz\n");
	}
	else
	{
		printf("Equação com 2 raizes\n");
	}
	printf("X\': %.2f\n",x1);
	printf("X\":%.2f\n",x2);
	if(a>0)
	{
		printf("concavidade para cima\n");
	}
	else
	{
		printf("concavidade para baixo\n");
	}
	printf("Corta o eixo Y em %.2f\n", c);
}

float delta (float a, float b, float c)
{
	float d = 0.0;
	d = (b*b) - 4*a*c;

	return d;
}

float r_delt(float r)
{
	float r_delta = 0.0;
	r_delta = sqrt(r);

	return r_delta;
}

float raiz_1(float b,float delt,float a)
{
	float x1 = 0.0;
	x1 = (b*(-1) + delt)/2*a;

	return x1;

}

float raiz_2(float b,float delt,float a)
{
	float x2 = 0.0;
	x2 = (b*(-1) - delt)/2*a;

	return x2;
}