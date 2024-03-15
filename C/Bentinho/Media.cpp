//Faca um algoritmo em C que calcule a media entre quatro valores;
#include <stdio.h>
int main (){
	
	int n1, n2, n3, n4, resultado = 0;
	
	printf("digite primeiro numero:");
	scanf("%d",&n1);
	
	printf("digite segundo numero:");
	scanf("%d",&n2);
	
	printf("digite terceira numero:");
	scanf("%d",&n3);
	
	printf("digite quarto numero:");
	scanf("%d",&n4);
	
	resultado = (n1 + n2 + n3 +n4) / 4;
	
	printf("Resultado:%d",resultado);
	return 0;
}
