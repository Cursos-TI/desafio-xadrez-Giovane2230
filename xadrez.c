#include <stdio.h> //Inclusão de Biblioteca

// Implementação de Movimentação do Bispo
void movBispo(int limite)
{
    if (limite > 0) // Recursividade
    {
        for (int i = 0; i < 5; i++) // Loops Aninhados
        {
            printf("Bispo: Cima\n");
            for (int j = 0; j < 1; j++)
            {
                printf("Bispo: Direita\n");
            }
        }
        movBispo(limite - 1);
    }
}

// Implementação de Movimentação da Torre
void movTorre(int limite)
{
    if (limite > 0)
    {
        printf("Torre: Direita\n");
        movTorre(limite - 1);
    }
}

// Implementação de Movimentação da Rainha
void movRainha(int limite)
{
    if (limite > 0)
    {
        printf("Rainha: Esquerda\n");
        movRainha(limite - 1);
    }
}

// Função Principal
int main()
{

    // Move o Bispo
    movBispo(1);

    // Move a Torre
    movTorre(5);

    // Move a Rainha
    movRainha(8);

    // Implementação de Movimentação do Cavalo
    for (int movCavalo = 0; movCavalo < 3; movCavalo++)
    {
        if (movCavalo < 2) // Loops com Múltiplas Condições
        {
            printf("Cavalo: Cima\n");
            continue; // Pula a iteração se movCavalo for menor que 2
        }
        if (movCavalo > 2) 
            break; // Para o loop se movCavalo for maior que 2
        printf("Cavalo: Direita\n");
    }
    return 0;
}
