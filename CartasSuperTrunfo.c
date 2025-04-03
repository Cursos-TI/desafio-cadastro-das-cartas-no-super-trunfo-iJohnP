#include <stdio.h>

int main(){
  
    // Declaracao de variáveis
    // Carta 1 e 2 (A, B)
    char estado[30], estado2[30]; // estado (ex: Ceará) 
    char codigo_Carta[10], codigo_Carta2[10]; // código da carta (ex: A01)
    char nome_Cidade[30], nome_Cidade2[30]; // nome da cidade (ex: Aracaju)
    float populacao, populacao2; // quantidade da populacao (ex: 2.279.686)
    float area, area2; // área total (ex: 11.401 km²)
    float pib, pib2; // produto interno bruto (ex: 18.4bi)
    int pontos_Turisticos, pontos_Turisticos2; // quantidade de pontos turisticos na cidade (ex: 24)

    // entrada de dados da Carta 1
    printf("Carta 1: \n");
    
    printf("Estado: ");
    scanf("%s", estado);
    
    printf("Código da Carta: ");
    scanf("%s", codigo_Carta);
    
    printf("Nome da Cidade: ");
    scanf("%s", nome_Cidade);
    
    printf("População: ");
    scanf("%f", &populacao);
    
    printf("Área (em km²): ");
    scanf("%f", &area);
    
    printf("PIB: ");
    scanf("%f", &pib);
    
    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontos_Turisticos);
    // fim da incersao de dados da Carta 1

    // entrada de dados da Carta 2
    printf("Carta 2:\n");
    
    printf("Estado: ");
    scanf("%s", estado2);
    
    printf("Código da Carta: ");
    scanf("%s", codigo_Carta2);
    
    printf("Nome da Cidade: ");
    scanf("%s", nome_Cidade2);
    
    printf("População: ");
    scanf("%f", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontos_Turisticos2);
    // fim da incersao de dados da Carta 2

    // impressao das informacoes fonecidas pelo user (carta 1)
    printf("Carta 1: \n");

    printf("Estado: %s\n", estado);

    printf("Código da Carta: %s\n", codigo_Carta);

    printf("Nome da Cidade: %s\n", nome_Cidade);

    printf("População: %.2f\n", populacao);

    printf("Área: %.2f km²\n", area);

    printf("PIB: %.2f bilhões de reais\n", pib);
    
    printf("Números de Pontos Turisticos: %d\n", pontos_Turisticos);
    // fim da impressao das informacoes fonecidas pelo user (carta 1)


    // impressao das informacoes fonecidas pelo user (carta 2)
    printf("Carta 2: \n");

    printf("Estado: %s\n", estado2);
    
    printf("Código da Carta: %s\n", codigo_Carta2);
    
    printf("Nome da Cidade: %s\n", nome_Cidade2);
    
    printf("População: %.2f\n", populacao2);
    
    printf("Área: %.2f km²\n", area2);
    
    printf("PIB: %.2f bilhões de reais\n", pib2);
        
    printf("Números de Pontos Turisticos: %d\n", pontos_Turisticos2);
    // fim da impressao das informacoes fonecidas pelo user (carta 2)
    
    return 0;

}