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
    char codigo_carta01[10], codigo_carta02[10];
    int populacao01, populacao02;
    float area_km01, area_km02;
    float pib01, pib02;
    int pontos_turisticos01, pontos_turisticos02;
    float densidade01, densidade02;
    float percapta01, percapta02;
    
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

    densidade01 = populacao01 / area_km01; // Calculara Densidade Populacional
    densidade02 = populacao02 / area_km02; // Calculara Densidade Populacional

    percapta01 = pib01 / populacao01; // Calcular o Pib per Capta
    percapta02 = pib02 / populacao02; // Calcular o Pib per Capta


    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n--- Valores da Carta 01 ---\n");
    
    printf("\nEstado: %s\n", estado01);
    printf("Código da Carta: %s\n", codigo_carta01);
    printf("População: %i\n", populacao01);
    printf("Área em Km²: %.2f\n", area_km01);
    printf("PIB: %.3f\n", pib01);
    printf("Número de Pontos Turísticos: %i\n", pontos_turisticos01);
    printf("A densidade Populacional é: %.2f hab/km²\n", densidade01);
    printf("O Pib Per Capta é: %.2f reais", percapta01);

    printf("\n");

    printf("\n--- Valores da Carta 02 ---\n");
    
    printf("\n Estado: %s\n", estado02);
    printf("Código da Carta: %s\n", codigo_carta02);
    printf("População: %i\n", populacao02);
    printf("Área em Km²: %.2f\n", area_km02);
    printf("PIB: %.3f\n", pib02);
    printf("Número de Pontos Turísticos: %i\n", pontos_turisticos02);
    printf("A densidade Populacional é: %.2f hab/km²\n", densidade02);
    printf("O Pib Per Capta é: %.2f reais", percapta02);
    printf("\n");


    return 0;
}
