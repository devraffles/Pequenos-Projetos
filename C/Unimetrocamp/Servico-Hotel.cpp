#include <stdio.h>

typedef struct{
    char nome[50];
    int idade;
    int servico;
    int acoes;
} Cliente;

Cliente fazer_Checkin (){
    Cliente a;
    printf("\nDigita qual seu nome: ");
    scanf("%s", a.nome);
    
    printf("\nDigita qual seu idade: ");
    scanf("%d", &a.idade);
    
    
    printf("\nObrigado pela escolha %s, espero que se divirta.", a.nome);
    
    return a;
}

Cliente chamar_Servico (){
    Cliente b;
    
    printf("\n|------------------------------------------|\n");
    printf("|                  Opcao                   |\n");
    printf("|------------------------------------------|\n");
    printf("|             Cardapio para 1              |\n");
    printf("|------------------------------------------|\n");
    printf("|         Trocar de Quarto para 2          |\n");
    printf("|------------------------------------------|\n");
    
    
    printf("\nDigita que qual tipode servico deseja: ");
    scanf("%d", &b.servico);
    
    switch (b.servico){
        case 1:
            printf("\nCardapio\n");
            break;
        case 2:
            printf("\nTrocar de Quarto\n");
            break;
        default:
            printf("\nObrigado pelo pedido aguarde um pouco que já será realizado\n");
            break;
    }
    
    return b;
}

void fazer_Pedido (){
    printf("\nParaqualquer duvidade ou problema liga para:");
    printf("\n(19) 98935-4957)\n");
}

int main(){
    Cliente c;
    
    printf("\n|------------------------------------------|\n");
    printf("|                Acoes Hotel               |\n");
    printf("|------------------------------------------|\n");
    printf("|            Fazer Checkin para 1          |\n");
    printf("|------------------------------------------|\n");
    printf("|            Chamar Servico para 2         |\n");
    printf("|------------------------------------------|\n");
    printf("|            Fazer Pedido para 3           |\n");
    printf("|------------------------------------------|\n");
    
    printf("\nDigite qual acoes deseja: ");
    scanf("%d", &c.acoes);
        
    switch (c.acoes){
        case 1:
            c = fazer_Checkin();
            break;
        case 2:
            c = chamar_Servico();
            break;
        case 3:
            fazer_Pedido();
            break;
        
    }

    return 0;

}
