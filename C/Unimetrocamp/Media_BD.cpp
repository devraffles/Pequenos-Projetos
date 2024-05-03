#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    char sobrenome[50];
    char aprov_reprov[10];
    float p1;
    float p2;
    float media;
} Alunos;

int main() {
    Alunos a[4];
    int op;
    FILE* arq;

    printf("-------------------------------\n");
    printf("|      Escolha a Opcao        |\n");
    printf("-------------------------------\n");
    printf("|     (1) Inserir Dados       |\n");
    printf("-------------------------------\n");
    printf("|     (2) Gerar Dados         |\n");
    printf("-------------------------------\n");
    printf("\nQual a opcao que vc deseja: ");
    scanf("%d", &op);

    switch (op){
        case 1:
            arq = fopen("alunos.txt", "w+");

            if (arq == NULL) {
                printf("O arquivo alunos.txt nao existe!!!\n");
                return -1;
            }

            for (int i = 0; i < 3; i++) {
                printf("\nNome do Aluno %d: ", i + 1);
                scanf("%s", a[i].nome);

                printf("\nSobrenome do Aluno %d: ", i + 1);
                scanf("%s", a[i].sobrenome);

                do{
                    printf("\nNota P1 do Aluno %d: ", i + 1);
                    scanf("%f", &a[i].p1);
                    if((a[i].p1 < 0) || (a[i].p1 > 10)){
                        printf("\nNota invalida digite novamente!");
                    }
                } while((a[i].p1 < 0) || (a[i].p1 > 10));

                do{
                    printf("\nNota P2 do Aluno %d: ", i + 1);
                    scanf("%f", &a[i].p2);
                    if((a[i].p2 < 0) || (a[i].p2 > 10)){
                        printf("\nNota invalida digite novamente!");
                    }
                } while((a[i].p2 < 0) || (a[i].p2 > 10));

                fprintf(arq, "%s %s %.2f %.2f\n", a[i].nome, a[i].sobrenome, a[i].p1, a[i].p2);
            }

            break;
        case 2:
            arq = fopen("alunos.txt", "r");

            if (arq == NULL) {
                printf("O arquivo alunos.txt nao existe!!!\n");
                return -1;
            }
            printf("------------------------------------------\n");
            printf("|          Tabela Unimetro Alunos        |\n");
            printf("------------------------------------------\n");
            printf("| Nome  | P1 | P2 | Media | Aprov/Reprov |\n");
            printf("------------------------------------------\n");
            for (int i = 0; i < 4; i++){
                fscanf(arq, "%s %s %f %f \n", a[i].nome, a[i].sobrenome, &a[i].p1, &a[i].p2);

                a[i].media = (a[i].p1 + a[i].p2) / 2;

                if (a[i].media >= 6) {
                    strcpy(a[i].aprov_reprov, "Aprovado");
                } else {
                    strcpy(a[i].aprov_reprov, "Reprovado");
                }

                printf("\n| %s %s | %.2f | %.2f | %.2f | %s |",a[i].nome, a[i].sobrenome, a[i].p1, a[i].p2, a[i].media, a[i].aprov_reprov);
            }

            break;
        default:
            printf("Houve um erro na sua opcao!!!");
            break;
    }

    fclose(arq);

    return 0;
}
