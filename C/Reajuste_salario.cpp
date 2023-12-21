//"	Salário de 0.01 até R$ 2.999,00 reajuste de 7.5%;
//"	Salário de R$ 3.000,00 até R$ 4.999,00 reajuste de 6.0%;
//"	Salário maiores que R$ 5.000,00 reajuste de 2.5%;

#include<stdio.h>
int main(){
	float salario;
	
	printf("Digite o salario: ");
	scanf("%f",&salario);
	
	if ( (salario > 0.01) && (salario <= 2999.0) ){
		salario = salario + (salario * (7.5/100));
		
	} else if ( (salario > 3000.0) && (salario <= 4999.0) ){
		salario = salario + (salario * (6/100));

	} else if ( salario > 5000.0 ){
		salario = salario + (salario * (2.5/100));

	}
	
	printf("Salario reajustado %.2f",salario);
	return 0;
}
