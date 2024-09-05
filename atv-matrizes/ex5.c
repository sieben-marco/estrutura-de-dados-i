#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n[10], soma = 0, qtdA = 0, qtdR = 0;
	
	for (int i = 0; i < 10; i++)
	{
	    printf("Digite a %da nota: ", i+1);
	    scanf(" %d", &n[i]);
	    
	    soma += n[i];
	    
	    if (n[i] == 7)
	        qtdA++;
        
        if (n[i] < 7)
            qtdR++;
	}
	
	printf("A media e: %d.\n", soma/10);
	printf("%d aluno(s) aprovado(s) com media 7\n", qtdA);
	printf("%d aluno(s) reprovados(s)\n", qtdR);
}