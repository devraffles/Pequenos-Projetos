//Fa�a um algoritmo que leia as dimens�es de um quadrado e imprima a sua �rea;
#include <stdio.h>
int main()
{
int lado, area;
printf("Digite o lado do quadrado: ");
scanf("%d", &lado);
area = lado * lado;
printf("A area do quadrado e: %d", area);
return 0;
}
