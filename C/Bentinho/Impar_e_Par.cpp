#include <stdio.h>
 
int main()
{
	int n1, n2, impares, par;
	
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
			} else {
				par++;	
				printf("%d ", i);
			} 
		}
	}
	
	printf("\nNumeros impares %d", impares);
	printf("\nNumeros par %d", par);
	return 0;
}
