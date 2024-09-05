#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n[10], soma = 0;
	
	for(int i = 0; i < 10; i++)
	{
	    printf("Digite o %do numero: ", i+1);
	    scanf(" %d", &n[i]);
	    
	    soma += n[i];
	}
	
	printf("A soma e: %d.\n", soma);
}