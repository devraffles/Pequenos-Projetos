#include <stdio.h>

typedef struct{
char nome[40];
int idade;
float valor_prod;
} Cliente;

int main (){
	Cliente c;
	
	printf("Digite o idade: ");
	fflush(stdout);
	scanf("%d", &c.idade);
	fflush(stdin);
	
	printf("Digite o nome: ");
	fflush(stdout);
	gets(c.nome);
	fflush(stdin);
	
	printf("Digite o valor: ");
	fflush(stdout);
	scanf("%f", &c.valor_prod);
	fflush(stdin);
	
	printf("%d\n",c.idade);
	printf("%s\n",c.nome);
	printf("%f",c.valor_prod);
	fflush(stdin);
}
