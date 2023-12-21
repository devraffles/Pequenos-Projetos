//1. Faca um programa em C que escreva todos os multiplos de 4 de 0 ate 100;
#include<stdio.h>
int main () {
	int i;
	
	i = 0;

	while(i <= 100){
		if (i % 4 == 0) {
			printf("%d ", i);
		}
		i++;	
	}
	
	return 0;
}
