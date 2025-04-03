#include <stdio.h>


struct Cidade {
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;
};

int main() {
   
    struct Cidade cidade1, cidade2;

   
    printf("Digite os dados para a primeira cidade:\n");
    printf("População: ");
    scanf("%d", &cidade1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &cidade1.area);
    printf("PIB (em milhões): ");
    scanf("%f", &cidade1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &cidade1.num_pontos_turisticos);

    printf("Digite os dados para a segunda cidade:\n");
    printf("População: ");
    scanf("%d", &cidade2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &cidade2.area);
    printf("PIB (em milhões): ");
    scanf("%f", &cidade2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &cidade2.num_pontos_turisticos);

 
    printf("\n--- Dados da Primeira Cidade ---\n");
    printf("População: %d\n", cidade1.populacao);
    printf("Área: %.2f km²\n", cidade1.area);
    printf("PIB: %.2f milhões\n", cidade1.pib);
    printf("Número de pontos turísticos: %d\n", cidade1.num_pontos_turisticos);

    printf("\n--- Dados da Segunda Cidade ---\n");
    printf("População: %d\n", cidade2.populacao);
    printf("Área: %.2f km²\n", cidade2.area);
    printf("PIB: %.2f milhões\n", cidade2.pib);
    printf("Número de pontos turísticos: %d\n", cidade2.num_pontos_turisticos);

       
        return 0;
    
}



 












