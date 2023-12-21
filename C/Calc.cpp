#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

float soma(int a,int b) 
{
  return(a+b);
}

float subtracao(int a,int b) 
{
  return(a-b);
}

float multiplicacao(int a,int b) 
{
  return(a*b);
}

float divisao(int a,int b)
{
  return(a/b);
}

int main()
{
  int n1,n2,result;
  n1=0.0;
  n2=0.0;
  int op;

  printf("\nDigite o primeiro numero:");
  fflush(stdout);
  scanf("%d",&n1);
  fflush(stdin);
  
  printf("\nDigite o segundo numero:");
  fflush(stdout);
  scanf("%d",&n2);
  fflush(stdin);
  
  printf("\nDigite o codigo para operacao desejada:\n");
  printf("\n(1)-Soma\n");
  printf("\n(2)-Subtracao\n");
  printf("\n(3)-Multiplicacao\n");
  printf("\n(4)-Divisao\n");
  printf("\n\n");
  fflush(stdout);
  scanf("%d",&op);
  fflush(stdin);
  
  switch (op)
  {
    case 1:
      result=soma(n1,n2);
      break;
    case 2:
      result=subtracao(n1,n2);
      break;
    case 3:
      result=multiplicacao(n1,n2);
      break;
    case 4:
      if( (n2!=0) && (n1!=0) )
      {
        result=divisao(n1,n2);
      }
      else
      {
        printf("\nOperacao invalida, pois não existe divisao por zero\n");
      }
      break;
    default:
      printf("\nOperacao invalida!!!\n");
  }
  printf("\nO resultado da operacao e:%.1f",result);
  fflush(stdout);
  getch();
  
  return 0;
}
