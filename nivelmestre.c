#include <stdio.h>

int main() {
    char cidade1[] = "Brasil";
    char cidade2[] = "Argentina";
    int pontosCarta1 = 85;  // Pontos do Brasil
    int pontosCarta2 = 90;  // Pontos da Argentina

    printf("\n==== Resultado Final ====\n");
    printf("Carta 1 (%s): %d pontos\n", cidade1, pontosCarta1);
    printf("Carta 2 (%s): %d pontos\n", cidade2, pontosCarta2);

    if (pontosCarta1 > pontosCarta2) {
        printf("Carta 1 (%s) é a campeã!\n", cidade1);
    } else if (pontosCarta2 > pontosCarta1) {
        printf("Carta 2 (%s) é a campeã!\n", cidade2);
    } else {
        printf("Empate entre as duas cartas!\n");
    }

    return 0;
}
