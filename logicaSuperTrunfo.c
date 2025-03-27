#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado1, estado2;
    char codigoCarta1[10], codigoCarta2[10];
    char nomeCidade1[30], nomeCidade2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int opcaoAtributo1, opcaoAtributo2;
    int numerosTuristicos1, numerosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float poderCarta1, poderCarta2, valorAtributo1_Carta1, valorAtributo1_Carta2, valorAtributo2_Carta1, valorAtributo2_Carta2;
    int opcaoSwitch;


   //entrada de dados utilizadas no primeiro desafio (apenas copiada e coladaa)
    printf("--------**DIGITE A PRIMEIRA CARTA**------------------\n");

    printf("Digite qual e a letra do estado da carta: \n");
    scanf(" %c", &estado1); 
    
    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigoCarta1); 
    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Qual a populacao da cidade: \n");
    scanf("%d", &populacao1);

    printf("Qual a area em km² da cidade: \n");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Qual a quantidade de pontos turisticos nessa cidade: \n");
    scanf("%d", &numerosTuristicos1);


    //Realizar a mesma coisa que a primeira carta apenas trocando as variaveis que serao utilizadas pois precisam referenciar as da segunda carta
    printf("--------DIGITE A SEGUNDA CARTA AGORA------------------\n");

    printf("Digite qual e a letra do estado da carta: \n");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigoCarta2);
    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Qual a populacao da cidade: \n");
    scanf("%d", &populacao2);

    printf("Qual a area em km² da cidade: \n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turisticos nessa cidade: \n");
    scanf("%d", &numerosTuristicos2);


    //calculo da densidade demografiaca
    densidadePopulacional1 = (float) populacao1 / area1; 
    densidadePopulacional2 = (float) populacao2 / area2;


    system("cls");
    //escolha do primeiro atributo a ser comparado
    printf("Escolha o primeiro atributo: \n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    scanf("%d", &opcaoAtributo1);


    //Escolha do segundo atributo a ser comparado
    printf("Escolha o segundo atributo: \n");
    printf("Note que: o atributo %d ja foi escolhido\n", opcaoAtributo1);
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    scanf("%d", &opcaoAtributo2);


    //estrutura de repeticao que vai impedir que os atributos sejam os mesmos
    while(opcaoAtributo1 == opcaoAtributo2){
      printf("Voce nao pode escolher os mesmos atributos para comparacao\n");
      printf("Escolha novamente:  ");
      scanf("%d", &opcaoAtributo2);
    }

    system("cls");
    printf("---- PRIMEIRA COMPARACAO ----\n");
    switch(opcaoAtributo1){
      case 1:
       valorAtributo1_Carta1 = populacao1;
       valorAtributo1_Carta2 = populacao2;
       printf("ATRIBUTO COMPARADO (Populacao)\n");
       printf("Populacao Carta 1: %lu\n", populacao1);
       printf("Populacao Carta 2: %lu\n", populacao2);
       printf("%s\n", (populacao1 == populacao2) ? "Houve empate!!\n" : 
            (populacao1 > populacao2) ? "### A Carta 1 Ganhou! ###\n" : "### A Carta 2 Ganhou! ###\n");
       break;

      case 2: //area
       valorAtributo1_Carta1 = area1;
       valorAtributo1_Carta2 = area2;
       printf("ATRIBUTO COMPARADO (Area)\n");
       printf("Area Carta 1: %.2f\n", area1);
       printf("Area Carta 2: %.2f\n", area2);
       printf("%s\n", (area1 == area2) ? "Houve empate!!\n" : 
            (area1 > area2) ? "### A Carta 1 Ganhou! ###\n" : "### A Carta 2 Ganhou! ###\n");
      
      break;

      case 3: //PIB
       valorAtributo1_Carta1 = pib1;
       valorAtributo1_Carta2 = pib2;
       printf("ATRIBUTO COMPARADO (PIB)\n");
       printf("PIB Carta 1: %.2f\n", pib1);
       printf("PIB Carta 2: %.2f\n", pib2);
       printf("%s\n", (pib1 == pib2) ? "Houve empate!!\n" : 
            (pib1 > pib2) ? "### A Carta 1 Ganhou! ###" : "### A Carta 2 Ganhou! ###\n");
       break;

      case 4: //pontos turisticos
       valorAtributo1_Carta1 = numerosTuristicos1;
       valorAtributo1_Carta2 = numerosTuristicos2;
       printf("ATRIBUTO COMPARADO (Pontos Turisticos)\n");
       printf("Numero de Pontos Turisticos Carta 1: %d\n", numerosTuristicos1);
       printf("Numero de Pontos Turisticos Carta 2: %d\n", numerosTuristicos2);
       printf("%s\n", (numerosTuristicos1 == numerosTuristicos2) ? "Houve um empate!!\n" : 
             (numerosTuristicos1 > numerosTuristicos2) ? "### A Carta 1 Ganhou! ###\n" : "### A Carta 2 Ganhou! ###\n");
       break;

      case 5: //densidade demografica (menor vence)
       valorAtributo1_Carta1 = densidadePopulacional1;
       valorAtributo1_Carta2 = densidadePopulacional2;
       printf("ATRIBUTO COMPARADO (Densidade Demografica)\n");
       printf("Densidade Carta 1: %.2f\n", densidadePopulacional1);
       printf("Densidade Carta 2: %.2f\n", densidadePopulacional2);
       printf("%s\n", (densidadePopulacional1 == densidadePopulacional2) ? "Houve um Empate!!\n" : 
             (densidadePopulacional2 > densidadePopulacional1) ? "### A Carta 1 Ganhou! ###\n" : "### A Carta 2 Ganhou! ###\n");
       break;
    }


    printf("---- SEGUNDA COMPARACAO ----\n");
    switch(opcaoAtributo2){
      case 1:
       valorAtributo2_Carta1 = populacao1;
       valorAtributo2_Carta2 = populacao2;
       printf("ATRIBUTO COMPARADO (Populacao)\n");
       printf("Populacao Carta 1: %d\n", populacao1);
       printf("Populacao Carta 2: %d\n", populacao2);
       printf("%s\n", (populacao1 == populacao2) ? "Houve empate!!\n" : 
            (populacao1 > populacao2) ? "### A Carta 1 Ganhou! ###\n" : "### A Carta 2 Ganhou! ###\n");
       break;

      case 2: //area
       valorAtributo2_Carta1 = area1;
       valorAtributo2_Carta2 = area2;
       printf("ATRIBUTO COMPARADO (Area)\n");
       printf("Area Carta 1: %.2f\n", area1);
       printf("Area Carta 2: %.2f\n", area2);
       printf("%s\n", (area1 == area2) ? "Houve empate!!\n" : 
            (area1 > area2) ? "### A Carta 1 Ganhou! ###\n" : "### A Carta 2 Ganhou! ###\n");
      
      break;

      case 3: //PIB
       valorAtributo2_Carta1 = pib1;
       valorAtributo2_Carta2 = pib2;
       printf("ATRIBUTO COMPARADO (PIB)\n");
       printf("PIB Carta 1: %.2f\n", pib1);
       printf("PIB Carta 2: %.2f\n", pib2);
       printf("%s\n", (pib1 == pib2) ? "Houve empate!!\n" : 
            (pib1 > pib2) ? "### A Carta 1 Ganhou! ###\n" : "### A Carta 2 Ganhou! ###\n");
       break;

      case 4: //pontos turisticos
       valorAtributo2_Carta1 = numerosTuristicos1;
       valorAtributo2_Carta2 = numerosTuristicos2;
       printf("ATRIBUTO COMPARADO (Pontos Turisticos)\n");
       printf("Numero de Pontos Turisticos Carta 1: %d\n", numerosTuristicos1);
       printf("Numero de Pontos Turisticos Carta 2: %d\n", numerosTuristicos2);
       printf("%s\n", (numerosTuristicos1 == numerosTuristicos2) ? "Houve um empate!!\n" : 
             (numerosTuristicos1 > numerosTuristicos2) ? "### A Carta 1 Ganhou! ###\n" : "### A Carta 2 Ganhou! ###\n");
       break;

      case 5: //densidade demografica (menor vence)
       valorAtributo2_Carta1 = densidadePopulacional1;
       valorAtributo2_Carta2 = densidadePopulacional2;
       printf("ATRIBUTO COMPARADO (Densidade Demografica)\n");
       printf("Densidade Carta 1: %.2f\n", densidadePopulacional1);
       printf("Densidade Carta 2: %.2f\n", densidadePopulacional2);
       printf("%s\n", (densidadePopulacional1 == densidadePopulacional2) ? "Houve um Empate!!\n" : 
             (densidadePopulacional2 > densidadePopulacional1) ? "### A Carta 1 Ganhou! ###\n" : "### A Carta 2 Ganhou! ###\n");
       break;
    }

    int somaCarta1 = valorAtributo1_Carta1 + valorAtributo2_Carta1;
    int somaCarta2 = valorAtributo1_Carta2 + valorAtributo2_Carta2;

    printf("%s\n", (somaCarta1 == somaCarta2) ? "Houve um empate!!!" : (somaCarta1 > somaCarta2) ? "----- CARTA 1 E A CAMPEA -----" : "----- CARTA 2 E A CAMPEA -----");

    return 0;
}
