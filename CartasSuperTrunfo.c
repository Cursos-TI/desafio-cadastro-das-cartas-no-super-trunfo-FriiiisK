#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

   int main() {
    //carta1
    char estado[3];
    char codigoc[4];
    char cidade[50];
    int populacao;
    float areaemkm;
    float pib;
    int pontot;
    // carta 2
    char estado2[3];
    char codigoc2[4];
    char cidade2[50];
    int populacao2;
    float areaemkm2;
    float pib2;
    int pontot2;

    // dados carta 1
    printf ("insira os dados da carta 01:\n");
    printf("Estado: ");
    scanf("%s", estado);
    printf("Código: ");
    scanf("%s", codigoc);
    getchar(); // Limpa o '\n' pra funcionar o fgets, pra não pular ele
    printf("Nome da Cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área: ");
    scanf("%f", &areaemkm);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontot);
    printf ("\n"); // só pra pular uma linha
    // dados carta 2
    printf ("insira os dados da carta 02:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código: ");
    scanf("%s", codigoc2);
    getchar(); // Limpa o '\n' pra funcionar o fgets, pra não pular ele
    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &areaemkm2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontot2);

    // impressão da carta 1
    printf("\nCARTA 01:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoc);
    printf("Nome da Cidade: %s", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", areaemkm);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontot);

    // impressão da carta 2
    printf("\nCARTA 02:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoc2);
    printf("Nome da Cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areaemkm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontot2);

    return 0;
}