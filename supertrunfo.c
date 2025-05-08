#include <stdio.h>

// Definição da estrutura para representar uma carta (cidade)
struct Carta {
    char codigo[4]; // Ex: A01
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    // Declaração de duas cartas
    struct Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Código (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões de dólares): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    printf("\n");

    // Cadastro da segunda carta
    printf("Cadastro da segunda carta:\n");
    printf("Código (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões de dólares): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    printf("\n");

    // Exibição dos dados cadastrados
    printf("Dados das cartas cadastradas:\n");

    printf("Carta 1 (%s):\n", carta1.codigo);
    printf("  População: %d\n", carta1.populacao);
    printf("  Área: %.2f km²\n", carta1.area);
    printf("  PIB: %.2f bilhões de dólares\n", carta1.pib);
    printf("  Pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("\n");

    printf("Carta 2 (%s):\n", carta2.codigo);
    printf("  População: %d\n", carta2.populacao);
    printf("  Área: %.2f km²\n", carta2.area);
    printf("  PIB: %.2f bilhões de dólares\n", carta2.pib);
    printf("  Pontos Turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}





