#include <stdio.h>

int main() {
	// Variáveis da Carta 1
	char estado1;
	char codigo1[4];
	char cidade1[50];
	unsigned long int populacao1; // Nível mestre
	float area1;
	float pib1;
	int pontosturisticos1;

	// Variáveis da Carta 2
	char estado2;
	char codigo2[4];
	char cidade2[50];
	unsigned long int populacao2;
	float area2;
	float pib2;
	int pontosturisticos2;

	// Variáveis nível aventureiro
    float densidade1;
	float densidade2;
    float pibpercapita1;
	float pibpercapita2;

	// Variáveis nível mestre
	 float superpoder1;
	 float superpoder2;


	// Inserindo dados da carta 1 e 2
	printf("Crie a Carta 1:\n");
	printf("Estado (letra 'A' a 'H'): ");
	scanf(" %c", &estado1); // Espaço antes do %c para evitar erro

	printf("Código da Carta (ex: A01, B03): ");
	scanf("%s", codigo1);

	printf("Nome da Cidade: ");
	scanf(" %[^\n]", cidade1); // Aceita espaços

	printf("População: ");
	scanf("%lu", &populacao1);

	printf("Área (km²): ");
	scanf("%f", &area1);

	printf("PIB (em bilhões): ");
	scanf("%f", &pib1);

	printf("Número de Pontos Turísticos: ");
	scanf("%d", &pontosturisticos1);

	printf("\nCrie a Carta 2:\n");
	printf("Estado (letra 'A' a 'H'): ");
	scanf(" %c", &estado2);

	printf("Código da Carta (ex: A01, B03): ");
	scanf("%s", codigo2);

	printf("Nome da Cidade: ");
	scanf(" %[^\n]", cidade2);

	printf("População: ");
	scanf("%lu", &populacao2);

	printf("Área (km²): ");
	scanf("%f", &area2);

	printf("PIB (em bilhões): ");
	scanf("%f", &pib2);

	printf("Número de Pontos Turísticos: ");
	scanf("%d", &pontosturisticos2);

	// Calcular a Densidade Populacional e o PIB per Capita
    densidade1 = (float)populacao1 / area1; // float: Nível mestre
    densidade2 = (float)populacao2 / area2;

    pibpercapita1 = (pib1 * 1000000000) / populacao1; // PIB em bilhões
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

	// Calcular o Super Poder = soma dos atributos numéricos + inverso da densidade
	superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1.0f / densidade1);
	superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1.0f / densidade2);

	// Exibindo dados
	printf("\n--- Cartas criadas com sucesso! ---\n");
	printf("\nCarta 1\n");
	printf("Estado: %c\n", estado1);
	printf("Código: %s\n", codigo1);
	printf("Nome da Cidade: %s\n", cidade1);
	printf("População: %lu\n", populacao1);
	printf("Área: %.2f km²\n", area1);
	printf("PIB: %.2f bilhões de reais\n", pib1);
	printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
	printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

	printf("\nCarta 2\n");
	printf("Estado: %c\n", estado2);
	printf("Código: %s\n", codigo2);
	printf("Nome da Cidade: %s\n", cidade2);
	printf("População: %lu\n", populacao2);
	printf("Área: %.2f km²\n", area2);
	printf("PIB: %.2f bilhões de reais\n", pib2);
	printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
	printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

	
	// Comparar as Cartas
	int popcomp = (populacao1 > populacao2) ? 1 : 0;
	int areacomp = (area1 > area2) ? 1 : 0;
	int pibcomp = (pib1 > pib2) ? 1 : 0;
	int pontoscomp = (pontosturisticos1 > pontosturisticos2) ? 1 : 0;
	int densidadecomp = (densidade1 < densidade2) ? 1 : 0; // Menor vence
	int pibcapitacomp = (pibpercapita1 > pibpercapita2) ? 1 : 0;
	int superpodercomp = (superpoder1 > superpoder2) ? 1 : 0;


	// Exibir os Resultados das Comparações: 1 para verdadeiro (Carta 1 vence) e 0 para falso (Carta 2 vence)
	printf("\n--- Comparação de Cartas ---\n");
	printf("População: Carta %d venceu (%d)\n", popcomp ? 1 : 2, popcomp);
	printf("Área: Carta %d venceu (%d)\n", areacomp ? 1 : 2, areacomp);
	printf("PIB: Carta %d venceu (%d)\n", pibcomp ? 1 : 2, pibcomp);
	printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontoscomp ? 1 : 2, pontoscomp);
	printf("Densidade Populacional: Carta %d venceu (%d)\n", densidadecomp ? 1 : 2, densidadecomp);
	printf("PIB per Capita: Carta %d venceu (%d)\n", pibcapitacomp ? 1 : 2, pibcapitacomp);
	printf("Super Poder: Carta %d venceu (%d)\n", superpodercomp ? 1 : 2, superpodercomp);

	return 0;
}

