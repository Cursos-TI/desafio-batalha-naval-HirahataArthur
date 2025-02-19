#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[5][5] = {0}; //tabuleiro onde 0 == agua, 5x5
    //simbolo das coordenadas horizontal em cima do tabuleiro

    //coordenadas navio horizontal
    tabuleiro[0][0] = 3;
    tabuleiro[0][1] = 3;
    tabuleiro[0][2] = 3;
    //coordenadas navio vertical
    tabuleiro[2][3] = 3;
    tabuleiro[3][3] = 3;
    tabuleiro[4][3] = 3;

    //tabuleiro impresso
    printf(" TABULEIRO BATALHA NAVAL \n");
    //simbolo das coordenadas horizontal em cima do tabuleiro
    printf("\n  A  B  C  D  E\n");
    //estrutura de repeticao para impressao da matriz de acordo com as coordendas dos navios
     for (int i = 0; i < 5; i++)
    {
       for (int j = 0; j < 5; j++)
       {
        printf(" %d ", tabuleiro[i][j]);
           }
       printf("\n");
       
    }

    printf("COORDENADAS NAVIOS:\n"); //estrutura de repeticao e condicao para identificar posicoes da matriz que tem o numero 3
    //para identificar a posicao como 'navio'
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 3) {
                printf("Navio em (%d, %d)\n", i, j);
            }
        }
    }
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
