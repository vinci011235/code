#include<stdio.h>
#include<stdlib.h>

int main(){
	

	int z = 0;
	int n;
	int m;
	
	inicio:
	printf("Insira um valor impar:\n");
	__fpurge(stdin);
	scanf("%d",&z);
	char array[z];
		if(z % 2 == 0){
			system("clear");
			printf("Valor par, insira um numero impar\n:");
			goto inicio;
		}
		else{
			for(n = 0; n < z;n++){
				array[n] = (char)n;
				printf("| ");
			}
			printf("\n");

			for(n = 0; n < (z/2);n++){
//				sleep(1);
				array[z - (n+1)] = '\0';
				array[n] = '\0';
					for(m = 0 ; m < z ; m++){
						if(array[m] == '\0'){
							printf("  ");
						}
						else{
							printf("| ");
						}
					}
			printf("\n");

			}
		printf("\n");
		}
	
	return(0);
}
