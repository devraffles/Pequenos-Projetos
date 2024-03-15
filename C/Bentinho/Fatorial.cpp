//3. Faca um programa em C que calcule o fatorial de um numero 
//digitado pelo usuario e imprima esse fatorial

#include <stdio.h>
 
int main()
{
	int fat, n;
	
	printf("Insira um valor para o qual deseja calcular seu fatorial: ");
	scanf("%d", &n);
	 
	for(fat = 1; n > 1; n = n - 1){
		fat = fat * n;	
		printf("fat = %d ", fat);
		printf("n= %d \n", n);
	}
	
	printf("\nFatorial calculado: %d", fat);
	return 0;
}
