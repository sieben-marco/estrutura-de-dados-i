#include <stdio.h>

int main()
{
    int m[3][3];
    int somaTotal = 0, somaLinha = 0, maior, menor, multDiagonal = 1;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o valor da linha %d | coluna %d: ", i, j);
            scanf(" %d", &m[i][j]);
            
            somaTotal += m[i][j];
            
            if (!i) // se i for 0
            {
                somaLinha += m[0][j];
            }
            
            if (!i && !j) // se i e j forem 0
            {
                maior = m[0][0];
            }
            else if (maior < m[i][j])
            {
                maior = m[i][j];
            }
            
            if (!i && !j) // se i e j forem 0
            {
                menor = m[0][0];
            }
            else if (menor > m[i][j])
            {
                menor = m[i][j];
            }
            
            if (i == j)
            {
                multDiagonal *= m[i][j];
            }
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("| %d ", m[i][j]);
        }
        
        printf("|\n");
    }
    
    printf("O maior numero e %d\n", maior);
    printf("O menor numero e %d\n", menor);
    printf("A media e %f\n", somaTotal/(3.0*3.0));
    printf("A soma da primeira linha e %d\n", somaLinha);
    printf("O produto da diagonal principal e %d\n", multDiagonal);
    
    return 0;
}