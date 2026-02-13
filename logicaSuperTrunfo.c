#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1 = 'A';
    char estado2 = 'B';
    char codigo1[4] = "A01";
    char codigo2[4] = "B01"; 
    char cidade1[20] = "Cravinhos";
    char cidade2[20] = "Serrana";
    int populacao1 = 45000;
    int populacao2 = 32000;
    int pontosT1 = 10;
    int pontosT2 = 12;
    float area1 = 350000;
    float area2 = 280000;
    float pib1 = 1500000000;
    float pib2 = 1200000000;
    
    // Área para carta pré-cadastrada 
    // Primeira carta
    printf("Cadastro da carta (1)\n");
    printf("Digite uma letra para representar um dos oito estados (A-H): %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área (em km²): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosT1);
    printf("--------------------------------\n");

    // Segunda carta
    printf("Cadastro da carta (2)\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (em km²): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosT2);
    printf("---------------------------------\n\n");

    // Área para o cálculo de Densidade Populacional e PIB per Capita (conversão explicita)
    float densidade1 = (float) populacao1 / area1; 
    float densidade2 = (float) populacao2 / area2;

    float pcapita1 = (float) pib1 / populacao1;
    float pcapita2 = (float) pib2 / populacao2;

    // Comparação de Cartas:
    // lógica de comparação entre duas cartas.
    int primeiroAtributo, segundoAtributo;
    float valor1_1, valor2_1, valor1_2, valor2_2;
    int resultado1, resultado2;
    float soma1, soma2;

    printf("----------- X Combate X -----------\n\n");
    printf("Escolha o primeiro atributo a ser comparado:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Nº Pontos Turisticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 1:
        printf("Você escolheu o atributo População!\n");
        valor1_1 = populacao1;
        valor2_1 = populacao2;
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu o atributo Área!\n");
        valor1_1 = area1;
        valor2_1 = area2;
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu o atributo PIB!\n");
        valor1_1 = pib1;
        valor2_1 = pib2;
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu o atributo Pontos Turísticos!\n");
        valor1_1 = pontosT1;
        valor2_1 = pontosT2;
        resultado1 = pontosT1 > pontosT2 ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu o atributo Densidade!\n");
        valor1_1 = densidade1;
        valor2_1 = densidade2;
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida!\n");
        return 1;
    }
    
    printf("\n----------- X Combate X -----------\n\n");
    printf("Escolha o segundo atributo a ser comparado:\n");
    printf("ATENÇÃO!: Você deve escolher um atributo diferente do primeiro.\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Nº Pontos Turisticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &segundoAtributo);
    
    if (primeiroAtributo == segundoAtributo) {
        printf("Você escolheu o mesmo atributo!\n");
        printf("Recomece o jogo!\n");
        return 1;
    }

    switch (segundoAtributo)
    {
    case 1:
        printf("Você escolheu o atributo População!\n");
        valor1_2 = populacao1;
        valor2_2 = populacao2;
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu o atributo Área!\n");
        valor1_2 = area1;
        valor2_2 = area2;
        resultado2 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu o atributo PIB!\n");
        valor1_2 = pib1;
        valor2_2 = pib2;
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu o atributo Pontos Turísticos!\n");
        valor1_2 = pontosT1;
        valor2_2 = pontosT2;
        resultado2 = pontosT1 > pontosT2 ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu o atributo Densidade!\n");
        valor1_2 = densidade1;
        valor2_2 = densidade2;
        resultado2 = densidade1 < densidade2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida!\n");
        return 1;
    }

    // Soma dos Atributos
    soma1 = valor1_1 + valor1_2;
    soma2 = valor2_1 + valor2_2;

    // Exibição do Resultado
    printf("\n========== RESULTADO FINAL ==========\n");
    printf("Carta 1 - %s (%c%s)\n", cidade1, estado1, codigo1);
    printf("Carta 2 - %s (%c%s)\n\n", cidade2, estado2, codigo2);
    
    printf("Primeiro Atributo:\n");
    printf("%s: %.2f | %s: %.2f\n", cidade1, valor1_1, cidade2, valor2_1);
    
    printf("\nSegundo Atributo:\n");
    printf("%s: %.2f | %s: %.2f\n", cidade1, valor1_2, cidade2, valor2_2);
    
    printf("\nSoma dos Atributos:\n");
    printf("%s: %.2f | %s: %.2f\n", cidade1, soma1, cidade2, soma2);
    
    printf("\n--- VENCEDOR ---\n");
    if (soma1 > soma2) {
        printf("%s venceu!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("%s venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }
    printf("====================================\n");

    return 0;
}
