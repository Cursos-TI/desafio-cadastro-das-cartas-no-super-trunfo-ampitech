#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Definindo as variáveis para armazenar os atributos da cidade
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Cadastro das Cartas
    printf("Informe o código da cidade: ");
    scanf("%d", &codigo);
    
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]s", nome); // A captura do nome pode ter espaços, por isso o uso de %[^\n]
    
    printf("Informe a população da cidade: ");
    scanf("%d", &populacao);
    
    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area);
    
    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);
    
    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos Dados das Cartas
    printf("\n--- Dados da Carta da Cidade ---\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}
