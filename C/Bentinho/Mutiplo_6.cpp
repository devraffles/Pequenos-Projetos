#include <stdio.h>
int main () {
	int i, inicio, fim, contador;
	
	printf("Digite o inicio:");
	scanf("%d",& inicio);
	
	printf("Digite o fim:");
	scanf("%d",& fim);
	
	contador = 0;
	
	for (i = inicio; i <= fim; i++){
		if (i % 6 == 0){	
			printf("%d ", i);
			contador++;		
		}
	}
	
	printf("\nMutiplos de 6 e pares do intervalo: %d", contador);
	return 0;
}

