#include <stdio.h>

int main() {

    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Entrada Carta 1
    printf("Carta 1\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf(" %s", codigo1);

    printf("Cidade: ");
    scanf(" %s[\n]", cidade1);

    printf("Populacao: ");
    scanf(" %d", &populacao1);

    printf("Area: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf(" %f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);


    // Entrada Carta 2
    printf("\nCarta 2\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf(" %s", codigo2);

    printf("Cidade: ");
    scanf(" %s", cidade2);

    printf("Populacao: ");
    scanf(" %d", &populacao2);

    printf("Area: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Pontos turisticos: ");
    scanf(" %d", &pontos2);


    // Saída Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    // Saída Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);

    return 0;
}


