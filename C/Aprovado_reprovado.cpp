#include <stdio.h>
int main (){	
	float media, frequencia;
	
	printf("digite a media final:");
	fflush(stdout);
	scanf("%f",&media);
	fflush(stdin);

	printf("digite a frequencia final:");
	fflush(stdout);
	scanf("%f",&frequencia);
	fflush(stdin);
	
	
	if ( (media >= 7.0) && (frequencia >= 75.0) ){
		printf("ALUNO APROVADO");	
	} else {
		printf("ALUNO REPROVADO");
	}
	
	return 0;
}
