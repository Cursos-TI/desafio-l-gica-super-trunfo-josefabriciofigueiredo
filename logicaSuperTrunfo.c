#include <stdio.h>

int main(){
    char estado1[2], estado2[2];
    char codigoDaCarta1[4], codigoDaCarta2[4];
    char nomeCidade1[100], nomeCidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Coletar informações da primeira carta com scanf
    printf("----- Carta 1 -----\n");

    printf("Digite  uma letra de (A a H) para o Estado: ");
    scanf("%s", estado1);

    printf("Digite o código da Carta: ");
    scanf("%s", codigoDaCarta1);

    printf("Digite o nome da Cidade: ");
    scanf(" %99[^\n]", nomeCidade1);

    printf("Digite a qtd. da população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a qtd. de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1; // Calculo da Densidade Populacional
    pibPerCapita1 = (pib1 * 100000000) / populacao1; // Calculo do PIB per Capita; Transformando o PIB de bilhões para reais

    // Coletar informações da segunda carta com scanf
    printf("\n----- Carta 2 -----\n");

    printf("Digite  uma letra de (A a H) para o Estado: ");
    scanf("%s", estado2);

    printf("Digite o código da Carta: ");
    scanf("%s", codigoDaCarta2);

    printf("Digite o nome da Cidade: ");
    scanf(" %99[^\n]", nomeCidade2);

    printf("Digite a qtd. da população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a qtd. de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2; // Calculo da Densidade Populacional
    pibPerCapita2 = (pib2 * 100000000) / populacao2; // Calculo do PIB per Capita; Transformando o PIB de bilhões para reais

    // Exibir a primeira carta Trunfo com printf
    printf("\n----- Info. Primeira Carta -----");

    printf("\nEstado: %s", estado1);
    printf("\nCódigo da Carta: %s", codigoDaCarta1);
    printf("\nCidade: %s", nomeCidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f Km²", area1);
    printf("\nPIB: %.2f bilhões de reais", pib1);
    printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidadePopulacional1);
    printf("\nPIB per Capita: %.2f reais", pibPerCapita1);

    // Exibir a segunda carta Trunfo com printf
    printf("\n\n----- Info. Segunda Carta -----");

    printf("\nEstado: %s", estado2);
    printf("\nCódigo da Carta: %s", codigoDaCarta2);
    printf("\nCidade: %s", nomeCidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f Km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidadePopulacional2);
    printf("\nPIB per Capita: %.2f reais", pibPerCapita2);

    // Menu para escolher o que será comparado
    printf("\n\n----- O que deseja comparar? -----");
    printf("\n1 - População (maior vence)");
    printf("\n2 - Área (maior vence)");
    printf("\n3 - PIB (maior vence)");
    printf("\n4 - Pontos Turísticos (maior vence)");
    printf("\n5 - Densidade Demográfica (menor vence)");

    int opcao;
    printf("\nSua escolha: ");
    scanf("%d", &opcao);

    // Exibir a comparação entre as duas cartas
    printf("\n\n----- Comparação de Cartas -----");
    switch (opcao) {
    case 1:
        printf("\nComparação de cartas (Atributo: População)");
        printf("\nCarta 1 - %s: %lu", nomeCidade1, populacao1);
        printf("\nCarta 2 - %s: %lu", nomeCidade2, populacao2);
        
        if (populacao1 > populacao2) {
            printf("\nResultado: Carta 1 (%s) venceu", nomeCidade1);
        } else if (populacao1 < populacao2) {
            printf("\nResultado: Carta 2 (%s) venceu", nomeCidade2);
        } else {
            printf("\nResultado: Empate");
        }
        break;
    case 2:
        printf("\nComparação de cartas (Atributo: Área)");
        printf("\nCarta 1 - %s: %.2fm²", nomeCidade1, area1);
        printf("\nCarta 2 - %s: %.2fm²", nomeCidade2, area2);
        
        if (area1 > area2) {
            printf("\nResultado: Carta 1 (%s) venceu", nomeCidade1);
        } else if (area1 < area2) {
            printf("\nResultado: Carta 2 (%s) venceu", nomeCidade2);
        } else {
            printf("\nResultado: Empate");
        }
        break;
    case 3:
        printf("\nComparação de cartas (Atributo: PIB)");
        printf("\nCarta 1 - %s: %.2f bilhões", nomeCidade1, pib1);
        printf("\nCarta 2 - %s: %.2f bilhões", nomeCidade2, pib2);
        
        if (pib1 > pib2) {
            printf("\nResultado: Carta 1 (%s) venceu", nomeCidade1);
        } else if (pib2 > pib1) {
            printf("\nResultado: Carta 2 (%s) venceu", nomeCidade2);
        } else {
            printf("\nResultado: Empate");
        }
        break;
    case 4:
        printf("\nComparação de cartas (Atributo: Número de Pontos Turísiticos)");
        printf("\nCarta 1 - %s: %d", nomeCidade1, pontosTuristicos1);
        printf("\nCarta 2 - %s: %d", nomeCidade2, pontosTuristicos2);
        
        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("\nResultado: Carta 1 (%s) venceu", nomeCidade1);
        } else if (pontosTuristicos2 > pontosTuristicos1) {
            printf("\nResultado: Carta 2 (%s) venceu", nomeCidade2);
        } else {
            printf("\nResultado: Empate");
        }
        break;
    case 5:
        printf("\nComparação de cartas (Atributo: Densidade demográfica)");
        printf("\nCarta 1 - %s: %.2f hab/km²", nomeCidade1, densidadePopulacional1);
        printf("\nCarta 2 - %s: %.2f hab/km²", nomeCidade2, densidadePopulacional2);
        
        if (densidadePopulacional1 < densidadePopulacional2) {
            printf("\nResultado: Carta 1 (%s) venceu", nomeCidade1);
        } else if (densidadePopulacional1 > densidadePopulacional2) {
            printf("\nResultado: Carta 2 (%s) venceu", nomeCidade2);
        } else {
            printf("\nResultado: Empate");
        }
        break;
    
    default:
        printf("\nOpção inválida. Fim do Jogo");
    }
}