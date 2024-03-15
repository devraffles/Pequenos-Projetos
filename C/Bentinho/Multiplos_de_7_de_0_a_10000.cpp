//2. Faca um programa em C que conte quantos multiplos de 7 existem de 0 a 10.000;
#include<stdio.h>
int main () {
	int i, contador;
	
	i = 0;

	while(i <= 10000){
		if (i % 7 == 0) {
			contador++;
		}
		i++;	
	}
	printf("Multiplos de 7 existentes entr 0 e 10.000 %d ", contador);
	return 0;
}
