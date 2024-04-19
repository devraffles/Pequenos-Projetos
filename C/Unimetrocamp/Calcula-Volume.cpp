/****************************************************************************

Faça um progrma em C que calcule todos os volumes 
(Prismas, Cilindro, Cone)


Fórmula para calcular o volume do Prisma:

    V = Ab * h

Fórmula para calcular o volume da Pirâmide:

    V = (Ab * h)/3

Fórmula para calcular o volume de um Cilindro:

    V = p * r^2 * h

Fórmula para calcular o volume de um Cone:

    V = (p * r^2 * h)/3

Fórmula para calcular o volume da Esfera:

    V = (4 * p * r^3 * h)/3
    
    
Qual quer duvida das formulas segue o link:

https://brasilescola.uol.com.br/matematica/volume-de-solidos-geometricos.htm

****************************************************************************/

#include <stdio.h>
#include <math.h>

#define p 3.14

float volume_Prisma(){
    float ab;
    float h;
    
    printf("Digite o valor da Area da Base: ");
    fflush(stdout);
    scanf("%f", &ab);
    fflush(stdin);
    
    printf("Digite o valor da Altura: ");
    fflush(stdout);
    scanf("%f", &h);
    fflush(stdin);
    
    float Volume = ab * h;
    
    printf("\nO seu Volume é %.f", Volume);
    
	return Volume;
}

float volume_Piramide (){
    float ab;
    float h;
    
    printf("Digite o valor da Area da Base: ");
    fflush(stdout);
    scanf("%f", &ab);
    fflush(stdin);
    
    printf("Digite o valor da Altura: ");
    fflush(stdout);
    scanf("%f", &h);
    fflush(stdin);
    
    float Volume = (ab * h)/3;
    
    printf("\nO seu Volume é %.f", Volume);
    
	return Volume;
}

float volume_Cilindro (){
    double r;
    double h;
    
    printf("Digite o valor da Raio: ");
    fflush(stdout);
    scanf("%lf", &r);
    fflush(stdin);
    
    printf("Digite o valor da Altura: ");
    fflush(stdout);
    scanf("%lf", &h);
    fflush(stdin);
    
    double Volume = p * pow(r, 2) * h;
    
    printf("\nO seu Volume é %.f", Volume);
    
	return Volume;
}

float volume_Cone (){
    double r;
    double h;
    
    printf("Digite o valor da Raio: ");
    fflush(stdout);
    scanf("%lf", &r);
    fflush(stdin);
    
    printf("Digite o valor da Altura: ");
    fflush(stdout);
    scanf("%lf", &h);
    fflush(stdin);
    
    double Volume = (p * pow(r, 2) * h)/3;
    
    printf("\nO seu Volume é %.f", Volume);
    
	return Volume;
}

float volume_Esfera (){
    double r;
    double h;
    
    printf("Digite o valor da Raio: ");
    fflush(stdout);
    scanf("%lf", &r);
    fflush(stdin);
    
    printf("Digite o valor da Altura: ");
    fflush(stdout);
    scanf("%lf", &h);
    fflush(stdin);
    
    double Volume = (4 * p * pow(r, 3) * h)/3;
    
    printf("\nO seu Volume é %.f", Volume);
    
	return Volume;
}

int escolha_Volume (){
    int volume_Num;
    
    printf("1. Volume Prisma\n");
    printf("2. Volume Piramide\n");
    printf("3. Volume Cilindro\n");
    printf("4. Volume Cone\n");
    printf("5. Volume Esfera\n");
    
    printf("\nDigite qual volume deseja calcular: ");
    fflush(stdout);
    scanf("%d", &volume_Num);
    fflush(stdin);
    
    return volume_Num;
}

int main(){
    int qual_Volume, resp;
    
    do{
        qual_Volume = escolha_Volume();
            
        if(qual_Volume < 0 || qual_Volume > 5){
            printf("Não há essa opção, escolha novamente!\n\n");
            qual_Volume = escolha_Volume();
        }
        else if(qual_Volume == 1){
            volume_Prisma();
        }
        else if(qual_Volume == 2){
            volume_Piramide();
        }
        else if (qual_Volume == 3){
            volume_Cilindro();
        }
        else if(qual_Volume == 4){
            volume_Cone();
        }
        else if(qual_Volume == 5){
            volume_Esfera();
        }
        
        printf("\nDigite 1 para continuar ou 2 para sair: ");
        scanf("%d", &resp);
    }while(resp==1);
    
    return 0;
}
