//4. Faça um programa em C que escreva todos os números impares entre um 
//intervalo digitado pelo usuário.
#include <stdio.h>
 
int main()
{
	int n1, n2, impares;
	
	printf("Insira o primeiro numero do intervalo: ");
	scanf("%d", &n1);
	
	printf("Insira o segundo numero do intervalo: ");
	scanf("%d", &n2);
	
	if (n1 > n2){
		printf("O Primeiro numero deve ser menor que o segundo!");	
	} else {
		for(int i=n1;i<=n2;i++){
			if (i % 2 != 0){
				impares++;	
				printf("%d ", i);
			}
		}
	}
	
	printf("\nNumeros impares %d", impares);
	return 0;
}
