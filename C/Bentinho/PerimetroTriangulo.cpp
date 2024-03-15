/* ==========================================================================
Sabendo que um triangulo tem três lados que podem ser diferentes, 
implemente um algoritmo em linguagem C que leia os seus tres lados e 
imprima o seu perímetro. (Perímetro = soma de todos os lados).
============================================================================*/

#include <stdio.h>
int main (){
	
	int n1, n2, n3, n4, resultado = 0;
	printf("digite primeiro lado:");
	scanf("%d",&n1);
	
	printf("digite segundo lado:");
	scanf("%d",&n2);
	
	printf("digite terceira lado:");
	scanf("%d",&n3);
	
	resultado = n1 + n2 + n3;
	
	printf("Perimetro:%d",resultado);
	return 0;
}
