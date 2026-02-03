#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[4], codigo2[4], cidade1[20], cidade2[20];
    int populacao1, populacao2;
    int pontosT1, pontosT2;
    float area1, area2, pib1, pib2;
    
    // Área para entrada de dados
    // Primeira carta
    printf("Cadastro da carta (1)\n");
    printf("Digite uma letra para representar um dos oito estados (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (O código deve receber o prefixo do estado escolhido + sequencia numérica): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosT1);
    printf("--------------------------------\n");

    // Segunda carta
    printf("Cadastro da carta (2)\n");
    printf("Digite uma letra para representar um dos oito estados (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (O código deve receber o prefixo do estado escolhido + sequencia numérica): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosT2);
    printf("---------------------------------\n\n");

    // Área para o cálculo de Densidade Populacional e PIB per Capita (conversão explicita)
    float densidade1 = (float) populacao1 / area1; 
    float densidade2 = (float) populacao2 / area2;

    float pcapita1 = (float) pib1 / populacao1;
    float pcapita2 = (float) pib2 / populacao2;

    // Comparação de Cartas:
    // lógica de comparação entre duas cartas.
    printf("---------- X Combate X ----------\n\n");

    if (populacao1 > populacao2) {
        printf("Atributo - POPULAÇÃO\n");
        printf("Carta 1 - %s - %d\n", cidade1, populacao1);
        printf("Carta 2 - %s - %d\n", cidade2, populacao2);
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Atributo - POPULAÇÃO\n");
        printf("Carta 2 - %s - %d\n", cidade2, populacao2);
        printf("Carta 1 - %s - %d\n", cidade1, populacao1);
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    }

    if (densidade1 < densidade2) {
        printf("Atributo - DENSIDADE POPULACIONAL\n");
        printf("Carta 1 - %s - %.2f\n", cidade1, densidade1);
        printf("Carta 2 - %s - %.2f\n", cidade2, densidade2);
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Atributo - DENSIDADE POPULACIONAL\n");
        printf("Carta 2 - %s - %d\n", cidade2, densidade2);
        printf("Carta 1 - %s - %d\n", cidade1, densidade1);
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    }


    return 0;
}
