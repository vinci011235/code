#include<stdio.h>

int main()
{
  float me = 0.0;
  float ce = 0.0;
  
  printf("METROS PARA CENTIMETRO\n\n");
  printf("Insira o valor em metros..:\n");
  scanf("%f",&me);
  __fpurge(stdin);
  
  ce = me * 100;
  
  printf("%.2f metros é igual a: %.2f centimetros\n",me,ce);
  
return(0);
}
