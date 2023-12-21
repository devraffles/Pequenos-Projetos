#include<stdio.h>
int main(){
	int N, i, contador;
	
	printf("Digite um numero:");
	fflush(stdout);
	scanf("%d",&N);
	fflush(stdin);
	
	for (i = 1; i <= N; i++){
		printf("%d ", i);
	}

	return 0;
}
