#include <stdio.h>

float soma(int a,int b) {
  return (a+b);
}

float subtracao(int a,int b) {
  return (a-b);
}

float multiplicacao(int a,int b) {
  return (a*b);
}

float divisao(int a,int b) {
  return (a/b);
}

float divisao_Resto(int a,int b) {
  return (a%b);
}

int main() {
  float n1,n2,result;
  n1 = 0.0;
  n2 = 0.0;
  int op, resp;
  
    do{
        printf("\n -----------------------------------------------------------\n");
        printf("|                     BEM-VINDO A CALC                      |\n");
        printf(" -----------------------------------------------------------\n");
        
        printf("\nDigite o primeiro numero:");
        scanf("%f", &n1);
          
        printf("\nDigite o segundo numero:");
        scanf("%f", &n2);
          
        printf(" -------------------------------------------------------------\n");
        printf(" |(1) - Soma                                                 |\n");
        printf(" -------------------------------------------------------------\n");
        printf(" |(2) - Subtracao                                            |\n");
        printf(" -------------------------------------------------------------\n");
        printf(" |(3) - Multiplicacao                                        |\n");
        printf(" -------------------------------------------------------------\n");
        printf(" |(4) - Divisao                                              |\n");
        printf(" -------------------------------------------------------------\n");
        printf(" |(5) - Divisao por Resto                                    |\n");
        printf(" -------------------------------------------------------------\n");
        printf("\nDigite o codigo para operacao desejada: ");
        scanf("%d",&op);
          
        switch (op) {
            case 1:
                result = soma(n1, n2);
                printf("\nRESULTADO: VALOR 1: %.1f + VALOR 2: %.1f = %.1f", n1, n2, result);
                break;
            case 2:
                result = subtracao(n1, n2);
                printf("\nRESULTADO: VALOR 1: %.1f - VALOR 2: %.1f = %.1f", n1, n2, result);
                break;
            case 3:
                result = multiplicacao(n1, n2);
                printf("\nRESULTADO: VALOR 1: %.1f * VALOR 2: %.1f = %.1f", n1, n2, result);
                break;
            case 4:
                if( (n2!=0) && (n1!=0) ) {
                    result = divisao(n1, n2);
                    printf("\nRESULTADO: VALOR 1: %.1f / VALOR 2: %.1f = %.1f", n1, n2, result);
                }else {
                    printf("\nOperacao invalida, pois não existe divisao por zero\n");
                }
                break;
            case 5:
                if( (n2!=0) && (n1!=0) ) {
                    result = divisao_Resto(n1, n2);
                    printf("\nRESULTADO: VALOR 1: %.1f / VALOR 2: %.1f = %.1f", n1, n2, result);
                }else {
                    printf("\nOperacao invalida, pois não existe divisao por zero\n");
                }
                break;
                default:
                    printf("\nOperacao invalida!!!\n");
        }
        
        printf("\n\nDigite 1 para continuar ou 2 para sair: ");
        scanf("%d", &resp);
    }while(resp==1);
  return 0;
}
