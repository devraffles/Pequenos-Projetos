#include <stdio.h>

int main (){
	float imc, peso, altura;
	
	printf("digite o seu peso:");
	scanf("%f",&peso);
	
	printf("digite a sua altura:");
	scanf("%f",&altura);
	
	imc = peso / altura * altura;
	
	if (imc < 18.5){
		printf("Abaixo do peso");
	}
	else if ((imc >= 18.5) && (imc <= 24.9)){
		printf("Peso normal");
	}
	else if ((imc >= 25) && (imc <= 29.9)){
		printf("Sobrepeso");
	}
	else if ((imc >= 30) && (imc <= 34,9)){
		printf("Obesidade grau 1");
	}
	else if ((imc >= 35) && (imc <= 39.9)){
		printf("Obesidade grau 2");
	}
	else {
		printf("Obesidade grau 3");
	}
}
