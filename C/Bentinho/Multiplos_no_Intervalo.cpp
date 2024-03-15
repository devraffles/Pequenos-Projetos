#include <stdio.h>
int main(){
	int numero, i, contador;
	
	printf("Digite um numero:");
	scanf("%d",&numero);
	
	//for (i = 10; i < 100; i++){
	i=10;
	while (i < 100){
		if ((i % numero) == 0){
			contador++;
		}
		i++;
	}
	
	printf("Existem %d multiplos no intervalo", contador);
	
	return 0;
}
