#include <stdio.h>


int main() {
    // Nível Novato - Movimentação das Peças
   

    int casas_bispo = 5;
    int casas_torre = 5;
    int casas_rainha = 8;

    // Implementação de Movimentação do Bispo
    
    for (int i = 1; i <= casas_bispo; i++)
    {
       printf("Cima - "); 
       printf("Direita\n");
    }
    

    // Implementação de Movimentação da Torre
    
    int i = 1;
    while (i <= casas_torre)
    {
        printf("Direita\n");
        i++;
    }
    

    // Implementação de Movimentação da Rainha
   
    int i_rainha = 1;
    do
    {
        printf("Esquerda\n");
        i_rainha++;
    } while (i_rainha <= casas_rainha);
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
