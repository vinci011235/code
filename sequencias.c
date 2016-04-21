#include<stdio.h>

int main()
{
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	int n5 = 0;
	int n6 = 0;
	int n7 = 0;
	int array[n5];

	for(n1 = -15; n1 < 0; n1 += 2)
	{
		printf("%d ", n1);
	}
	printf("\n------------------------------\n");

	for (n2 = 8; n2 < 72; n2 += 7)
	{
		printf("%d ", n2);
	}
	printf("\n------------------------------\n");

	for (n3 = 0, n4 = 10; n3 <= 10 && n4 >= 0; n3++,n4--)
	{
		printf("[%d,%d]", n3,n4);
	}
	printf("\n------------------------------\n");


	//**************************************************************//

	for(n5 = 1; n5 <= 10; n5++)
	{
		array[n5] = n5;
		if(array[n5] == 10){
			printf("0");
		}
		else{
			printf("%d", array[n5]);
		}
		
	}
	printf(",");
	for(n6 = 1; n6 <= 10; n6++)
	{
		array[n6] = n6;
		if(array[n6] == 10){
			printf("0");
		}
		else{
			printf("%d", array[n6]);
		}
	}
	printf(",");
	for (n7 = 1; n7 <= 10; n7++)
	{
		array[n7] = n7;
		if(array[n7] == 10){
			printf("0");
		}
		else{
			printf("%d", array[n7]);
		}
	}
	printf("\n------------------------------\n");
	//**************************************************************//

	printf("\n");
	return(0);
}