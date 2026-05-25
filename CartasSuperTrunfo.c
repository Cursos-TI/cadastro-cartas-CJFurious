#include <stdio.h>
#include <locale.h>

int main(void)
{
  // Para reconhecer os caracteres especiais 
  setlocale(LC_ALL, "pt_BR.UTF-8");
  setlocale(LC_NUMERIC, "C");

    // Para armazenar os dados da primeira carta 1 e 2

    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    int pontosTuristicos1, pontosTuristicos2;

    // Leitura dos dados da Carta 1

    printf("Cadastro da Carta 1:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf(" %4s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Informe a população: ");
    scanf("%d", &populacao1);

    printf("Informe a área (km2): ");
    scanf("%f", &area1);

    printf("Informe o PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da Carta 2

    printf("\nCadastro da Carta 2:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: B02): ");
    scanf(" %4s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Informe a populacao: ");
    scanf("%d", &populacao2);

    printf("Informe a area (km2): ");
    scanf("%f", &area2);

    printf("Informe o PIB (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);


    // Exibicao dos dados cadastrados para Carta 1

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibicao dos dados cadastrados para Carta 2

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;


}
