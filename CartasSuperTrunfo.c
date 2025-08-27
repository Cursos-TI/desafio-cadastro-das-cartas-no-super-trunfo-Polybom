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

    return 0;
}