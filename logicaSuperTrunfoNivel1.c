#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados da carta 1
    char numerodaCarta1[5], estado1, codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPercapita1;
    
    // Declaração das variáveis para armazenar os dados da carta 2
    char numerodaCarta2[5], estado2, codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPercapita2;
    
    // Entrada de dados para a carta 1
    printf("\nInsira os dados da carta 1\n");
    printf("Número da carta: \n");
    scanf("%s", numerodaCarta1);
    printf("Estado (A-H): \n");
    scanf(" %c", &estado1);
    printf("Código da carta: \n");
    scanf("%s", codigo1);
    printf("Nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade1); // Apesar dessa função para se ler nomes com espaço não ter sido mostrada no momento, foi necessário adquirir conhecimento dela para evitar erros
    printf("População: \n");
    scanf("%d", &populacao1);
    printf("Área (km²): \n");
    scanf("%f", &area1);
    printf("PIB: \n");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Cálculos para a carta 1
    densidade1 = populacao1 / area1;
    pibPercapita1 = (pib1 * 1e9) / populacao1; // O uso da notação científica foi necessário para o cálculo correto ser feito mesmo seu uso não tendo sido explicado nesse módulo
   

    // Entrada de dados para a carta 2
    printf("\nInsira os dados da carta 2\n");
    printf("Número da carta: \n");
    scanf("%s", numerodaCarta2);
    printf("Estado (A-H): \n");
    scanf(" %c", &estado2);
    printf("Código da carta: \n");
    scanf("%s", codigo2);
    printf("Nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade2); // Apesar dessa função para se ler nomes com espaço não ter sido mostrada no momento, foi necessário adquirir conhecimento dela para evitar erros
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Área (km²): \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a carta 2
    densidade2 = populacao2 / area2;
    pibPercapita2 = (pib2 * 1e9) / populacao2; // O uso da notação científica foi necessário para o cálculo correto ser feito mesmo seu uso não tendo sido explicado nesse módulo
   
    // Impressão dos dados da carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Número: %s\n", numerodaCarta1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);  // Adição da impressão do resultado da Densidade Populacional da carta 1
    printf("PIB per Capita: %.2f\n", pibPercapita1); // Adição da impressão do resultado do PIB per Capita da carta 1

    // Impressão dos dados da carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Número: %s\n", numerodaCarta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f\n", densidade2); // Adição da impressão do resultado da densidade 2
    printf("PIB per Capita: %.2f\n", pibPercapita2); // Adição da impressão do resultado do PIB per Capita da carta 2
    
    
    // Atributo escolhido para comparação: População
    printf("\n--- Comparação das cartas (Atributo: População) ---\n");
    printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);

    // Determinar e exibir a carta vencedora
    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);

    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }
    
    return 0;
}

/*
Dados escolhidos da carta 1:
Estado: A
Código: A01
Nome da cidade: Campinas
População: 1200000
Área: 795.70 km²
PIB: 60.25 bilhões
Pontos turísticos: 40
*/

/*
Dados escolhidos da carta 2:
Estado: B
Código: B02
Nome da cidade: Paraty
População: 45000
Área: 926.00 km²
PIB: 15.75 bilhões
Pontos turísticos: 30
*/    
