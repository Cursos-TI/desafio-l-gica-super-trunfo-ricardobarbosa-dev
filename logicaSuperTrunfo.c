#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo
struct Carta {
    char estado;                // Letra de 'A' a 'H'
    char codigo[4];             // Ex: "A01"
    char nomeCidade[50];       // Nome da cidade
    int populacao;             // População da cidade
    float area;                // Área em km²
    float pib;                 // PIB
    int pontosTuristicos;      // Quantidade de pontos turísticos
};

int main() {
    struct Carta cartas[2]; // Array de duas cartas

    printf("=== Cadastro de Cartas do Super Trunfo ===\n\n");

    for (int i = 0; i < 2; i++) {
        printf("Carta %d:\n", i + 1);

        // Estado
        printf("Estado (letra de A a H): ");
        scanf(" %c", &cartas[i].estado);

        // Código da carta
        printf("Código da carta (ex: A01): ");
        scanf("%s", cartas[i].codigo);

        // Nome da cidade
        printf("Nome da cidade: ");
        scanf(" %[^\n]", cartas[i].nomeCidade); // Lê até a quebra de linha

        // População
        printf("População: ");
        scanf("%d", &cartas[i].populacao);

        // Área
        printf("Área (km²): ");
        scanf("%f", &cartas[i].area);

        // PIB
        printf("PIB: ");
        scanf("%f", &cartas[i].pib);

        // Pontos turísticos
        printf("Número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);

        printf("\n");
    }

    // Exibindo os dados inseridos
    printf("=== Cartas Cadastradas ===\n\n");
    for (int i = 0; i < 2; i++) {
        printf("Carta %d:\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Cidade: %s\n", cartas[i].nomeCidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
        printf("\n");
    }

    return 0;
}
