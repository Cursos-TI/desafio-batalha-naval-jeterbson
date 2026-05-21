#include <stdio.h>

int main() {
   
    printf("=TABULEIRO DA BATALHA NAVAL=\n\n");

    char linha[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
    int coluna[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int tabuleiro[10][10] = { 0 };
    int i, j;

 // Inserindo um navio horizontal de tamanho 3
 // Linha 2, colunas C, D e E
    tabuleiro[0][3] = 3;
    tabuleiro[0][4] = 3;
    tabuleiro[0][5] = 3;

 // Inserindo um navio vertical de tamanho 3
 // Coluna H, linhas 5, 6 e 7
    tabuleiro[4][9] = 3;
    tabuleiro[5][9] = 3;
    tabuleiro[6][9] = 3;

 //inserindo navio na diagonal da esquerda para a direita
 // linha 2, 3 e 4, colunas A, B e C
    tabuleiro[0][0] = 1;
    tabuleiro[1][1] = 1;
    tabuleiro[2][2] = 1;

 //inserindo navio na diagonal da direita para a esquerda
 // linha 0, 1 e 2, colunas J, I e H
    tabuleiro[0][9] = 1;
    tabuleiro[1][8] = 1;
    tabuleiro[2][7] = 1;

 // Inserindo habilidade em cone
 // linha 7, 8 e 9, coluna A, B, C e D
    tabuleiro[7][2] = 3;
    tabuleiro[8][1] = 3;
    tabuleiro[8][2] = 3;
    tabuleiro[8][3] = 3;
    tabuleiro[9][0] = 3;
    tabuleiro[9][1] = 3;
    tabuleiro[9][2] = 3;
    tabuleiro[9][3] = 3;
    tabuleiro[9][4] = 3;

 //Inserindo habilidade em cruz
 // linha 3, 4 e 5, coluna C, D, F e G
    tabuleiro[4][2] = 3;
    tabuleiro[4][3] = 3;
    tabuleiro[4][4] = 3;
    tabuleiro[4][5] = 3;
    tabuleiro[4][6] = 3;
    tabuleiro[3][4] = 3;
    tabuleiro[5][4] = 3;

 // Inserindo havilidade em octaedro
 // Linha 7, 8 e 9 coluna G, H e I
    tabuleiro[9][7] = 3;
    tabuleiro[8][6] = 3;
    tabuleiro[8][7] = 3;
    tabuleiro[8][8] = 3;
    tabuleiro[7][7] = 3;
    
 // Linha Orizontal de localização do tabuleiro usando letras
        printf("   ");
    for (i = 0; i < 10; i++) {
        printf("%2c", linha[i]); }
        printf("\n");

 // Coluno Vertical de localização do tabuleiro
    for (i = 0; i < 10; i++) {
        printf("%2d ", coluna[i]);

 // Imprimindo o tabuleiro completo com "0" representando o mar
    for (j = 0; j < 10; j++) {
        printf("%2d", tabuleiro[i][j]); }
        printf("\n");
    }

    return 0;
}