#include <stdio.h>

//Criar um cadastro de aluno, são 3 alunos, aluno vai ter um nome, p1, p2, media

typedef struct{
    char nome[20];
    float p1;
    float p2;
    float media;
}Aluno;

int main (){
    Aluno a[3];
    int i;
    
    for(i = 0; i < 3; i++){
        do{
            printf("\nDigite o aluno %d: ", i + 1);
            scanf("%s", a[i].nome);
                    
            printf("\nDigite sua nota 1 %s: ", a[i].nome);
            scanf("%f", &a[i].p1);
                    
            if ((a[i].p1 < 0) || (a[i].p1 > 10)){
                printf("\nNota 1 nao pode ser menor que 0 ou maior que 10\n");
            }
                    
            printf("\nDigite sua nota 2 %s: ", a[i].nome);
            scanf("%f", &a[i].p2);
                
            if ((a[i].p2 < 0) || (a[i].p2 > 10)){
                printf("\nNota 2 nao pode ser menor que 0 ou maior que 10");
            }
                
            a[i].media = (a[i].p1 + a[i].p2) / 2;  
        }while(((a[i].p1 < 0) || (a[i].p1 > 10)) || ((a[i].p2 < 0) || (a[i].p2 > 10)));
    }
    
    printf("\n----------------------------------------------");
    printf("\n|                    Media                   |");
    printf("\n----------------------------------------------");
    for(i = 0; i < 3; i++){
        printf("\n| Nome: %-5s  | P1: %-5.1f  | P2: %-5.1f  | Media: %-5.1f  |", a[i].nome, a[i].p1, a[i].p2, a[i].media);
        printf("\n----------------------------------------------");
    }
    
    return 0;
}
