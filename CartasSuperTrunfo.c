#include <stdio.h>
#include <string.h>

int main() {
    // Variaveis

    char state_1, code_1[5], city_1[50];
    int sights_1;
    float area_1, pib_1, pibCapita_1, populationDensity_1, superPower_1;
    unsigned int populationAmount_1;

    char state_2, code_2[5], city_2[50];
    int  sights_2;
    float area_2, pib_2, pibCapita_2, populationDensity_2, superPower_2;
    unsigned int populationAmount_2;

    // Leitura dos dados - Cidade 01

    printf("Insira o estado da cidade: \n");
    scanf("%c", &state_1);

    printf("Insira o código da cidade: \n");
    scanf("%s", code_1);
    getchar(); // Retira a quebra de linha do comando de leitura para que o próximo comando funcione corretamente, faça isso sempre que alternar entre leitura de chars, strings e numbers - float, int, double...

    printf("Insira o nome da cidade: \n");
    fgets(city_1, 49, stdin); // Faz a leitura do teclado(stdin), obecedendo o espaçamento e capturando todos os elementos corretamente
    city_1[strcspn(city_1, "\n")] = 0; // Apaga a quebra de linha gerada pelo fgets, substituindo pelo 0.

    printf("Quantas pessoas vivem nessa cidade: \n");
    scanf("%u", &populationAmount_1);

    printf("Qual a area aproximada dessa cidade em quilometros quadrados: \n");
    scanf("%f", &area_1);

    printf("Qual o valor aproximado do PIB dessa cidade: \n");
    scanf("%f", &pib_1);

    printf("Quantos pontos turísticos há nessa cidade: \n");
    scanf("%i", &sights_1);

    // Calculo dos dados complexos - Para não haver perda de dados em um calculo que envolve numeros inteiros e floats, recomenda-se o uso do casting explicito.
    populationDensity_1 = (float) populationAmount_1 / area_1; // Densidade Populacional

    pibCapita_1 = (float) pib_1 / populationAmount_1; // PIB per Capita

    superPower_1 = (float) populationAmount_1 + area_1 + pib_1 + sights_1 + pibCapita_1 + (1 / populationDensity_1); // Calculando o inverso da densidade populacional e somando ao restante, inclusive fazendo do cast

    getchar(); // Retira a quebra de linha do comando de leitura para que o próximo comando funcione corretamente, faça isso sempre que alternar entre leitura de chars, strings e numbers - float, int, double...

    // Leitura dos dados - Cidade 02

    printf("Insira o estado da cidade: \n");
    scanf("%c", &state_2);

    printf("Insira o código da cidade: \n");
    scanf("%s", code_2);
    getchar(); // Retira a quebra de linha do comando de leitura para que o próximo comando funcione corretamente, faça isso sempre que alternar entre leitura de chars, strings e numbers - float, int, double...

    printf("Insira o nome da cidade: \n");
    fgets(city_2, 49, stdin); // Faz a leitura do teclado(stdin), obecedendo o espaçamento e capturando todos os elementos corretamente
    city_2[strcspn(city_2, "\n")] = 0; // Apaga a quebra de linha gerada pelo fgets, substituindo pelo 0.

    printf("Quantas pessoas vivem nessa cidade: \n");
    scanf("%u", &populationAmount_2);

    printf("Qual a area aproximada dessa cidade em quilometros quadrados: \n");
    scanf("%f", &area_2);

    printf("Qual o valor aproximado do PIB dessa cidade: \n");
    scanf("%f", &pib_2);

    printf("Quantos pontos turísticos há nessa cidade: \n");
    scanf("%i", &sights_2);

    // Calculo dos dados complexos - Para não haver perda de dados em um calculo que envolve numeros inteiros e floats, recomenda-se o uso do casting explicito.
    populationDensity_2 = (float) populationAmount_2 / area_2; // Densidade Populacional

    pibCapita_2 = (float) pib_2 / populationAmount_2; // PIB per Capita

    superPower_2 = (float) populationAmount_2 + area_2 + pib_2 + sights_2 + pibCapita_2 + (1 / populationDensity_2); // Calculando o inverso da densidade populacional e somando ao restante, inclusive fazendo do cast

    // Apresentação dos dados - Cidade 01

    printf("\n");
    printf("Carta 1: \n");
    printf("Estado: %c\n", state_1);
    printf("Código: %s\n", code_1);
    printf("Nome da cidade: %s\n", city_1);
    printf("População: %u\n", populationAmount_1);
    printf("Área (KM^2): %.2f\n", area_1);
    printf("PIB: %.2f R$\n", pib_1);
    printf("Número de pontos turísticos: %d\n", sights_1);
    printf("Densidade Populacional: %.2f \n", populationDensity_1);
    printf("PIB per capita: %.2f R$\n", pibCapita_1);
    printf("\n");

    // Apresentação dos dados - Cidade 02

    printf("\n");
    printf("Carta 2: \n");
    printf("Estado: %c\n", state_2);
    printf("Código: %s\n", code_2);
    printf("Nome da cidade: %s\n", city_2);
    printf("População: %u\n", populationAmount_2);
    printf("Área (KM^2): %.2f\n", area_2);
    printf("PIB: %.2f R$\n", pib_2);
    printf("Número de pontos turísticos: %d\n", sights_2);
    printf("Densidade Populacional: %.2f\n", populationDensity_2);
    printf("PIB per capita: %.2f R$\n", pibCapita_2);
    printf("\n");

    // Comparação das cartas(cidades)

    printf("Comparação das cartas.\n");
    printf("População: Carta %d venceu! (%d)\n", 1 + (populationAmount_1 < populationAmount_2), populationAmount_1 < populationAmount_2);
    printf("Área: Carta %d venceu! (%d)\n", 1 + (area_1 < area_2), area_1 < area_2);
    printf("PIB: Carta %d venceu! (%d)\n", 1 + (pib_1 < pib_2), pib_1 < pib_2);
    printf("Pontos turísticos: Carta %d venceu! (%d)\n", 1 + (sights_1 < sights_2), sights_1 < sights_2);
    printf("Densidade Populacional: Carta %d venceu! (%d)\n", 1 + (populationDensity_1 > populationDensity_2), populationDensity_1 > populationDensity_2);
    printf("PIB per capita: Carta %d venceu! (%d)\n", 1 + (pibCapita_1 < pibCapita_2), pibCapita_1 < pibCapita_2);
    printf("Super Poder: Carta %d venceu! (%d)\n", 1 + (superPower_1 < superPower_2), superPower_1 < superPower_2);

    // Como não foi dito nada a respeito do if no desafio, eu tentei fazer uma implementação sem essa estrutura, me aproveitando do valor retornado na comparação somando com 1 para definir a carta vencedora.

    return 0;
}