#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    int numerodaCarta1 = 1;
    char estado1[3] = "SP";
    char codigo1[4] = "A01";
    char nomeCidade1[20] = "Campinas";
    int populacao1 = 1200000, pontosTuristicos1 = 40;
    float area1 = 795.70, pib1 = 60.25, densidade1 = 0;
    double pibPercapita1 = 0;

    int numerodaCarta2 = 2;
    char estado2[3] = "RJ";
    char codigo2[4] = "B02";
    char nomeCidade2[20] = "Paraty";
    int populacao2 = 45000, pontosTuristicos2 = 30;
    float area2 = 926.00, pib2 = 15.75, densidade2 = 0;
    double pibPercapita2 = 0;

    // Cálculos para a carta 1
    densidade1 = (float)populacao1 / area1;
    pibPercapita1 = (pib1 * 1e9) / populacao1;

    // Cálculos para a carta 2
    densidade2 = (float)populacao2 / area2;
    pibPercapita2 = (pib2 * 1e9) / populacao2;

    // Impressão dos dados
    printf("\n--- Dados das Cartas ---\n");
    printf("\nNúmero da Carta - %d\n", numerodaCarta1);
    printf("Estado - %s\n", estado1);
    printf("Código da Carta - %s\n", codigo1);
    printf("Nome da Cidade - %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("PIB per Capita: %.2f\n", pibPercapita1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nNúmero da Carta - %d\n", numerodaCarta2);
    printf("Estado - %s\n", estado2);
    printf("Código da Carta - %s\n", codigo2);
    printf("Nome da Cidade - %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("PIB per Capita: %.2f\n", pibPercapita2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Criação do menu interativo
    int opcao;
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n--- Comparação das Cartas ---\n");
    printf("Carta 1 - %s\n", nomeCidade1);
    printf("Carta 2 - %s\n", nomeCidade2);

    // Criação do sistema de comparação dos atributos das cartas
    switch(opcao) {
        case 1:
            printf("Atributo: População\n%s: %d\n%s: %d\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            if (populacao1 > populacao2) printf("Vencedor: %s\n", nomeCidade1);
            else if (populacao2 > populacao1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 2:
            printf("Atributo: Área\n%s: %.2f km²\n%s: %.2f km²\n", nomeCidade1, area1, nomeCidade2, area2);
            if (area1 > area2) printf("Vencedor: %s\n", nomeCidade1);
            else if (area2 > area1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 3:
            printf("Atributo: PIB\n%s: %.2f bilhões\n%s: %.2f bilhões\n", nomeCidade1, pib1, nomeCidade2, pib2);
            if (pib1 > pib2) printf("Vencedor: %s\n", nomeCidade1);
            else if (pib2 > pib1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 4:
            printf("Atributo: Número de pontos turísticos\n%s: %d\n%s: %d\n", nomeCidade1, pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) printf("Vencedor: %s\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 5:
            printf("Atributo: Densidade Demográfica\n%s: %.2f hab/km²\n%s: %.2f hab/km²\n", nomeCidade1, densidade1, nomeCidade2, densidade2);
            if (densidade1 < densidade2) printf("Vencedor: %s\n", nomeCidade1);
            else if (densidade2 < densidade1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
    return 0;
}
