#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[40];
    char produto[40];
    int qtd_Produto;
    float preco;
    float preco_Total;
} Cliente;

Cliente ler_Dados_Cliente() {
    Cliente c;
    
    printf("\nNome do Cliente: ");
    scanf("%s", c.nome);
    
    printf("\nProduto: ");
    scanf("%s", c.produto);

    printf("\nQuantidade de Produto: ");
    scanf("%d", &c.qtd_Produto);

    printf("\nPreco: ");
    scanf("%f", &c.preco);
    
    c.preco_Total = c.preco * c.qtd_Produto;
    
    return c;  
}

Cliente ler_Dados_Produto() {
    Cliente c;
    
    printf("\nProduto: ");
    scanf("%s", c.produto);

    printf("\nQuantidade de Produto: ");
    scanf("%d", &c.qtd_Produto);

    printf("\nPreco: ");
    scanf("%f", &c.preco);
    
    c.preco_Total = c.preco * c.qtd_Produto;
    
    return c;  
}

int main() {
    Cliente c[3];
    int resp;
    
    do {
        c[1] = ler_Dados_Cliente();
        c[2] = ler_Dados_Produto();
        c[3] = ler_Dados_Produto();
        
        printf(" -----------------------------------------------------------\n");
        printf("|                           %s                              |\n", c[1].nome);
        printf(" -----------------------------------------------------------\n");
        printf("| ID |  PRODUTO  |  QTD  |  PRECO UNITARIO  |  PRECO TOTAL  |\n");
        printf(" -----------------------------------------------------------\n");
        printf("| 1 |  %-6s  |  %-4d  |  %-4.2f  |  %-4.2f|\n", c[1].produto, c[1].qtd_Produto, c[1].preco, c[1].preco_Total);
        printf(" -----------------------------------------------------------\n");
        printf(" -----------------------------------------------------------\n");
        printf("| 2 |  %-6s  |  %-4d  |  %-4.2f  |  %-4.2f|\n", c[2].produto, c[2].qtd_Produto, c[2].preco, c[2].preco_Total);
        printf(" -----------------------------------------------------------\n");
        printf(" -----------------------------------------------------------\n");
        printf("| 3 |  %-6s  |  %-4d  |  %-4.2f  |  %-4.2f|\n", c[3].produto, c[3].qtd_Produto, c[3].preco, c[3].preco_Total);
        printf(" -----------------------------------------------------------\n");
        
        printf("\n\nDigite 1 para continuar ou 2 para sair: ");
        scanf("%d", &resp);
        while (getchar() != '\n');
    } while (resp == 1);

    return 0;
}
