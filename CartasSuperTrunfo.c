#include <sdtio.h>

int main() {

    int pontosCarta1 = 0;
    int pontosCarta2 = 0;    
    
    // Carta 1 - São Paulo
    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "São Paulo";
    long populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28; // em bilhões
    int pontos1 = 50;

    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float superPoder1 = populacao1 + area1 + pib1 + pibPerCapita1 + (1 / densidade1) + pontos1;

    // Carta 2 - Rio de Janeiro
    char estado2 = 'B';
    char codigo2[] = "B02";
    char cidade2[] = "Rio de Janeiro";
    long populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50; // em bilhões
    int pontos2 = 30;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    float superPoder2 = populacao2 + area2 + pib2 + pibPerCapita2 + (1 / densidade2) + pontos2;

    // Mostrar Carta 1
    printf("==== CARTA 1 ====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Mostrar Carta 2
    printf("\n==== CARTA 2 ====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    //Comparação

    printf("\n==== Comparação de Cartas ====\n");

    if (populacao1 > populacao2) { printf("População: Carta 1 venceu\n"); pontosCarta1++; }
    else { printf("População: Carta 2 venceu\n"); pontosCarta2++; }

    if (area1 > area2) { printf("Área: Carta 1 venceu\n"); pontosCarta1++; }
    else { printf("Área: Carta 2 venceu\n"); pontosCarta2++; }

    if (pib1 > pib2) { printf("PIB: Carta 1 venceu\n"); pontosCarta1++; }
    else { printf("PIB: Carta 2 venceu\n"); pontosCarta2++; }

    if (pontos1 > pontos2) { printf("Pontos Turísticos: Carta 1 venceu\n"); pontosCarta1++; }
    else { printf("Pontos Turísticos: Carta 2 venceu\n"); pontosCarta2++; }

    if (densidade1 < densidade2) { printf("Densidade Populacional: Carta 1 venceu\n"); pontosCarta1++; }  
    else { printf("Densidade Populacional: Carta 2 venceu\n"); pontosCarta2++; }

    if (pibPerCapita1 > pibPerCapita2) { printf("PIB per Capita: Carta 1 venceu\n"); pontosCarta1++; }
    else { printf("PIB per Capita: Carta 2 venceu\n"); pontosCarta2++; }

    if (superPoder1 > superPoder2) { printf("Super Poder: Carta 1 venceu\n"); pontosCarta1++; }
    else { printf("Super Poder: Carta 2 venceu\n"); pontosCarta2++; }

    //Resultado final

    printf("\n==== Resultado Final ====\n");
    printf("Carta 1 (%s): %d pontos\n", cidade1, pontosCarta1);
    printf("Carta 2 (%s): %d pontos\n", cidade2, pontosCarta2);

    if (pontosCarta1 > pontosCarta2) {
        printf("?? Carta 1 (%s) é a campeã!\n", cidade1);
    } else if (pontosCarta2 > pontosCarta1) {
        printf("?? Carta 2 (%s) é a campeã!\n", cidade2);
    } else {
        printf("?? Empate entre as duas cartas!\n");
    }

    return 0;
}