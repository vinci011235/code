#include<stdio.h>

int main()
{
	int n = 0;
	int z = 0;
	int res = 0;

	inicio:
	printf("Insira um numero inteiro: (00 - SAIR)\n");
	__fpurge(stdin);
	scanf("%d",&z);

	while(z != 00){
		for(n = 1; n <= 10; n++){
			res = z * n;
			printf("%d x %d = %d\n",z,n,res);
		}
		printf("\n");
		goto inicio;
	}
	return(0);
}