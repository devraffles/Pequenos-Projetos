#include<stdio.h>
#define LIN 2
#define COL 2

int main(){
	float m_a[LIN][COL], m_b[LIN][COL], m_c[LIN][COL];
	int i, j;

	printf("Digitar valores para primeira matriz: \n");
	fflush(stdout);
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			printf("Digite m_a[%d][%d]: ", i, j);
			fflush(stdout);
			scanf("%f", &m_a[i][j]);
			fflush(stdin);
		}
	}

	printf("Digitar valores para segunda matriz: \n");
	fflush(stdout);
	
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			printf("Digite m_b[%d][%d]: ", i, j);
			fflush(stdout);
			scanf("%f", &m_b[i][j]);
			fflush(stdin);
		}
	}
	
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			m_c[i][j]= m_a[i][j] - m_b[i][j];
		}
	}
	
	for(i = 0; i < LIN; i++){
		for(j = 0; j< COL; j++){
			printf("%.2f ", m_c[i][j]);
		}
		printf("\n");
	}

	fflush(stdout);
	
	return 0;		
}

