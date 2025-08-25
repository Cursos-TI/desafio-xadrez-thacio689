#include <stdio.h>

int main() {
    // Movimento do Bispo (diagonal superior direita - 5 casas)
    printf("Movimento do Bispo:\n");
    for(int i = 1; i <= 5; i++){
        printf("Diagonal Superior Direita - Passo %d\n", i);
    }

    // Movimento da Torre (5 casas para a direita)
    printf("\nMovimento da Torre:\n");
    for(int i = 1; i <= 5; i++){
        printf("Direita - Passo %d\n", i);
    }

    // Movimento da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    for(int i = 1; i <= 8; i++){
        printf("Esquerda - Passo %d\n", i);
    }

    return 0;
}
```
