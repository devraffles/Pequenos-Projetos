#include <stdio.h>
#include <string.h>


typedef struct{
    char nome[50];
    int idade;
} Cliente;

typedef struct{
    char sala[50];
    char poutrona[3]
} Cinema;

typedef struct{
    char tipo[50];
    float preco;
    Cliente cli;
    Cinema cine;
    char nome_Filme[50];
    
} Ticket;

int main() {
    Cinema c;
    Ticket t;
    
    int op, i = 0;
    
    printf("---------------------------------------\n");
    printf("|         BEM-VINDO CINEJORGES        |\n");
    printf("---------------------------------------\n");
    
    for(i = 0; i <=3; i++){
        printf("\nNome do cliente: ");
        scanf("%s", c.sala.cliente[i].nome);
        
        printf("\nQual a sua idade %s: ", c.nome);
        scanf("%d", &c.sala.cliente[i].idade);
        
        if(c.sala.cliente[i].idade <= 18){
            strcpy(t.tipo, "MEIA");
            t.preco = 5.90;
        } else{
            strcpy(t.tipo, "INTEIRA");
            t.preco = 11.90;
        }
    }
    
    printf(" -------------------------------------------------------------\n");
    printf(" |                         Filmes                            |\n");
    printf(" -------------------------------------------------------------\n");
    printf(" |(1) - Homem Aranha Facha Etaria (18 anos)                  |\n");
    printf(" -------------------------------------------------------------\n");
    printf(" |(2) - Duna  Facha Etaria (14 anos)                         |\n");
    printf(" -------------------------------------------------------------\n");
    printf(" |(3) - Maze Runner Facha Etaria (12 anos)                   |\n");
    printf(" -------------------------------------------------------------\n");
    printf("\nDigite o filme desejada: ");
    scanf("%d",&op);
    
    switch (op){
        case 1:
            if(c.idade < 18){
                printf("Voce nao pode assistir");
            } else{
                printf("O preco desse ingresso é %s", t.tipo);
            }
            break;
        case 2:
            if(c.idade < 14){
                printf("Voce nao pode assistir");
            } else{
                printf("O preco desse ingresso é %s", t.tipo);
            }
            break;
        case 3:
            if(c.idade < 14){
                printf("Voce nao pode assistir");
            } else{
                printf("O preco desse ingresso é %s", t.tipo);
            }
            break;
        default:
            printf("Voce nao pode assistir nenhum filme");
            break;
    }
    
    return 0;
}
