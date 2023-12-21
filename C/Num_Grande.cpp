#include <stdio.h>
int main (){
	
	int numero;
	printf("digite o numero:");
	scanf("%d",&numero);
	
	if ( numero < 0 )
	{
		printf("NEGATIVO");	
	} 
	else if ( numero == 0 )
	{
		printf("NULO");
	} 
	else if ( ( numero >= 1 ) && ( numero <= 9 ) )
	{
		printf("UNIDADE");
	}
	else if ( ( numero >= 10 ) && ( numero <= 99 ) )
	{
		printf("DEZENA");
	}
	else if ( ( numero >= 100 ) && ( numero <= 999 ) )
	{
		printf("CENTENA");
	}
	else
	{
		printf("NUMERO GRANDE");
	}
	return 0;
}
