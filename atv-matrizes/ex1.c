#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num[10];
	
	for (int i = 0; i < 10; i++)
	{
	    printf("Digite o %do numero: ", i+1);
	    scanf(" %d", &num[i]);
	}
	
	for (int i = 0; i < 10; i++)
	{
	    printf("num[%d] = %d\n", i, num[i]);
	}
	
	for (int i = 9; i >= 0; i--)
	{
	    printf("num[%d] = %d\n", i, num[i]);
	}
}