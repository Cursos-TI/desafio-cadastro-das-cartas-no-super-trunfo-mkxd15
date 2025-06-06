#include <stdio.h>

int main() {
    
    int populacao1, populacao2, pt1, pt2;
    char estado1[10], codigo1[10], cidade1[50], estado2[10], codigo2[10], cidade2[50];
    float area1, pib1, area2, pib2;

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

    printf("Área: ");
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

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pt2);



    //Printa todos os dados coletados da primeira carta.
    printf("\n\n\nCarta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pt1);

    //Printa todos os dados coletados da segunda carta.
    printf("\n\nCarta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pt2);

    return 0;
}
