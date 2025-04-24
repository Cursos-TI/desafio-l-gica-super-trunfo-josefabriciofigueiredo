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
    superPoder1 = populacao1 + area1 + pib1 + pibPerCapita1 + (1 / densidadePopulacional1) + pontosTuristicos1; // Calculo do SuperPoder

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
    superPoder2 = populacao2 + area2 + pib2 + pibPerCapita2 + (1 / densidadePopulacional2) + pontosTuristicos2; // Calculo do SuperPoder

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
    printf("\nSuper Poder: %.1f", superPoder1);

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
    printf("\nSuper Poder: %.1f", superPoder2);

    // Exibir a comparação entre as duas cartas
    printf("\n\n----- Comparação de Cartas -----");
    printf("\nComparação de cartas (Atributo: População)");
    printf("\nCarta 1 - %s: %lu", nomeCidade1, populacao1);
    printf("\nCarta 2 - %s: %lu", nomeCidade2, populacao2);
    
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu", nomeCidade1);
    } else {
        printf("\nResultado: Carta 2 (%s) venceu", nomeCidade2);
    }
}