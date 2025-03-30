#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    char letras[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Declaração dos navios
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};
    int navioDiagonal1[3] = {3, 3, 3};
    int navioDiagonal2[3] = {3, 3, 3};




    // Posicionamento dos navios no tabuleiro
    int coordenadaNavioHorizontalLinha = 2;    //navio 1
    int coordenadaNavioHorizontalColuna = 4;

    int coordenadaNavioVerticalLinha = 6;     //navio2
    int coordenadaNavioVerticalColuna = 2;

    int coordenadaNavioDiagonal1Linha = 1; //navio3
    int coordenadaNavioDiagonal1Coluna = 1;
   
    int coordenadaNavioDiagonal2Linha = 8; //navio4
    int coordenadaNavioDiagonal2Coluna = 8;



    // Verificação se os navios se sobreponham
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[coordenadaNavioHorizontalLinha][coordenadaNavioHorizontalColuna + i] != 0 ||
            tabuleiro[coordenadaNavioVerticalLinha + i][coordenadaNavioVerticalColuna] != 0 ||
            tabuleiro[coordenadaNavioDiagonal1Linha + i][coordenadaNavioDiagonal1Coluna + i] != 0 ||
            tabuleiro[coordenadaNavioDiagonal2Linha - i][coordenadaNavioDiagonal2Coluna - i] != 0) {
            printf("Os navios se sobreponham\n");
            return 1;
            }  
        }
            
            
               

    // Posicionamento dos navios no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[coordenadaNavioHorizontalLinha][coordenadaNavioHorizontalColuna + i] = navioHorizontal[i];
        tabuleiro[coordenadaNavioVerticalLinha + i][coordenadaNavioVerticalColuna] = navioVertical[i];
        tabuleiro[coordenadaNavioDiagonal1Linha + i][coordenadaNavioDiagonal1Coluna + i] = navioDiagonal1[i];
        tabuleiro[coordenadaNavioDiagonal2Linha - i][coordenadaNavioDiagonal2Coluna - i] = navioDiagonal2[i];
    }
    

    // Exibição do Tabuleiro
    printf("**Tabuleiro Batalha Naval**\n");
    printf(" ");
    for (int j = 0; j < 10; j++) {
        printf("%d ", j + 1);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%c ", letras[i]);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    return 0;

}