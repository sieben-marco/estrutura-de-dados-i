#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n[10];
	char c[10];
	
	for (int i = 0; i < 10; i++)
	{
	    n[i] = 1+i;
	    c[i] = 97+i;
	    
	    printf("%d", n[i]);
	    printf("%c", c[i]);
	}
	
	printf("\n");
}