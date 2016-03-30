#include<stdio.h>

int main()
{
  float n1 = 0.0;
  float n2 = 0.0;
  float n3 = 0.0;
  float n4 = 0.0;
  float res = 0.0;
  
  printf("MEDIA ENTRE 4 NOTAS\n\n");
  printf("Digite a primeira nota\n");
  scanf("%f",&n1);
  __fpurge(stdin);
  printf("Digite a segunda nota\n");
  scanf("%f",&n2);
  __fpurge(stdin);
  printf("Digite a terceira nota\n");
  scanf("%f",&n3);
  __fpurge(stdin);
  printf("Digite a quarta nota\n");
  scanf("%f",&n4);
  __fpurge(stdin);
  
  res = (n1 + n2 + n3 + n4)/4;
  
  printf("A media e..: %.2f\n",res);
  
  return(0);
}
