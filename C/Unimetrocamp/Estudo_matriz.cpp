#include <stdio.h>

int main() {
    int m[3][3];
    
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            m[i][j] = 0;
            
            printf("Digite o valor repectivo da linha [%d] e da coluna [%d]: ", i, j);
            scanf("%d", &m[i][j]);
            
            if(i == j){
                m[i][j] = 10;
            }
        }
    }
    
    printf("\n------------------\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("[ %d ]", m[i][j]);
        }
        printf("\n");
    }
    printf("------------------");

    return 0;
}
