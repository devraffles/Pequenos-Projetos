/* ==========================================================================
Implemente um algoritmo em linguagem C que leia o raio de um c�rculo e calcule 
a sua �rea e o seu per�metro. Ap�s os calculos, imprimir os resultados. 
Obs.: o raio e os resultados de �rea e per�metro podem ser n�meros decimais. 
Per�metro = 2 * PI * raio / �rea = PI * raio * raio - considerar PI = 3,14. 
============================================================================*/

#include <stdio.h>
int main (){
	
	float raio, area, perimetro = 0.00;
	float pi = 3.14;
	
	printf("digite o raio:");
	scanf("%f",&raio);
	
	area = pi * (raio * raio);
	perimetro = 2 * pi * raio;
	
	printf("Area:%.2f\n",area);
	printf("Perimetro:%.2f",perimetro);
	
	return 0;
}
