#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Variáveis nível aventureiro
    float densidade1;
    float densidade2;
    float pibpercapita1;
    float pibpercapita2;

    // Inserindo dados da carta 1 e 2
    printf("Crie a Carta 1:\n");
    printf("Estado (letra 'A' a 'H'): ");
    scanf(" %c", &estado1); // Espaço antes do %c para evitar erro

    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // Aceita espaços

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCrie a Carta 2:\n");
    printf("Estado (letra 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculo densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibpercapita1 = (pib1 * 1000000000) / populacao1; // PIB em bilhões
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

    // Exibindo dados
    printf("\n--- Cartas criadas com sucesso! ---\n");
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    return 0;
}
