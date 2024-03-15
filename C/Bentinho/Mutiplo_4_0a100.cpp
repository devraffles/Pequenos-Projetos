//1. Faca um programa em C que escreva todos os multiplos de 4 de 0 ate 100;
#include<stdio.h>
int main () {
	int i, n1, n2;
	
	printf("Digite o seu 1 numero:");
	scanf("%d",&n1);
	
	printf("Digite o seu 2 numero:");
	scanf("%d",&n2);
	
	i = n1;
	
	while(i <= n2){
		if (i % 4 == 0) {
			printf("%d ", i);
		}
		i++;	
	}
	
	return 0;
}
