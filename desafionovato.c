#include <stdio.h>

int main() {
    // Movimento da TORRE: 5 casas para a direita (usando for)
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Movimento do BISPO: 5 casas na diagonal para cima e à direita (usando while)
    printf("\nMovimento do Bispo (5 casas na diagonal cima-direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Casa %d: Cima Direita\n", j);
        j++;
    }

    // Movimento da RAINHA: 8 casas para a esquerda (usando do-while)
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int k = 1;
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= 8);

    return 0;
}
