#include <stdio.h>
#include <string.h>

int main() {
    // Variaveis

    char state_1, code_1[5], city_1[50];
    int populationAmount_1, sights_1;
    float area_1, pib_1;

    char state_2, code_2[5], city_2[50];
    int populationAmount_2, sights_2;
    float area_2, pib_2;

    // Leitura dos dados - Cidade 01

    printf("Insira o estado da cidade: \n");
    scanf("%c", &state_1);

    printf("Insira o código da cidade: \n");
    scanf("%s", code_1);
    getchar(); // Retira a quebra de linha do comando de leitura para que o próximo comando funcione corretamente, faça isso sempre que alterar entre leitura de chars, strings e numbers - float, int, double...

    printf("Insira o nome da cidade: \n");
    fgets(city_1, 49, stdin); // Faz a leitura do teclado(stdin), obecedendo o espaçamento e capturando todos os elementos corretamente
    city_1[strcspn(city_1, "\n")] = 0; // Apaga a quebra de linha gerada pelo fgets, substituindo pelo 0.

    printf("Quantas pessoas vivem nessa cidade: \n");
    scanf("%i", &populationAmount_1);

    printf("Qual a area aproximada dessa cidade: \n");
    scanf("%f", &area_1);

    printf("Qual o valor aproximado do PIB dessa cidade: \n");
    scanf("%f", &pib_1);

    printf("Quantos pontos turísticos há nessa cidade: \n");
    scanf("%i", &sights_1);

    getchar(); // Retira a quebra de linha do comando de leitura para que o próximo comando funcione corretamente, faça isso sempre que alterar entre leitura de chars, strings e numbers - float, int, double...

    // Leitura dos dados - Cidade 02

    printf("Insira o estado da cidade: \n");
    scanf("%c", &state_2);

    printf("Insira o código da cidade: \n");
    scanf("%s", code_2);
    getchar(); // Retira a quebra de linha do comando de leitura para que o próximo comando funcione corretamente, faça isso sempre que alterar entre leitura de chars, strings e numbers - float, int, double...

    printf("Insira o nome da cidade: \n");
    fgets(city_2, 49, stdin); // Faz a leitura do teclado(stdin), obecedendo o espaçamento e capturando todos os elementos corretamente
    city_2[strcspn(city_2, "\n")] = 0; // Apaga a quebra de linha gerada pelo fgets, substituindo pelo 0.

    printf("Quantas pessoas vivem nessa cidade: \n");
    scanf("%i", &populationAmount_2);

    printf("Qual a area aproximada dessa cidade: \n");
    scanf("%f", &area_2);

    printf("Qual o valor aproximado do PIB dessa cidade: \n");
    scanf("%f", &pib_2);

    printf("Quantos pontos turísticos há nessa cidade: \n");
    scanf("%i", &sights_2);

    // Apresentação dos dados - Cidade 01

    printf("\n");
    printf("Carta 1: \n");
    printf("Estado: %c\n", state_1);
    printf("Código: %s\n", code_1);
    printf("Nome da cidade: %s\n", city_1);
    printf("População: %i\n", populationAmount_1);
    printf("Área (KM^2): %.2f\n", area_1);
    printf("PIB: %.2f R$\n", pib_1);
    printf("Número de pontos turísticos: %d\n", sights_1);
    printf("\n");

    // Apresentação dos dados - Cidade 02

    printf("\n");
    printf("Carta 2: \n");
    printf("Estado: %c\n", state_2);
    printf("Código: %s\n", code_2);
    printf("Nome da cidade: %s\n", city_2);
    printf("População: %i\n", populationAmount_2);
    printf("Área (KM^2): %.2f\n", area_2);
    printf("PIB: %.2f R$\n", pib_2);
    printf("Número de pontos turísticos: %d\n", sights_2);
    printf("\n");

    return 0;
}