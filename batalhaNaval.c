#include <stdio.h>

int main() {
    // Tamanho do tabuleiro
// Tamanho do navio
// Valor representando água
// Valor representando o navio
// Declaração do tabuleiro 10x10
// Inicializa o tabuleiro com água (0)
// Coordenadas iniciais dos navios (posição fixa no código)
//Ver se o navio cabe no tabuleiro
//incluir o navio vertica e depois o horizontal
//imprimir o jogo na tela

int i, j;
int tamanhoTabuleiro = 10;
int valorAgua = 0;

int valorNavio = 3;

int tabuleiro[10][10];
for(i = 0; i < tamanhoTabuleiro; i++) {
    for(j = 0; j < tamanhoTabuleiro; j++) {
        tabuleiro[i][j] = valorAgua;
    }
}

int NavioHorizontal[3] = {valorNavio, valorNavio, valorNavio};
int NavioVertical[3] = {valorNavio, valorNavio, valorNavio};
int NavioHorizontal1[3] = {valorNavio, valorNavio, valorNavio};
int NavioHorizontal2[3] = {valorNavio, valorNavio, valorNavio};

int linhaHorizontal = 1;//Y
int colunaHorizontal = 2;//x

int linhaVertical = 5;//Y
int colunaVertical = 7;//X

int linhaHorizontal1 = 4;//Y
int colunaHorizontal1 = 4;//X

int linhaHorizontal2 = 6;//Y
int colunaHorizontal2 = 2;//X




if(colunaHorizontal + valorNavio <= tamanhoTabuleiro &&
    linhaVertical + valorNavio <= tamanhoTabuleiro &&
    linhaHorizontal1 + valorNavio <= tamanhoTabuleiro &&
    colunaHorizontal1 + valorNavio <= tamanhoTabuleiro &&
    linhaHorizontal2 + valorNavio <= tamanhoTabuleiro &&
    colunaHorizontal2 + valorNavio <= tamanhoTabuleiro) {

        for(i = 0; i < valorNavio; i++){
        tabuleiro[linhaHorizontal + i][colunaHorizontal] = NavioHorizontal[i];
        }

        for(i = 0; i < valorNavio; i++) {
        tabuleiro[linhaVertical][colunaVertical + i] = NavioVertical[i];//declara parte do navio de acordo com a linha que é 10x10 e a coluna 10x10
        }

        for(i = 0; i < valorNavio; i++) {
            tabuleiro[linhaHorizontal1 - i][colunaHorizontal1 + i] = NavioHorizontal1[i];//declara parte do navio de acordo com a linha que é 10x10 e a coluna 10x10
            }

            for(i = 0; i < valorNavio; i++) {
                tabuleiro[linhaHorizontal2 + i][colunaHorizontal2 + i] = NavioHorizontal2[i];//declara parte do navio de acordo com a linha que é 10x10 e a coluna 10x10
                }
    




        printf("Tabuleiro\n");
        for(i = 0; i < tamanhoTabuleiro; i++) {
            for(j = 0; j < tamanhoTabuleiro; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        } 

    }else {
        printf("Navio esta fora do tabuleiro!\n");
    }



    




 

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso

}