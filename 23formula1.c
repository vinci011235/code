#include<stdio.h>

int main()
{
	int vol = 0;
	int i = 0;
	int z = 0;
	float mel = 0.0;
	float tem[vol];
	
	printf("Insira o numero de voltas\n");
	__fpurge(stdin);
	scanf("%d",&vol);
	tem[vol] = vol;

	printf("Insira os tempos:\n");

	for(i = 0; i < vol; i++){
		printf(": ");
		__fpurge(stdin);
		scanf("%f",&tem[i]);
		
		
	}
	for(z = 0; z < vol; z++){
		mel = tem[z];

		if(tem[z] < mel){
			mel = tem[z];
		}
	}
	printf("Menor %.2f\n",mel);
//	printf("%f", tem[i]);
	return(0);
}
