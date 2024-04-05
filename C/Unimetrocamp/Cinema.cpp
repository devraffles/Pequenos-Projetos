#include <stdio.h>
#include <string.h>


typedef struct{
    char nome[50];
    int idade;
} Cliente;

typedef struct{
    char sala[50];
    char poutrona[3];
} Cinema;

typedef struct{
    char nome[50];
    int etaria[3];
} Filme;

typedef struct{
    char tipo[50];
    float preco;
    Cliente cli;
    Cinema cine;
    Filme movie[4];
} Ticket;

int main() {
    Ticket t;
    
    
    strcpy(t.movie[1].nome, "Homem Aranha");
    strcpy(t.movie[2].nome, "Duna");
    strcpy(t.movie[3].nome, "Maze Runner");
    
    t.movie[1].etaria[1] = 18;
    t.movie[2].etaria[2] = 14;
    t.movie[3].etaria[3] = 12;
    
    int op, i = 0;
    
    
    printf("---------------------------------------\n");
    printf("|         BEM-VINDO CINEJORGES        |\n");
    printf("---------------------------------------\n");
    
    
    printf("\nNome do cliente: ");
    scanf("%s", t.cli.nome);
        
    printf("\nQual a sua idade %s: ", t.cli.nome);
    scanf("%d", &t.cli.idade);
        
    if(t.cli.idade <= 18){
        strcpy(t.tipo, "MEIA");
        t.preco = 5.90;
    } else{
        strcpy(t.tipo, "INTEIRA");
        t.preco = 11.90;
    }
    
    printf(" -------------------------------------------------------------\n");
    printf(" |                         Filmes                            |\n");
    printf(" -------------------------------------------------------------\n");
    printf(" |(3) - %s Facha Etaria (%d anos)                  |\n", t.movie[1].nome, t.movie[1].etaria[1]);
    printf(" -------------------------------------------------------------\n");
    printf(" |(3) - %s Facha Etaria (%d anos)                          |\n", t.movie[2].nome, t.movie[2].etaria[2]);
    printf(" -------------------------------------------------------------\n");
    printf(" |(3) - %s Facha Etaria (%d anos)                   |\n", t.movie[3].nome, t.movie[3].etaria[3]);
    printf(" -------------------------------------------------------------\n");
    printf("\nDigite o filme desejada: ");
    scanf("%d",&op);
    
    switch (op){
        case 1:
            if(t.cli.idade < t.movie[1].etaria[1]){
                printf("Voce nao pode assistir");
            } else{
                printf("O seu ingresso é %s e o preco é %f", t.tipo, t.preco);
            }
            break;
        case 2:
            if(t.cli.idade < t.movie[2].etaria[2]){
                printf("Voce nao pode assistir");
            } else{
                printf("O seu ingresso é %s e o preco é %f", t.tipo, t.preco);
            }
            break;
        case 3:
            if(t.cli.idade < t.movie[3].etaria[3]){
                printf("Voce nao pode assistir");
            } else{
                printf("O seu ingresso é %s e o preco é %f", t.tipo, t.preco);
            }
            break;
        default:
            printf("Voce nao pode assistir nenhum filme");
            break;
    }
    
    return 0;
}
