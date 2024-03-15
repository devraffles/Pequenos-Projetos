/* ==========================================================================
Implemente um algoritmo em linguagem C para calcular o volume de uma piscina 
no formato retangular. Lembre-se de que o volume é calculado pela multiplicação 
da altura, comprimento e largura.
============================================================================*/

#include <stdio.h>
int main (){
	
	float n1, n2, n3, n4, resultado = 0.00;
	printf("digite altura:");
	scanf("%f",&n1);
	
	printf("digite comprimento:");
	scanf("%f",&n2);
	
	printf("digite largura:");
	scanf("%f",&n3);
	
	resultado = n1 * n2 * n3;
	
	printf("Volume:%.2f",resultado);
	return 0;
}
