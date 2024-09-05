#include <stdio.h>
#include <stdlib.h>

int main()
{
	float n[10], produto = 1;
	
	for (int i = 0; i < 10; i++)
	{
	    printf("Digite o %do numero: ", i+1);
	    scanf(" %f", &n[i]);
	    
	    produto *= n[i];
	}
	
	printf("O produto e: %f.\n", produto);
}