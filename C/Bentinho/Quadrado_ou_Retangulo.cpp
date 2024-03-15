//Implemente um algoritmo em Linguagem C que leia os lados de um quadrilatero (lado1 e lado2) 
//e imprima se este quadrilatero é um quadrado (lado 1 é igual ao lado2) ou um retângulo 
//(lado 1 não é igual ao lado 2).

#include <stdio.h>
int main()
{
int lado1,lado2, area;
printf("Digite um dos lados do quadrilatero: ");
scanf("%d", &lado1);
printf("Digite o outro lado do quadrilatero: ");
scanf("%d", &lado2);

if (lado1 == lado2){
	printf("o quadrilatero é um quadrado!");	
} else {
	printf("o quadrilatero é um retangulo!");
}

return 0;
}
