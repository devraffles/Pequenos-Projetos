#include <stdio.h>
#include <string.h>

typedef struct{
    char tipo[50];
    float preco;
} Ticket;

typedef struct{
    int tempo;
} Horario;

typedef struct{
    char nome[50];
    char genero[50];
    char introducao[50];
    Horario tempo_Filme;
} Filme;

typedef struct{
    char nome[50];
    int idade;
    char assento[3];
    Filme escolha[3];
} Cliente;

typedef struct{
    Filme filme;
    Cliente cliente[3];
} Sala;

typedef struct{
    Sala sala[3];
} Cinema;

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
