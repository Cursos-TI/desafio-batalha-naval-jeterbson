#include <stdio.h>

int main() {
   
    printf("=TABULEIRO DA BATALHA NAVAL=\n\n");

    char linha[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
    int coluna[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int tabuleiro[10][10] = { 0 };
    int i, j;

    // Inserindo um navio horizontal de tamanho 3
    // Linha 2, colunas C, D e E
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;
    tabuleiro[1][4] = 3;

    // Inserindo um navio vertical de tamanho 3
    // Coluna H, linhas 5, 6 e 7
    tabuleiro[4][7] = 3;
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;

 // Linha Orizontal de localização do tabuleiro usando letras.
        printf("   ");
    for (i = 0; i < 10; i++) {
        printf("%2c", linha[i]); }
        printf("\n");

// Coluno Vertical de localização do tabuleiro.
    for (i = 0; i < 10; i++) {
        printf("%2d ", coluna[i]);

// Imprimindo o tabuleiro completo com "0" representando o mar.
    for (j = 0; j < 10; j++) {
        printf("%2d", tabuleiro[i][j]); }
        printf("\n");
    }

    return 0;
}