#include<stdio.h>

int main()
{
	int i = 0, n1 = 15, n2 = 4, res = 0;
	
	printf("%d : %d = %d", n1,n2,n1);

	for(res = n1; res >= n2; res -= n2){
		i++;
		printf(" - %d", n2);
	}
	printf(" = %d",i);
	printf(" resto: %d\n",res);
	return(0);
}
