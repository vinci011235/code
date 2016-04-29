#include<stdio.h>

int main()
{
	int i = 0, n = 7, res = 0;
	
	printf("%d!:\n",n);
	res = n;
	for(i = n; i > 0; i--){
		if(i == n){
			printf("%d",i);
		}
		else{
			res *= i;
			printf(" * %d",i);
		}
	}
	printf(" = %d\n",res);
	return(0);
}
