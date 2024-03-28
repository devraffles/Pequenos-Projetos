#include <stdio.h>

int ver_Dia (int a){
    printf("\nDigita que dia estamos: ");
    scanf("%d", &a);
    
    switch (a){
        case 1:
            printf("\nDomingo: Folga\n");
            break;
        case 2:
            printf("\nSegunda: Vai Trabalhar\n");
            break;
        case 3:
            printf("\nTerça: Vai Trabalhar\n");
            break;
        case 4:
            printf("\nQuarta: Vai Trabalhar\n");
            break;
        case 5:
            printf("\nQuinta: Vai Trabalhar\n");
            break;
        case 6:
            printf("\nSexta: Vai Trabalhar\n");
            break;
        default:
            printf("\nSabado: Folga\n");
            break;
    }
    
    return a;
}

int main() {
    int dia,resp;
    
    do{
        dia = ver_Dia(dia);
        
        printf("\nDigite 1 para continuar ou 2 para sair: ");
        scanf("%d", &resp);
    }while(resp==1);

    return 0;
}
