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
    printf("---------------------------------\n");

    // Área para o cálculo de Densidade Populacional e PIB per Capita (conversão explicita)
    float densidade1 = (float) populacao1 / area1; 
    float densidade2 = (float) populacao2 / area2;

    float densidadeInverso1 = area1 / (float) populacao1; 
    float densidadeInverso2 = area2 / (float) populacao2;

    float pcapita1 = (float) pib1 / populacao1;
    float pcapita2 = (float) pib2 / populacao2;

    // Cálculo para o SUPERPOWERRRR
    // somando todos os atributos numéricos 
    // (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional)
    float superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosT1 + pcapita1 + densidadeInverso1;
    float superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosT2 + pcapita2 + densidadeInverso2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
