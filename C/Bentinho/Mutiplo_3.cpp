/*-------------------------------------
Implemente um algoritmo em Linguagem C 
que leia dois n�meros inteiros e mostre 
se a soma desses dois n�meros � ou n�o 
m�ltipla de 3.
---------------------------------------*/

#include <stdio.h>
int main () {
	
	int n1, n2, resultado;
	
	printf("Digite primeiro numero:");
	scanf("%d",&n1);
	
	printf("Digite segundo numero:");
	scanf("%d",&n2);
	
	resultado = n1 + n2;
	
	resultado = resultado % 3;
	
	if (resultado == 0){
		printf("e multiplo de 3");
	}
	else{
		printf("nao e multiplo de 3");
	}
	return 0;
}
