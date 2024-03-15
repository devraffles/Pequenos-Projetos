//1. Faca um programa em C que escreva todos os multiplos de 4 de 0 ate 100;
#include <stdio.h>
int main(){
	
	int i = 0;
	printf("Multiplos de 4 de 0 a 100");
	while (i <= 100){
		printf("%d * 4 = %d \n",i , i*4);
		i++;
	}
	return 0;
}
