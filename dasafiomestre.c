#include <stdio.h>

// Movimento recursivo da Torre (Direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Movimento recursivo da Rainha (Esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento recursivo + loops aninhados do Bispo (Cima Direita)
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverBispoComLoops(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) {
            printf("(Loop Aninhado) Cima Direita\n");
        }
    }
}

// Movimento complexo do Cavalo (duas casas para cima, uma para a direita)
void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;
    for (int i = 0; i < movimentosVerticais; i++) {
        if (i == 1) continue; // controle de fluxo com continue
        printf("Cima\n");
    }
    for (int j = 0; j < movimentosHorizontais; j++) {
        printf("Direita\n");
    }
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Linha em branco
    printf("\n");

    // Bispo (Recursivo)
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);

    // Bispo (Loops aninhados)
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoComLoops(casasBispo);

    // Linha em branco
    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    // Linha em branco
    printf("\n");

    // Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
