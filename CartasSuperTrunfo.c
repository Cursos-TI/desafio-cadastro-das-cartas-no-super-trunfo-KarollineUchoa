#include <stdio.h>

typedef struct {
    char codigo[50]; // Permite espaços no nome da cidade
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

int main() {
    Cidade cidade1, cidade2;

    printf("Cadastro da primeira cidade:\n");
    printf("Codigo (ex: A01): ");
    scanf(" %[^\n]s", cidade1.codigo); // Captura espaços
    printf("Populacao: ");
    scanf("%d", &cidade1.populacao);
    printf("Area (km2): ");
    scanf("%f", &cidade1.area);
    printf("PIB (bilhoes de dolares): ");
    scanf("%f", &cidade1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &cidade1.pontos_turisticos);

    printf("\nCadastro da segunda cidade:\n");
    printf("Codigo (ex: B02): ");
    scanf(" %[^\n]s", cidade2.codigo); // Captura espaços
    printf("Populacao: ");
    scanf("%d", &cidade2.populacao);
    printf("Area (km2): ");
    scanf("%f", &cidade2.area);
    printf("PIB (bilhoes de dolares): ");
    scanf("%f", &cidade2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &cidade2.pontos_turisticos);

    printf("\n=== Cidades Cadastradas ===\n");

    printf("\nCidade 1 - Codigo: %s\n", cidade1.codigo);
    printf("Populacao: %d habitantes\n", cidade1.populacao);
    printf("Area: %.2f km2\n", cidade1.area);
    printf("PIB: %.2f bilhoes de dolares\n", cidade1.pib);
    printf("Pontos turisticos: %d\n", cidade1.pontos_turisticos);

    printf("\nCidade 2 - Codigo: %s\n", cidade2.codigo);
    printf("Populacao: %d habitantes\n", cidade2.populacao);
    printf("Area: %.2f km2\n", cidade2.area);
    printf("PIB: %.2f bilhoes de dolares\n", cidade2.pib);
    printf("Pontos turisticos: %d\n", cidade2.pontos_turisticos);

    return 0;
}

