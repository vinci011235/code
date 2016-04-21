#include<stdio.h>

int main()
{
	int n = 0;

	for (n = 7; n < 100; n+=7)
	{
		if(n%3 == 0 && n%2 == 0){
			printf("%d ",n);
		}
	}
	printf("\n");
	return(0);
}