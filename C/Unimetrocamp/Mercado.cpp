#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float preco;
} Produto;

int main() {
    Produto p[3];
    int op = 0, resp = 0;
    float carrinho;

    strcpy(p[0].nome, "COCA-COLA" );
    strcpy(p[1].nome, "DORITOS" );
    strcpy(p[2].nome, "LIMAO" );

    p[0].preco = 12;
    p[1].preco = 7.5;
    p[2].preco = 3.5;
    
    do{
        printf("\n -------------------------------------------------------------\n");
        printf(" |                   QUITANDA do SEU ZE                      |\n");
        printf(" -------------------------------------------------------------\n\n");
        printf(" -------------------------------------------------------------\n");
        printf(" |                         Produto                           |\n");
        printf(" -------------------------------------------------------------\n");
        printf(" |(1) - %s preco: %g                                  |\n", p[0].nome, p[0].preco);
        printf(" -------------------------------------------------------------\n");
        printf(" |(2) - %s preco: %g                                   |\n", p[1].nome, p[1].preco);
        printf(" -------------------------------------------------------------\n");
        printf(" |(3) - %s preco: %g                                     |\n", p[2].nome, p[2].preco);
        printf(" -------------------------------------------------------------\n");
        printf("\nDigite o produto desejada: ");
        scanf("%d", &op);
        
        if(op >= 1 && op <= 3){
            carrinho += p[op - 1].preco;
        }else{
            printf("Nao e valido!!!");
        }
        
        printf("\nDigite 1 para continuar ou 2 para sair: ");
        scanf("%d", &resp);
        
    }while(resp == 1);
    
    printf("A sua compra deu: R$%.1f", carrinho);

    return 0;
}
