//Faca um algoritmo em C que leia e Divide dois numeros inteiros;
#include <stdio.h>

int main (){
	
	int n1, n2, resultado = 0;
	printf("digite primeiro numero:");
	scanf("%d",&n1);
	
	printf("digite segundo numero:");
	scanf("%d",&n2);
	
	resultado = n1 / n2;
	
	printf("Resultado:%d",resultado);
	
	return 0;
}
