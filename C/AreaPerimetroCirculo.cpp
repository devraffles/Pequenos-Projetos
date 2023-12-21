/* ==========================================================================
Implemente um algoritmo em linguagem C que leia o raio de um círculo e calcule 
a sua área e o seu perímetro. Após os calculos, imprimir os resultados. 
Obs.: o raio e os resultados de área e perímetro podem ser números decimais. 
Perímetro = 2 * PI * raio / Área = PI * raio * raio - considerar PI = 3,14. 
============================================================================*/

#include <stdio.h>
int main (){
	
	float raio, area, perimetro = 0.00;
	float pi = 3.14;
	
	printf("digite o raio:");
	fflush(stdout);
	scanf("%f",&raio);
	fflush(stdin);
	
	area = pi * (raio * raio);
	perimetro = 2 * pi * raio;
	
	printf("Area:%.2f\n",area);
	printf("Perimetro:%.2f",perimetro);
	fflush(stdout);
	
	return 0;
}
