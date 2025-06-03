#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
#define TAMANHO_TABULEIRO 5
#define TAMANHO_NAVIO 3
#define VALOR_AGUA 0
#define VALOR_NAVIO 3

int main() {
    // -------------------------------
    // Declaração e inicialização do tabuleiro
    // -------------------------------
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializa todas as posições do tabuleiro com 0 (água)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = VALOR_AGUA;
        }
    }

    // -------------------------------
    // Declaração dos navios como vetores unidimensionais
    // -------------------------------
    int navio_horizontal[TAMANHO_NAVIO] = {VALOR_NAVIO, VALOR_NAVIO, VALOR_NAVIO};
    int navio_vertical[TAMANHO_NAVIO] = {VALOR_NAVIO, VALOR_NAVIO, VALOR_NAVIO};

    // -------------------------------
    // Coordenadas iniciais dos navios
    // -------------------------------
    int linha_navio_horizontal = 1;  // Linha do navio horizontal
    int coluna_navio_horizontal = 0; // Coluna inicial

    int linha_navio_vertical = 2;    // Linha inicial do navio vertical
    int coluna_navio_vertical = 3;   // Coluna do navio vertical

    // -------------------------------
    // Validação simples: garantir que os navios cabem no tabuleiro
    // -------------------------------
    if (coluna_navio_horizontal + TAMANHO_NAVIO <= TAMANHO_TABULEIRO &&
        linha_navio_vertical + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {

        // -------------------------------
        // Posicionamento do navio horizontal no tabuleiro
        // -------------------------------
        printf("Coordenadas do navio horizontal:\n");
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha_navio_horizontal][coluna_navio_horizontal + i] = navio_horizontal[i];
            printf("(%d, %d)\n", linha_navio_horizontal, coluna_navio_horizontal + i);
        }

        // -------------------------------
        // Posicionamento do navio vertical no tabuleiro
        // -------------------------------
        printf("Coordenadas do navio vertical:\n");
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha_navio_vertical + i][coluna_navio_vertical] = navio_vertical[i];
            printf("(%d, %d)\n", linha_navio_vertical + i, coluna_navio_vertical);
        }

        // -------------------------------
        // Exibição do tabuleiro
        // -------------------------------
        printf("\nTabuleiro Batalha Naval:\n");
        for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
            for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
                printf("%d ", tabuleiro[i][j]); // Exibe cada elemento com espaço
            }
            printf("\n"); // Quebra de linha
        }

    } else {
        // Caso as coordenadas não sejam válidas
        printf("Erro: Coordenadas inválidas. O navio não cabe no tabuleiro.\n");
    }

    return 0; 
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
