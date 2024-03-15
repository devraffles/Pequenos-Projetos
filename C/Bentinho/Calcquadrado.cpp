//Faça um algoritmo que leia as dimensões de um quadrado e imprima a sua área;
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
