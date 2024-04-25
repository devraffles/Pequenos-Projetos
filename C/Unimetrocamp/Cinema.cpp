#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    char nome[50];
    int idade;
} Cliente;

typedef struct{
    char sala[50];
    int poutrona;
} Cinema;

typedef struct{
    char nome[50];
    int etaria;
} Filme;

typedef struct{
    char tipo[50];
    float preco;
    Cliente cli;
    Cinema cine[4];
    Filme movie[4];
} Ticket;

int main() {
    Ticket t;
    
    strcpy(t.cine[0].sala, "Sala01");
    strcpy(t.cine[1].sala, "Sala02");
    strcpy(t.cine[2].sala, "Sala03");
    
    strcpy(t.movie[0].nome, "Homem Aranha");
    strcpy(t.movie[1].nome, "Duna");
    strcpy(t.movie[2].nome, "Maze Runner");
    
    t.movie[0].etaria = 18;
    t.movie[1].etaria = 14;
    t.movie[2].etaria = 12;
    
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
    printf(" |(1) - %s Facha Etaria (%d anos)                  |\n", t.movie[0].nome, t.movie[0].etaria);
    printf(" -------------------------------------------------------------\n");
    printf(" |(2) - %s Facha Etaria (%d anos)                          |\n", t.movie[1].nome, t.movie[1].etaria);
    printf(" -------------------------------------------------------------\n");
    printf(" |(3) - %s Facha Etaria (%d anos)                   |\n", t.movie[2].nome, t.movie[2].etaria);
    printf(" -------------------------------------------------------------\n");
    printf("\nDigite o filme desejada: ");
    scanf("%d",&op);
    
    switch (op){
        case 1:
            if(t.cli.idade < t.movie[0].etaria){
                printf("Voce nao pode assistir");
            } else{
                printf("O seu ingresso é %s e o preco é %.2f \n", t.tipo, t.preco);
                printf("Temos essas cadeira:\n");
                for (i = 0; i < 5; i++){
                    printf("------\n");
                    printf("| %d | \n", rand() % 100);
                    printf("------\n");
                }
                printf("\nQual cadeira voce deseja: ");
                scanf("%d", &t.cine[0].poutrona);
                
                printf("\n%s sua sala e %s na poutrona %d", t.cli.nome, t.cine[0].sala, t.cine[0].poutrona);
            }
            break;
        case 2:
            if(t.cli.idade < t.movie[1].etaria){
                printf("Voce nao pode assistir");
            } else{
                printf("O seu ingresso é %s e o preco é %.2f \n", t.tipo, t.preco);
                printf("Temos essas cadeira:\n");
                for (i = 0; i < 5; i++){
                    printf("------\n");
                    printf("| %d | \n", rand() % 100);
                    printf("------\n");
                }
                printf("\nQual cadeira voce deseja: ");
                scanf("%d", &t.cine[1].poutrona);
                
                printf("\n%s sua sala e %s na poutrona %d", t.cli.nome, t.cine[1].sala, t.cine[1].poutrona);
            }
            break;
        case 3:
            if(t.cli.idade < t.movie[2].etaria){
                printf("Voce nao pode assistir");
            } else{
                printf("O seu ingresso é %s e o preco é %.2f \n", t.tipo, t.preco);
                printf("Temos essas cadeira:\n");
                for (i = 0; i < 5; i++){
                    printf("------\n");
                    printf("| %d | \n", rand() % 100);
                    printf("------\n");
                }
                printf("\nQual cadeira voce deseja: ");
                scanf("%d", &t.cine[2].poutrona);
                
                printf("\n%s sua sala e %s na poutrona %d", t.cli.nome, t.cine[2].sala, t.cine[2].poutrona);
            }
            break;
        default:
            printf("Voce nao pode assistir nenhum filme");
            break;
    }
    
    
    return 0;
}
