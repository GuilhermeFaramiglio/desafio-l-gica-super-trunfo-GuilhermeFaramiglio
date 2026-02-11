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
    
    // Área para carta pré-cadastrada 
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
    int primeiroAtributo, segundoAtributo;
    int resultado1, resultado2;

    printf("----------- X Combate X -----------\n\n");
    printf("Escolha o primeiro atributo a ser comparado:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Nº Pontos Turisticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha:");
    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 1:
        printf("Você escolheu o atributo População!");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu o atributo Área!");
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu o atributo PIB!");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu o atributo Pontos Turísticos!");
        resultado1 = pontosT1 > pontosT2 ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu o atributo Densidade!");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida!");
        break;
    }
    
    printf("----------- X Combate X -----------\n\n");
    printf("Escolha o segundo atributo a ser comparado:\n");
    printf("ATENÇÃO!: Você deve escolher um atributo diferente do primeiro.");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Nº Pontos Turisticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha:");
    scanf("%d", &segundoAtributo);
    
    if (primeiroAtributo == segundoAtributo) {
        printf("Você escolheu o mesmo atributo!\n");
        printf("Recomece o jogo!");
    } else {
        switch (segundoAtributo)
        {
        case 1:
            printf("Você escolheu o atributo População!");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu o atributo Área!");
            resultado2 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu o atributo PIB!");
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu o atributo Pontos Turísticos!");
            resultado2 = pontosT1 > pontosT2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu o atributo Densidade!");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida!");
            break;
        }
    }

    return 0;
}
