//Faca um algoritmo em C que leia e Divide dois numeros reais;
#include <stdio.h>

int main (){
	
	float n1, n2, resultado = 0;
	printf("digite primeiro numero:");
	fflush(stdout);
	scanf("%f",&n1);
	fflush(stdin);
	
	printf("digite segundo numero:");
	fflush(stdout);
	scanf("%f",&n2);
	fflush(stdin);
	
	resultado = n1 / n2;
	
	printf("Resultado:%f",resultado);
	
	return 0;
}
