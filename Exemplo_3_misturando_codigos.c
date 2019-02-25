//Código em linguagem C
#include <stdio.h>
// Programa 'Lê e imprime um valor'

int main()
{
	system("cls");
	
	int A=0;
	int B=0;
	
	printf("Informe um valor A inteiro: \n");
	
	scanf("%i",&A);	
	
	printf("O valor de A e:%i \n\n", A);	
	
	
	printf("Informe um valor B inteiro: \n");
	
	scanf("%i",&B);	
	
	printf("O valor de B e:%i \n\n", B);
	
			
	if(A>B)
	{
		printf("A e maior que B! \n");
	}
	else
	{
		if(A<B)
		{
			printf("B e maior que A! \n");
		}
		else
		{
			printf("B e igual a A! \n");
		}
	}
	
	return 1;
	
}

