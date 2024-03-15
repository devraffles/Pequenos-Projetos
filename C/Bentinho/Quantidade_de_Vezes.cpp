#include<stdio.h>

int main(){
	int numero, i;
	char frase[100];
	
	printf("Digite um numero de vezes: ");
	scanf("%d",&numero);
	
	printf("Insira o texto (max 100 letras): ");
	scanf("%s",&frase);
	
	for (i = 0; i <= numero; i++){
		printf("%s \n", frase);
	}
	
	return 0;
}
