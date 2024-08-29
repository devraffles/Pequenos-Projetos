// --- EDCC_EX01SEX ---
// Problema: 
// Biblitecas
#include <stdio.h>

// Protoipos de Funcoes
int ler_Valores(int *x, int x_nome){
    // ... opcao 2: excutar a Funcao uma vez passando os parametros por referencia
    printf("Informe o valor de %c: ", x_nome); 

    scanf(" %d", x);  
}

// Protoipos de Funcoes
int calcular_Soma_Dobro(int *a, int *b, int *c){
    // ... opcao 1: excutar a Funcao uma vez passando os parametros por valor

    *a = (*a * 2);

    *b = (*b * 2);

    *c = (*c * 2);

    return *a + *b + *c;
}

int main() {
	// Declaracade Variavies: a, b, c (inteiros)
	int a = 0;
	int b = 0;
	int c = 0;
	int soma = 0;

	// Funcao: Ler os valores das tres variavies
	ler_Valores(&a, 'a');
	ler_Valores(&b, 'b');
	ler_Valores(&c, 'c');

	// Exibir o valor de cada variaviel e seu endereco de memoria
	printf("Valor da A variavel: %d, Valor do endereco de memoria da variavel A: %d\n\n", a, &a);
	printf("Valor da B variavel: %d, Valor do endereco de memoria da variavel B: %d\n\n", b, &b);
	printf("Valor da C variavel: %d, Valor do endereco de memoria da variavel C: %d\n\n", c, &c);

	// Funcao: Calcular a soma do dobro de cada variaviel retornando a soma
	soma = calcular_Soma_Dobro(&a, &b, &c);

	// Imprimir o valor de cada variaviel atualizado e a soma obtida na Funcao
	printf("variaviel1 (%d) + variaviel2 (%d) + variaviel3 (%d) = %d", a, b, c, soma);


	return 0;
}