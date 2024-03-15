//Faca um algoritmo em C que leia e multiplique dois numeros reais;
#include <stdio.h>

int main (){
	
	float n1, n2, resultado = 0;
	printf("digite primeiro numero:");
	scanf("%f",&n1);
	
	printf("digite segundo numero:");
	scanf("%f",&n2);
	
	resultado = n1 * n2;
	
	printf("Resultado:%2.f",resultado);
	
	return 0;
}
