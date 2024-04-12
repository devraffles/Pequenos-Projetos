#include <stdio.h>

typedef struct {
    char modelo[50];
    int portas;
} Carros;

int main() {
    Carros c[3];
    int i;
    i = 0;
    
    while (i < 3){
        printf("\nDigite qual o modelo do seu carro: ");
        scanf("%s", c[i].modelo);
        
        printf("\nDigite qual a quantidade de portas no seu carro: ");
        scanf("%d", &c[i].portas);
        
        i++;
    }
    
    printf("\n -------------------------------------------------------------\n");
    printf(" |                         Carros                           |\n");
    printf(" -------------------------------------------------------------\n");
    
    for(i = 0; i < 3; i++){
        printf(" |[%d] - MODELO: %s possui: %d portas |\n", i+1,c[i].modelo, c[i].portas);
        printf(" -------------------------------------------------------------\n");
        
    }
    
    return 0;
}
