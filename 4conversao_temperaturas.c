#include<stdio.h>

int main()
{
	float c = 0.0;
	float f = 0.0;
	float k = 0.0;
	float res = 0.0;
	int opc = 0;
	
	inicio: //repetição goto	
	printf("Escolha qual conversão deseja\n");
	printf("1-Celsius --> Kelvin\n2-Celsius --> Fahrenheit\n");
	printf("3-Kelvin --> Celsius\n4-Kelvin --> Fahrenheit\n");
	scanf("%d",&opc);
	__fpurge(stdin);

	while(opc != 99){
		if(opc == 1){
			printf("Insira a temperatura em Celsius\n:");
			scanf("%f",&c);
			__fpurge(stdin);
			res = c - 273.15;
			printf("%.2fºC equivale à %.2fK\n\n",c,res);
			goto inicio;
		}
		else if(opc == 2){
			printf("Insira a temperatura em Celsius\n:");
			scanf("%f",&c);
			__fpurge(stdin);
			res = (c * 1.8) + 32.00;
			printf("%.2fºC equivale à %.2fºF\n",c,res);
			goto inicio;
		}
		else if(opc == 3){
			printf("Insira a temperatura em Kelvin\n:");
			scanf("%f",&k);
			__fpurge(stdin);
			res = k + 273.15;
			printf("%.2fK equivale à %.2fºC\n",k,res);
			goto inicio;
		}
		else if(opc == 4){
			printf("Insira a temperatura em Kelvin\n");
			scanf("%f",&k);
			__fpurge(stdin);
			res = ((k - 273.15)*1.8) + 32.00;
			printf("%.2fK é equivale à %.2fºF\n",k,res);
			goto inicio;
		}
	}
	return(0);
}
