#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

  int main() {
    // Carta 1
    char estado[3];
    char codigoc [4];
    char cidade[50];
    unsigned long int populacao;
    float areaemkm;
    float pib;
    int pontot;

    // Carta 2
    char estado2[3];
    char codigoc2 [4];
    char cidade2[50];
    unsigned long int populacao2;
    float areaemkm2;
    float pib2;
    int pontot2;

    // Cálculos
    float densidade;
    float pibp;
    float super_poder1;
    float densidade2;
    float pibp2;
    float super_poder2;

    // Entrada de dados da carta 1
    printf("Insira os dados da carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado);
    printf("Código: ");
    scanf("%s", codigoc);
    getchar(); // limpa o '\n' do buffer
    printf("Nome da Cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0'; // remove o '\n' do final
    printf("População: ");
    scanf("%lu", &populacao);
    printf("Área (km²): ");
    scanf("%f", &areaemkm);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontot);

    // Entrada de dados da carta 2
    printf("\nInsira os dados da carta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código: ");
    scanf("%s", codigoc2);
    getchar();
    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &areaemkm2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontot2);

    // Cálculos
    densidade = populacao / areaemkm;
    pibp = (pib * 1000000000.0) / populacao;
    super_poder1 = (float)populacao + areaemkm + pib + pontot + pibp + (1.0f / densidade);

    densidade2 = populacao2 / areaemkm2;
    pibp2 = (pib2 * 1000000000.0) / populacao2;
    super_poder2 = (float)populacao2 + areaemkm2 + pib2 + pontot2 + pibp2 + (1.0f / densidade2);

    // Exibição das cartas
    printf("\nCarta 1:\n\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoc);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", areaemkm);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontot);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibp);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\nCarta 2:\n\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoc2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areaemkm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontot2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibp2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    printf("\nComparação de Cartas:\n\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", areaemkm > areaemkm2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontot > pontot2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibp > pibp2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}