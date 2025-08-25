#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{

    int movBispo = 0, movTorre = 0, movRainha = 0;
    int movCavalo = 1; // Variáveis dos movimentos de cada peça

    // Implementação de Movimentação do Bispo
    do
    {
        printf("Bispo: Cima, Direita\n");
        movBispo++;
    } while (movBispo < 5);

    // Implementação de Movimentação da Torre
    for (movTorre = 0; movTorre < 5; movTorre++)
    {
        printf("Torre: Direita\n");
    }

    // Implementação de Movimentação da Rainha
    while (movRainha < 8)
    {
        printf("Rainha: Esquerda\n");
        movRainha++;
    }

    // Implementação de Movimentação do Cavalo
    while (movCavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cavalo: Cima\n");
        }
        printf("Cavalo: Direita\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
