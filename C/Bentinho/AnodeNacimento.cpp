#include <stdio.h>
int main (){
	int idade, anonasc, anoatual;
	
	printf("digite o ano atual:");
	fflush(stdout);
	scanf("%d",&anoatual);
	fflush(stdin);
	
	printf("digite o ano de nacimento:");
	fflush(stdout);
	scanf("%d",&anonasc);
	fflush(stdin);
	
	idade = anoatual-anonasc;
	
	if ( (idade >= 0) && (idade <= 12) )  {
		printf("criança");	
	} 
	else if ( (idade >= 13) && (idade <= 17) ) {
		printf("adolecente");
	} 
	else if ( (idade >= 18) && (idade <= 64) ) {
		printf("adulto");
	}
	else if (idade >= 64) {
		printf("idoso");
	}
}
