#include <stdio.h>

// Função recursiva para simular o movimento da Torre
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para simular o movimento da Rainha
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Função auxiliar com loops aninhados dentro da recursão do Bispo
void moverBispo(int vertical, int horizontalMax) {
    if (vertical == 0) return;
    for (int h = 0; h < horizontalMax; h++) {
        printf("Cima Direita\n");
    }
    moverBispo(vertical - 1, horizontalMax);
}

// Movimento complexo do Cavalo usando loops aninhados com múltiplas variáveis e controle de fluxo
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    int movCima = 2;
    int movDireita = 1;

    for (int i = 0; i < movCima + 1; i++) {
        for (int j = 0; j < movDireita + 1; j++) {
            // Simula o formato em "L" (2 para cima, 1 para direita)
            if (i < movCima && j == 0) {
                printf("Cima\n");
            } else if (i == movCima && j == 1) {
                printf("Direita\n");
                break; // Finaliza o movimento em "L"
            } else {
                continue;
            }
        }
    }
}

int main() {
    const int passosTorre = 5;
    const int passosRainha = 8;
    const int passosBispoVertical = 5;
    const int passosBispoHorizontal = 1; // 1 passo horizontal por nível vertical

    printf("Movimento da Torre:\n");
    moverTorre(passosTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(passosBispoVertical, passosBispoHorizontal);

    printf("\nMovimento da Rainha:\n");
    moverRainha(passosRainha);

    moverCavalo();

    return 0;
}
