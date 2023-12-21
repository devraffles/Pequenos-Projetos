//Faca um algoritmo em C que leia e Divide dois numeros inteiros;
#include <stdio.h>

int main (){
	
	int n1, n2, resultado = 0;
	
	printf("digite primeiro numero:");
	fflush(stdout);
	scanf("%d",&n1);
	fflush(stdin);
	
	printf("digite segundo numero:");
	fflush(stdout);
	scanf("%d",&n2);
	fflush(stdin);
	
	resultado = n1 / n2;
	
	printf("Resultado:%d",resultado);
	fflush(stdout);
	
	return 0;
}
