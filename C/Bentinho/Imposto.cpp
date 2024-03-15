#include <stdio.h>
int main (){
	float salario, imposto;
	
	printf("Digite seu salario:");
	scanf("%f", &salario);
	
	if (salario <= 1903.98){
		printf("Nao tem desconto!");
    }
	else if ((salario > 1903.98) && (salario <= 2826.65)){
		imposto = salario * (7.5/100);
		printf("O desconto e: 7.5%\n");
		printf("valor do imposto:%.2f",imposto);	
	}
	else if ((salario > 2826.66) && (salario <= 3751.05)){
		imposto = salario * (15/100);
		printf("O desconto e: 15%\n");
		printf("valor do imposto:%.2f",imposto);	
	}
	else if ((salario > 3751.06) && (salario <= 4664.68)){
		imposto = salario * (22.5/100);
		printf("O desconto e: 22.5%\n");
		printf("valor do imposto:%.2f",imposto);
	}
	else {
		imposto = salario * (27.5/100);
		printf("O desconto e: 27.5%\n");
		printf("valor do imposto:%.2f",imposto);
	} 
	return 0;	
} 
