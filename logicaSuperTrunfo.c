#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado_A[50], estado_B[50], codigo1[10], codigo2[10], cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int turismo1, turismo2;
    float area1, area2, PIB1, PIB2, densipop1, densipop2, pibcap1, pibcap2, superpoder1, superpoder2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    //Cadastro da primeira carta
    printf("Insira o nome do estado: ");
    scanf(" %50[^\n]", estado_A); //Ajuste para nomes compostos

    printf("Insira o código da carta: ");
    scanf(" %s", codigo1);

    printf("Insira o nome de uma cidade pentencente a %s: ", estado_A);
    scanf(" %50[^\n]", cidade1);

    printf("Qual é a população de %s? ", cidade1);
    scanf(" %lu", &populacao1);

    printf("Qual é a área de %s em km²? ", cidade1);
    scanf(" %f", &area1);

    printf("Qual é o PIB de %s? ", cidade1);
    scanf(" %f", &PIB1);

    printf("Quantos pontos turísticos existem em %s? ", cidade1);
    scanf(" %d", &turismo1);

    densipop1 = populacao1 / area1;

    pibcap1 = PIB1 / populacao1;

    superpoder1 = (float) populacao1 + turismo1 + area1 + PIB1 + pibcap1 + (area1 / populacao1);


    //Impressão da primeira carta
    printf("Carta cadastrada com sucesso!\n");

    
    printf("Estado: %s\n", estado_A);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População de %s: %lu\n", cidade1, populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turísticos: %d\n", turismo1);
    printf("Densidade populacional: %.2f hab/km²\n", densipop1);
    printf("PIB per capita: %.2f reais\n", pibcap1);


    //Cadastro da segunda carta
    printf("Insira o nome do estado: ");
    scanf(" %50[^\n]", estado_B);

    printf("Insira o código da carta: ");
    scanf(" %s", codigo2);

    printf("Insira o nome de uma cidade pertencente a %s: ", estado_B);
    scanf(" %50[^\n]", cidade2);

    printf("Qual é a população de %s? ", cidade2);
    scanf(" %lu", &populacao2);

    printf("Qual é a área de %s em km²? ", cidade2);
    scanf(" %f", &area2);

    printf("Qual é o PIB de %s? ", cidade2);
    scanf(" %f", &PIB2);

    printf("Quantos pontos turísticos existem em %s? ", cidade2);
    scanf(" %d", &turismo2);

    densipop2 = populacao2 / area2;

    pibcap2 = PIB2 / populacao2;

    superpoder2 = (float) populacao2 + turismo2 + area2 + PIB2 + pibcap2 + (area2 / populacao2);
   
    //Impressão da segunda carta
    printf("Carta cadastrada com sucesso!\n");

    printf("Estado: %s\n", estado_B);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População de %s: %lu\n", cidade2, populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f hab/km²\n", densipop2);
    printf("PIB per capita: %.2f reais\n", pibcap2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    //Comparação entre as cartas e resultado da vencedora
    printf("Resultado da disputa entre as Cartas\n");
    printf("Primeiro confronto: População\n");
    if (populacao1 > populacao2){
        printf("Carta %s venceu!\n", codigo1);
    } else {
        printf("Carta %s venceu!\n", codigo2);
    }
    
    printf("Segundo confronto: Área\n");
    if (area1 > area2){
        printf("Carta %s venceu!\n", codigo1);
    } else {
        printf("Carta %s venceu!\n", codigo2);
    }

    printf("Terceiro confronto: PIB\n");
    if (PIB1 > PIB2){
        printf("Carta %s venceu!\n", codigo1);
    } else {
        printf("Carta %s venceu!\n", codigo2);
    }

    printf("Quarto confronto: Turismo\n");
    if (turismo1 > turismo2){
        printf("Carta %s venceu!\n", codigo1);
    } else {
        printf("Carta %s venceu!\n", codigo2);
    }

    printf("Quinto confronto: Densidade Populacional\n");
    if (densipop2 > densipop1){
        printf("Carta %s venceu!\n", codigo1);
    } else {
        printf("Carta %s venceu!\n", codigo2);
    }

    printf("Sexto confronto: PIB per capita\n");
    if (pibcap1 > pibcap2){
        printf("Carta %s venceu!\n", codigo1);
    } else {
        printf("Carta %s venceu!\n", codigo2);
    }

    printf("Sétimo confronto: Superpoder\n");
    if (superpoder1 > superpoder2){
        printf("Carta %s venceu!\n", codigo1);
    } else {
        printf("Carta %s venceu!\n", codigo2);
    } 

    return 0;
}
