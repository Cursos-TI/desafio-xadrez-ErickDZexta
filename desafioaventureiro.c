#include <stdio.h>

int main() {
    int i;

    // Movimento da Torre - 5 casas para a direita (usando FOR)
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo - 5 casas na diagonal para cima e direita (usando WHILE)
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da Rainha - 8 casas para a esquerda (usando DO-WHILE)
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    // Movimento do Cavalo - 2 para baixo e 1 para a esquerda (usando FOR + WHILE aninhado)
    printf("\nMovimento do Cavalo:\n");

    // Loop FOR para simular as 2 casas para baixo
    for (i = 1; i <= 2; i++) {
        printf("Baixo\n");
    }

    // Loop WHILE aninhado para simular 1 casa para esquerda
    int j = 1;
    while (j <= 1) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
