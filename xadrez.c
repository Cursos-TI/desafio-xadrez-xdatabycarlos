#include <stdio.h>


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int casas_bispo = 5;
    int casas_torre = 5;
    int casas_rainha = 8;
    int movimento_cavalo = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    for (int i = 1; i <= casas_bispo; i++)
    {
       printf("Cima - "); 
       printf("Direita\n");
    }
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    int i = 1;
    while (i <= casas_torre)
    {
        printf("Direita\n");
        i++;
    }
    

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int i_rainha = 1;
    do
    {
        printf("Esquerda\n");
        i_rainha++;
    } while (i_rainha <= casas_rainha);
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    while (movimento_cavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cima\n");
        }
        
        printf("Direita\n");
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
