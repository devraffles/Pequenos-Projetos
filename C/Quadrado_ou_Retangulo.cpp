//Implemente um algoritmo em Linguagem C que leia os lados de um quadrilatero (lado1 e lado2) 
//e imprima se este quadrilatero � um quadrado (lado 1 � igual ao lado2) ou um ret�ngulo 
//(lado 1 n�o � igual ao lado 2).

#include <stdio.h>
int main()
{
int lado1,lado2, area;
printf("Digite um dos lados do quadrilatero: ");
scanf("%d", &lado1);
printf("Digite o outro lado do quadrilatero: ");
scanf("%d", &lado2);

if (lado1 == lado2){
	printf("o quadrilatero � um quadrado!");	
} else {
	printf("o quadrilatero � um retangulo!");
}

return 0;
}
