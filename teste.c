#include<stdio.h>

int main(){

	int n = 0;
	int i = 0;
	int contar = 0;
	__fpurge(stdin);
	scanf("%d",&n);
		
		for(i = 2;i>1;contar++){
			if(n/i != n && n/i != 1){
				i++;
			}
			else{
				i=1;
				printf("primo\n");
			}
		}
	return(0);
}
