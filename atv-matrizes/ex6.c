#include <stdio.h>

int main()
{
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    int valor, qtdNotas;
    
    printf("Digite o valor: ");
    scanf(" %d", &valor);
    
    printf("O valor pode ser dividido em:\n");
    for (int i = 0; i < 7; i++)
    {
        qtdNotas = valor / notas[i];
        
        if (qtdNotas)
        {
            valor %= notas[i];
            printf("%d nota(s) de %d\n", qtdNotas, notas[i]);
        }
    }
    
    return 0;
}