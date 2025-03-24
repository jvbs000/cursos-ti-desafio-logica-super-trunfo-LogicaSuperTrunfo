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

    // Cálculos
    densidade1 = (float)populacao1 / area1;
    pibPercapita1 = (pib1 * 1e9) / populacao1;
    densidade2 = (float)populacao2 / area2;
    pibPercapita2 = (pib2 * 1e9) / populacao2;

    // Declaração das variáveis para menu interativo e cálculo dos atributos escolhidos
    int opcao1, opcao2;
    float valor1_c1, valor2_c1, valor1_c2, valor2_c2;
    float soma1, soma2;
    
    // Menu de escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade Demográfica\n");
    scanf("%d", &opcao1);

    // Menu de escolha do segundo atributo (diferente do primeiro)
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade Demográfica\n");
    scanf("%d", &opcao2);
    
    if (opcao1 == opcao2) {
        printf("\nErro: O segundo atributo deve ser diferente do primeiro!\n");
        return 1; // Este comando não foi mostrado ainda, mas seu uso facilita o comando de opção inválida. Seu conhecimento foi obtido através de estudos sobre o conteúdo 
    }

    // Atribuição de valores aos atributos escolhidos
    switch (opcao1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; 
        break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; 
        break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; 
        break;
        case 4: valor1_c1 = pontosTuristicos1; valor1_c2 = pontosTuristicos2; 
        break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; 
        break;
    }

    switch (opcao2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; 
        break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; 
        break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; 
        break;
        case 4: valor2_c1 = pontosTuristicos1; valor2_c2 = pontosTuristicos2; 
        break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; 
        break;
    }

    // Cálculo das somas
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    // Exibição dos resultados
    printf("\n--- Comparação das Cartas ---\n");
    printf("Atributo 1: %s - %.2f | %s - %.2f\n", nomeCidade1, valor1_c1, nomeCidade2, valor1_c2);
    printf("Atributo 2: %s - %.2f | %s - %.2f\n", nomeCidade1, valor2_c1, nomeCidade2, valor2_c2);
    printf("Soma total: %s - %.2f | %s - %.2f\n", nomeCidade1, soma1, nomeCidade2, soma2);
    
    // Determinar vencedor
    printf("Vencedor: %s\n", (soma1 > soma2) ? nomeCidade1 : (soma2 > soma1) ? nomeCidade2 : "Empate!");

    return 0;
}