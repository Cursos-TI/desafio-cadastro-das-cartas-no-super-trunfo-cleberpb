#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado01[15], estado02[15];
    char codigo_carta01[3], codigo_carta02[3];
    int populacao01, populacao02;
    float area_km01, area_km02;
    float pib01, pib02;
    int pontos_turisticos01, pontos_turisticos02;
    
    // Cabeçalho do Jogo

    printf("*********************************\n");
    printf("* JOGO DE CARTAS - SUPER TRUNFO *\n");
    printf("*********************************\n");

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    printf("\n------ INSERINDO OS DADOS DA CARTA O1 -----\n"); // carta 01

    printf("\nEstado: ");
    scanf("%s", estado01);

    printf("Código da Carta: ");
    scanf("%s", codigo_carta01);

    printf("População: ");
    scanf("%i", &populacao01);

    printf("Área em Km²: ");
    scanf("%f", &area_km01);

    printf("PIB: ");
    scanf("%f", &pib01);

    printf("Números de Pontos Turísticos: ");
    scanf("%i", &pontos_turisticos01);

    printf("\n------ INSERINDO OS DADOS DA CARTA O2 -----\n"); // carta 02

    printf("\nEstado: ");
    scanf("%s", estado02);

    printf("Código da Carta: ");
    scanf("%s", codigo_carta02);

    printf("População: ");
    scanf("%i", &populacao02);

    printf("Área em Km²: ");
    scanf("%f", &area_km02);

    printf("PIB: ");
    scanf("%f", &pib02);

    printf("Números de Pontos Turísticos: ");
    scanf("%i", &pontos_turisticos02);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
