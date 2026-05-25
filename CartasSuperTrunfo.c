#include <stdio.h>
#include <locale.h>

int main(void)
{
  /* Para reconhecer os caracteres especiais */
  setlocale(LC_ALL, "pt_BR.UTF-8");
  setlocale(LC_NUMERIC, "C");

    /* Para armazenar os dados da primeira carta 1 e 2 */

    char estado1, estado2;
    char código1[5], código2[5];
    char cidade1[50], cidade2[50];
    int população1, população2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    int pontosTurísticos1, pontosTurísticos2;

    /* Leitura dos dados da Carta 1 */

    printf("Cadastro da Carta 1:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf(" %4s", código1);

    printf("Informe o nome da cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Informe a população: ");
    scanf("%d", &população1);

    printf("Informe a área (km2): ");
    scanf("%f", &area1);

    printf("Informe o PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTurísticos1);

     densidade1 = população1 / area1;
     pibPerCapita1 = (pib1 * 1000) / população1; // Convertendo PIB para milhões de reais e calculando per capita

    /* Leitura dos dados da Carta 2 */

    printf("\nCadastro da Carta 2:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: B02): ");
    scanf(" %4s", código2);

    printf("Informe o nome da cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Informe a população: ");
    scanf("%d", &população2);

    printf("Informe a área (km2): ");
    scanf("%f", &area2);

    printf("Informe o PIB (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTurísticos2);

     densidade2 = população2 / area2;
     pibPerCapita2 = (pib2 * 1000) / população2; // Convertendo PIB para milhões de reais e calculando per capita

    /* Exibição dos dados cadastrados para Carta 1 */

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", código1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", população1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTurísticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f mil reais\n", pibPerCapita1);
    /* Exibição dos dados cadastrados para Carta 2 */

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", código2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTurísticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f mil reais\n", pibPerCapita2);

    return 0;


}
