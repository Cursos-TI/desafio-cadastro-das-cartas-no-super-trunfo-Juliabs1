#include <stdio.h>

// Estrutura para guardar os dados de uma carta
typedef struct {
    char nome[50];
    unsigned long int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

// Função para calcular os valores derivados da carta
void calcular_atributos(Carta *carta) {
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / carta->populacao;
    carta->super_poder = carta->populacao + carta->area + carta->pib + carta->pontos_turisticos + carta->pib_per_capita + (1 / carta->densidade_populacional);
}

// Função para preencher os dados de uma carta
void inserir_carta(Carta *carta) {
    printf("Nome da carta: ");
    scanf(" %[^\n]", carta->nome);
    printf("População: ");
    scanf("%lu", &carta->populacao);
    printf("Área: ");
    scanf("%f", &carta->area);
    printf("PIB: ");
    scanf("%lf", &carta->pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
    calcular_atributos(carta);
}

// Função para comparar os valores entre as cartas e mostrar o vencedor
void comparar_cartas(const char *atributo, float valor1, float valor2, int criterio) {
    int resultado = (criterio == 1) ? (valor1 > valor2) : (valor1 < valor2);
    printf("%s: Carta %d venceu (%d)\n", atributo, resultado ? 1 : 2, resultado);
}

int main() {
    Carta carta1, carta2;
    printf("\n--- Preenchendo Carta 1 ---\n");
    inserir_carta(&carta1);
    printf("\n--- Preenchendo Carta 2 ---\n");
    inserir_carta(&carta2);
    
    printf("\nResultado da Batalha:\n");
    comparar_cartas("População", carta1.populacao, carta2.populacao, 1);
    comparar_cartas("Área", carta1.area, carta2.area, 1);
    comparar_cartas("PIB", carta1.pib, carta2.pib, 1);
    comparar_cartas("Pontos Turísticos", carta1.pontos_turisticos, carta2.pontos_turisticos, 1);
    comparar_cartas("Densidade Populacional", carta1.densidade_populacional, carta2.densidade_populacional, 0);
    comparar_cartas("PIB per Capita", carta1.pib_per_capita, carta2.pib_per_capita, 1);
    comparar_cartas("Super Poder", carta1.super_poder, carta2.super_poder, 1);
    
    return 0;
}
