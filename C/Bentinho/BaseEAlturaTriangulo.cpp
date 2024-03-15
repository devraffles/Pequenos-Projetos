/* ==========================================================================
Implemente um algoritmo em linguagem C que leia a base e a altura de um triangulo
e calcule a sua área. 
Obs.: a base a altura desses triangulos podem ser números decimais. 
============================================================================*/

#include <stdio.h>
int main (){
	
	float n1, n2, n3, n4, resultado = 0.00;
	printf("digite Altura:");
	scanf("%f",&n1);
	
	printf("digite Base:");
	scanf("%f",&n2);
	
	resultado = (n1 * n2)/2;
	
	printf("Area:%.2f",resultado);
	return 0;
}
