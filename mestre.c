#include<stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Cadastro das cartas
// Objetivo: No nível aventureiro vamos implementar a lógica para calcular e exibir duas novas propriedades

 // Área para definição das variáveis para armazenar as propriedades das cidades
int main() {
    char estado1;
    char codigo1[03];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int turistico1;
    float denspop1;
    float pibcap1;
    float invdenspop1;
    float superpoder1;

    // Área para entrada de dados
    //dados da primeira carta
    printf("Carta 1: \n");

    printf("Escolha uma letra de A a H que represente o estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código composto por a letra do estado e um número de 01 a 04: \n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade1);

    printf("Digite a população da cidade: \n");
    scanf(" %i", &populacao1);

    printf("Digite a área em km2: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite quantos pontos turísticos essa cidade tem: \n");
    scanf(" %i", &turistico1);

    //calculos
    denspop1 = (float)populacao1/area1;
    pibcap1 = (float)pib1/populacao1;
    invdenspop1 = (float) 1/denspop1;
    superpoder1 = (float) populacao1 + area1 + pib1 + turistico1 + pibcap1 + invdenspop1;

   //area para resultado dos calculos

    printf("A densidade populacional é: %.2f \n", denspop1);

    printf("O pib per capita é: %.2f \n", pibcap1);

    printf("O inverso da densidade populacional é %f \n", invdenspop1);

    printf("O super poder da carta é %.2f \n", superpoder1);


    //dados da segunda carta

    char estado2;
    char codigo2[03];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;
    float denspop2;
    float pibcap2;
    float invdenspop2;
    float superpoder2;

    printf("Carta 2: \n");

    printf("Escolha uma letra de A a H que represente o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código composto por a letra do estado e um número de 01 a 04: \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade2);

    printf("Digite a população da cidade: \n");
    scanf(" %i", &populacao2);

    printf("Digite a área em km2: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib2);

    printf("Digite quantos pontos turísticos essa cidade tem: \n");
    scanf(" %i", &turistico2);

    //calculos
    denspop2 = (float)populacao2/area2;
    pibcap2 = (float)pib2/populacao2;
    invdenspop2 = (float) 1/denspop2;
    superpoder2 = (float) populacao2 + area2 + pib2 + turistico2 + pibcap2 + invdenspop2;

   //area para resultado dos calculos

    printf("A densidade populacional é: %.2f \n", denspop2);

    printf("O pib per capita é: %.2f \n", pibcap2);

    printf("O inverso da densidade populacional é %f \n", invdenspop2);

    printf("O super poder da carta é %.2f \n", superpoder2);
    
   
    // área do resultado da comparação das duas cartas

    printf("População: Carta 1 venceu %d\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu %d\n", area1 > area2);
    printf("PIB: Carta 1 venceu %d\n", pib1 > pib2);
    printf("Pontos turísticos: Carta 1 venceu %d\n", turistico1 > turistico2);
    printf("Densidade Populacional: Carta 1 venceu %d\n", denspop1 > denspop2);
    printf("Pib per capita: Carta 1 venceu %d\n", pibcap1 > pibcap2);
    printf("Super Poder: Carta 1 venceu %d\n", superpoder1 > superpoder2);
    

    return 0;

}
