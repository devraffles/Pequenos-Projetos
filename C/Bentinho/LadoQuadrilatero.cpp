/*--------------------------------------------------------------------
Implemente um algoritmo em Linguagem C que leia dois números inteiros 
e mostre (imprima) o maior número digitado.
----------------------------------------------------------------------*/
#include <stdio.h>
int main () {
	
	int n1, n2;
	
	printf("Digite primeiro numero:");
	scanf("%d",&n1);
	
	printf("Digite segundo numero:");
	scanf("%d",&n2);
	
	if (n1 > n2){
		printf("primeiro numero maior");
	}
	else{
		printf("segundo numero maior");
	}
	return 0;
}
