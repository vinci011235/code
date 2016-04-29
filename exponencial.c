#include<stdio.h>

int main()
{
	int i = 0, n1 = 2, n2 = 10, res = 0;
	
	res = n1;
	for(i = 0; i < n2; i++){
		if( i == 0){
			printf("%d: %d",n1,n1);
		}
		else{
			res *= n1;
			printf(" * %d",n1);
		}
	}
	printf(" = %d\n",res);
	return(0);
}
