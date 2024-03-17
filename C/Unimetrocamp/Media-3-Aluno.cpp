/***********************************************************************************************
Ao executar o programa, o terminal terá que pedir:
 
Nome do Aluno 1: 
Nota P1
Nota P2
 
Nome do Aluno 2:
Nota P1
Nota P2
 
Nome do Aluno 3:
Nota P1
Nota P2
 
Após a inserção de todos os dados pelo usuário, 
o programa irá mostrar na tela uma tabela contendo as seguintes colunas:
 
"ID do aluno": Neste caso seria "1", "2" ou "3"
Nome
Nota P1
Nota P2
Média
Aprovado: Contendo o valor "SIM" ou "NÃO"
 
 
Façam a tabela exibir as linhas e colunas, mas não se preocupem se o layout não ficar perfeito.
 
Email: nycholas.maia@professores.unimetrocamp.edu.br
***********************************************************************************************/
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[40];
    float p1;
    float p2;
    float media;
    char aprov_reprov[4]; // Adicionando espaço para o caractere nulo
} Aluno;

Aluno ler_Dados_Aluno(int iCount) {
    Aluno a;
    
    printf("\nNome do Aluno %d: ", iCount);
    scanf("%39s", a.nome); // Limitando o número de caracteres lidos
    
    do{
        printf("\nNota P1: ");
        scanf("%f", &a.p1);
        if((a.p1 < 0) || (a.p1 > 10)){
            printf("\nNota invalida digite novamente!");
        }
    } while((a.p1 < 0) || (a.p1 > 10));
    
    do{
        printf("\nNota P2: ");
        scanf("%f", &a.p2);
        
        if ((a.p2 < 0) || (a.p2 > 10)){
           printf("\nNota invalida digite novamente!"); 
        }
    } while((a.p2 < 0) || (a.p2 > 10));
    
    a.media = (a.p1 + a.p2) / 2;
    
    if (a.media >= 6) {
        strcpy(a.aprov_reprov, "SIM");
    } else {
        strcpy(a.aprov_reprov, "NAO");
    }
    
    return a;  
}

int main() {
    Aluno a[3];
    int resp;
    int i;
    
    do {
        for (i = 0; i < 3; i++) { // Corrigindo os índices do array
            a[i] = ler_Dados_Aluno(i + 1);
        }
        
        
        printf(" ________________________________________________\n");
        printf("|                   TABELA                       |\n");
        printf(" ________________________________________________\n");
        printf("| # |  NOME  |  P1  |  P2  |  MEDIA |  Aprovado  |\n");
        printf(" ________________________________________________\n");
        for (i = 0; i < 3; i++) { // Corrigindo os índices do array
            printf("| %d |  %-6s  |  %-4.1f  |  %-4.1f  |  %-4.2f  |  %-4s|\n", i+1, a[i].nome, a[i].p1, a[i].p2, a[i].media, a[i].aprov_reprov);
            printf(" ________________________________________________\n");    
        }
        
        printf("\n\nDigite 1 para continuar ou 2 para sair: ");
        scanf("%d", &resp);
        while (getchar() != '\n'); // Limpar o buffer de entrada
    } while (resp == 1);

    return 0;
}