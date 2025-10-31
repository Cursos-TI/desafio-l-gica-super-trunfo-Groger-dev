#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado_A[50], estado_B[50], codigo1[10], codigo2[10], cidade1[50], cidade2[50], escolha1, escolha2, nomeatributo1[50], nomeatributo2[50];
    unsigned long int populacao1, populacao2;
    int turismo1, turismo2, Primeiradisputa, Segundadisputa;
    float area1, area2, PIB1, PIB2, densipop1, densipop2, pibcap1, pibcap2, superpoder1, superpoder2, primeiroatributo1, segundoatributo1, primeiroatributo2, segundoatributo2, soma1, soma2;
    
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
    // Nível avançado: menus interativos, operador ternário e estruturas de decisão;

    //Comparação entre as cartas
    printf("## Menu de comparação entre as cartas ##\n");
    printf("Disputas por atributo:\n");
    
    printf("A. População\n");
    printf("B. Área\n");
    printf("C. PIB\n");
    printf("D. Pontos turísticos\n");
    printf("E. Densidade populacional\n");
    printf("F. PIB per capita\n");
    
    printf("Digite sua escolha: ");
    scanf(" %c", &escolha1);

    switch (escolha1)
    {
    case 'A':
    case 'a':
        printf("Você escolheu o atributo População\n");
        
        Primeiradisputa = populacao1 > populacao2 ? 1 : 0;
        
        break;
    case 'B':
    case 'b':
        printf("Você escolheu o atributo Área\n");
    
        Primeiradisputa = area1 > area2 ? 1 : 0;

        break;
    case 'C':
    case 'c':
        printf("Você escolheu o atributo PIB\n");
    
        Primeiradisputa = PIB1 > PIB2 ? 1 : 0;

        break;
    case 'D':
    case 'd':
        printf("Você escolheu o atributo Pontos Turísticos\n");
    
        Primeiradisputa = turismo1 > turismo2 ? 1 : 0;

        break;
    case 'E':
    case 'e':
        printf("Você escolheu o atributo Densidade Populacional\n");
    
        Primeiradisputa = densipop1 < densipop2 ? 1 : 0;

        break;
    case 'F':
    case 'f':
        printf("Você escolheu o atributo PIB per capita\n");

        Primeiradisputa = pibcap1 > pibcap2 ? 1 : 0;

        break;
        
    //No caso de o jogador inserir um caractere diferente das opções A-F o programa executa o default e interrompe o programa;   
    default:
        printf("Opção inválida!\n");

        break;
    }

    printf("!! Segunda disputa !! Ps.: escolha um atributo diferente do primeiro\n");
    
    printf("A. População\n");
    printf("B. Área\n");
    printf("C. PIB\n");
    printf("D. Pontos turísticos\n");
    printf("E. Densidade populacional\n");
    printf("F. PIB per capita\n");
    
    printf("Digite sua escolha: ");
    scanf(" %c", &escolha2);

    //Caso o usuários escolha seja igual à primeira o código irá parar;
    if (escolha1 == escolha2) {
        printf("Você já escolheu esse atributo! Tente novamente\n");
    } else {
    
        switch (escolha2)
        {
        case 'A':
        case 'a':
            printf("Você escolheu o atributo População\n");
        
            Segundadisputa = populacao1 > populacao2 ? 1 : 0;
        
            break;
        case 'B':
        case 'b':
            printf("Você escolheu o atributo Área\n");
    
            Segundadisputa = area1 > area2 ? 1 : 0;

            break;
        case 'C':
        case 'c':
            printf("Você escolheu o atributo PIB\n");
    
            Segundadisputa = PIB1 > PIB2 ? 1 : 0;

            break;
        case 'D':
        case 'd':
            printf("Você escolheu o atributo Pontos Turísticos\n");
    
            Segundadisputa = turismo1 > turismo2 ? 1 : 0;

            break;
        case 'E':
        case 'e':
            printf("Você escolheu o atributo Densidade Populacional\n");
    
            Segundadisputa = densipop1 < densipop2 ? 1 : 0;

            break;
        case 'F':
        case 'f':
            printf("Você escolheu o atributo PIB per capita\n");

            Segundadisputa = pibcap1 > pibcap2 ? 1 : 0;

            break;
        
        default:
            printf("Opção inválida!\n");

            break;
        }
    

        //Resultado das disputas
    
        if (Primeiradisputa == 1){
        printf("A carta %s venceu a primeira disputa!!\n", codigo1);

        } else {
        printf("A carta %s venceu a primeira disputa!!\n", codigo2);
        }


        if (Segundadisputa == 1){
            printf("A carta %s venceu a segunda disputa!!\n", codigo1);

        } else {
            printf("A carta %s venceu a segunda disputa!!\n", codigo2);
        }

        //Cálculo da soma dos atributos escolhidos para cada carta
        //Ganha a carta com a maior soma dos dois atributos escolhidos
    
        if (escolha1 == 'A' || escolha1 == 'a'){
            primeiroatributo1 = populacao1;
            primeiroatributo2 = populacao2;

        } else if (escolha1 == 'B' || escolha1 == 'b'){
            primeiroatributo1 = area1;
            primeiroatributo2 = area2;
        
        } else if (escolha1 == 'C' || escolha1 == 'c'){
            primeiroatributo1 = PIB1;
            primeiroatributo2 = PIB2;
        
        } else if (escolha1 == 'D' || escolha1 == 'd'){
            primeiroatributo1 = turismo1;
            primeiroatributo2 = turismo2;
        
        } else if (escolha1 == 'E' || escolha1 == 'e'){
            primeiroatributo1 = densipop1;
            primeiroatributo2 = densipop2;
        
        } else if (escolha1 == 'F' || escolha1 == 'f'){
            primeiroatributo1 = pibcap1;
            primeiroatributo2 = pibcap2;
        
        }
 
        if (escolha2 == 'A' || escolha2 == 'a'){
            segundoatributo1 = populacao1;
            segundoatributo2 = populacao2;
        
        } else if (escolha2 == 'B' || escolha2 == 'b'){
            segundoatributo1 = area1;
            segundoatributo2 = area2;
        
        } else if (escolha2 == 'C' || escolha2 == 'c'){
            segundoatributo1 = PIB1;
            segundoatributo2 = PIB2;
        
        } else if (escolha2 == 'D' || escolha2 == 'd'){
            segundoatributo1 = turismo1;
            segundoatributo2 = turismo2;
        
        } else if (escolha2 == 'E' || escolha2 == 'e'){
            segundoatributo1 = densipop1;
            segundoatributo2 = densipop2;
        
        } else if (escolha2 == 'F' || escolha2 == 'f'){
            segundoatributo1 = pibcap1;
            segundoatributo2 = pibcap2;
        

        }
        

        soma1 = primeiroatributo1 + segundoatributo1;
        soma2 = primeiroatributo2 + segundoatributo2;

        // Resultado final da rodada. Qual carta será que ganhou? \_'o'_/
    
        printf("Carta: %s\n", codigo1);
        printf("Estado: %s\n", estado_A);
        printf("Atributos escolhidos: %c e %c\n", escolha1, escolha2);
        printf("Valor: %.2f e %.2f\n", primeiroatributo1, segundoatributo1);
        printf("Soma dos atributos: %.2f\n", soma1);

        printf("Carta: %s\n", codigo2);
        printf("Estado: %s\n", estado_B);
        printf("Atributos escolhidos: %c e %c\n", escolha1, escolha2);
        printf("Valor: %.2f e %.2f\n", primeiroatributo2, segundoatributo2);
        printf("Soma dos atributos: %.2f\n", soma2);

        if (soma1 > soma2){
            printf("A carta %s venceu!!!\n", codigo1);

        } else if (soma1 < soma2){
            printf("A carta %s venceu!!!\n", codigo2);

        } else {
            printf("Empatou, as duas cartas possuem somas iguais dos seus atributos\n");

        }
        
    } //Fim do else que verifica se as escolhas são iguais

    return 0;
}
