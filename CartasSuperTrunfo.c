#include <stdio.h>

int main() {
    //Variáveis da coleta de dados. 
    int pt1, pt2;
    char estado1[10], codigo1[10], cidade1[100], estado2[10], codigo2[10], cidade2[100];
    float area1, pib1, area2, pib2;
    unsigned long int populacao1, populacao2;

    //Variáveis do tratamento dos dados.
    float densidade1, percapita1, densidade2, percapita2;

    //Variáveis do Super Poder.
    float densidadeinv1, densidadeinv2, super1, super2;

    //Coleta os dados da primeira carta.
    printf("Digite os dados da primeira carta. \n");
    
    printf("Estado em sigla: ");
    scanf("%s", &estado1);

    printf("Código: ");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &area1);

    printf("PIB em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pt1);

  
    //Coleta os dados da segunda carta.
    printf("\n\nDigite os dados da segunda carta. \n");

    printf("Estado em sigla: ");
    scanf("%s", &estado2);

    printf("Código: ");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pt2);

    //Calcula a densidade, pib per capita e o Super Poder de cada cidade.   
    densidade1 = populacao1 / area1;
    percapita1 = pib1*1000000000 / populacao1;
    densidadeinv1 = 1/densidade1;

    densidade2 = populacao2 / area2;
    percapita2 = pib2*1000000000 / populacao2;
    densidadeinv2 = 1/densidade2;

    super1 = populacao1 + area1 + pib1 + pt1 + densidadeinv1;
    super2 = populacao2 + area2 + pib2 + pt2 + densidadeinv2;

    //Comparação dos Atributos.
    int resultadosuper, resultadopop, resultadoarea, resultadopib, resultadopt, resultadodens, resultadoppc;

    resultadopop = populacao1 > populacao2;
    resultadoarea = area1 > area2;
    resultadopib = pib1 > pib2;
    resultadopt = pt1 > pt2;
    resultadodens = densidadeinv1 > densidadeinv2;
    resultadoppc = percapita1 > percapita2;
    resultadosuper = super1 > super2;

    //Printa todos os dados coletados da primeira carta.
    printf("\n\n\nCarta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais.\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pt1);
    printf("Densidade Populacional: %.2f hab/km².\n", densidade1);
    printf("PIB per Capita: %.2f reais.", percapita1);

    //Printa todos os dados coletados da segunda carta.
    printf("\n\nCarta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pt2);
    printf("Densidade Populacional: %.2f hab/km².\n", densidade2);
    printf("PIB per Capita: %.2f reais.", percapita2);

    //Resultado das comparações.
    printf("\n\n\nPopulação: %d\n", resultadopop);
    printf("Área: %d\n", resultadoarea);
    printf("PIB: %d\n", resultadopib);
    printf("Número de Pontos Turisticos: %d\n", resultadopt);
    printf("Densidade Populacional: %d\n", resultadodens);
    printf("PIB per Capita: %d\n", resultadoppc);
    printf("Super Poder: %d", resultadosuper);
    
    return 0;
}
