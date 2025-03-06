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

    printf("Densidade Populacional TESTE: %.2f", densidadePopulacional1);

    printf("Vamos realizar comparacao entre as cartas. Escolha qual atributo deseja comparar: ");
    printf("\n1- Populacao");
    printf("\n2- Area");
    printf("\n3- PIB");
    printf("\n4- Numero de pontos turisticos");
    printf("\n5 - Densidade demografica\n");
    scanf("%d", &opcaoSwitch);


    system("cls");
    switch(opcaoSwitch){
        case 1: //populacao
         printf("Carta 1 - %s\n", nomeCidade1);
         printf("Carta 2 - %s\n", nomeCidade2);
         printf("--------- ATRIBUTO COMPARADO (Populacao) ---------\n");
         printf("Populacao Carta 1: %d\n", populacao1);
         printf("Populacao Carta 2: %d\n", populacao2);
         if(populacao1 == populacao2){
            printf("Houve um empate!!!");
         }else if(populacao1 > populacao2){
            printf("### A carta 1 (%s) ganhou a comparacao! ###\n", nomeCidade1);
         }else{
            printf("### A carta 2 (%s) ganhou a comparacao! ###\n", nomeCidade2);
         }
         break;

        case 2: //area
         printf("Carta 1 - %s\n", nomeCidade1);
         printf("Carta 2 - %s\n", nomeCidade2);
         printf("--------- ATRIBUTO COMPARADO (Area) ---------\n");
         printf("Area Carta 1: %.2f\n", area1);
         printf("Area Carta 2: %.2f\n", area2);
         if(area1 == area2){
            printf("Houve um empate!!!");
         }else if(area1 > area2){
            printf("### A carta 1 (%s) ganhou a comparacao! ###\n", nomeCidade1);
         }else{
            printf("### A carta 2 (%s) ganhou a comparacao! ###\n", nomeCidade2);
         }
         break;

        case 3: //PIB
         printf("Carta 1 - %s\n", nomeCidade1);
         printf("Carta 2 - %s\n", nomeCidade2);
         printf("--------- ATRIBUTO COMPARADO (PIB) ---------\n");
         printf("PIB Carta 1: %.2f\n", pib1);
         printf("PIB Carta 2: %.2f\n", pib2);
         if(pib1 == pib2){
            printf("Houve um empate!!!");
         }else if(pib1 > pib2){
            printf("### A carta 1 (%s) ganhou a comparacao! ###\n", nomeCidade1);
         }else{
            printf("### A carta 2 (%s) ganhou a comparacao! ###\n", nomeCidade2);
         }   
         break;

        case 4: //pontos turisticos
         printf("Carta 1 - %s\n", nomeCidade1);
         printf("Carta 2 - %s\n", nomeCidade2);
         printf("--------- ATRIBUTO COMPARADO (Pontos Turisticos) ---------\n");
         printf("Numero de Pontos Turisticos Carta 1: %d\n", numerosTuristicos1);
         printf("Numero de Pontos Turisticos Carta 2: %d\n", numerosTuristicos2);
         if(numerosTuristicos1 == numerosTuristicos2){
            printf("Houve um empate!!!");
         }else if(numerosTuristicos1 > numerosTuristicos2){
            printf("### A carta 1 (%s) ganhou a comparacao! ###\n", nomeCidade1);
         }else{
            printf("### A carta 2 (%s) ganhou a comparacao! ###\n", nomeCidade2);
         }   
        break;

        case 5: //densidade demografica (menor vence)
         printf("Carta 1 - %s\n", nomeCidade1);
         printf("Carta 2 - %s\n", nomeCidade2);
         printf("--------- ATRIBUTO COMPARADO (Densidade Demografica) ---------\n");
         printf("PIB Carta 1: %.2f\n", densidadePopulacional1);
         printf("PIB Carta 2: %.2f\n", densidadePopulacional2);
         if(densidadePopulacional1 == densidadePopulacional2){
            printf("Houve um empate!!!");
         }else if(densidadePopulacional1 < densidadePopulacional2){
            printf("### A carta 1 (%s) ganhou a comparacao! ###\n", nomeCidade1);
         }else{
            printf("### A carta 2 (%s) ganhou a comparacao! ###\n", nomeCidade2);
         }   
        break;
        default:
         printf("Utilize uma das opcoes validas. Por favor.");
         break;
    }   
    

 

    return 0;
}
