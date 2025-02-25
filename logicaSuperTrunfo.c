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
    int numerosTuristicos1, numerosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float poderCarta1, poderCarta2;




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

 
    

    //comparacao de atributos utilizando o PIB:
    system("cls");
    printf("----- Comparacao Entre Cartas (Atributo: PIB) -----\n");
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, pib1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, pib2);

    if(pib1 > pib2){
        printf("Carta 1 (%s) tem o maior PIB", nomeCidade1);
    }else{
        printf("Carta 2 (%s) tem o maior PIB", nomeCidade2);
    }

    return 0;
}
