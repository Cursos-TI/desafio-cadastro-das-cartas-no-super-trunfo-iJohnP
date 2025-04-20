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

    // entrada de dados da Carta 2
    printf("\nCarta 2:\n");
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
    
    // calculo densidade populacional, pib per capita e o super poder das Cartas 1 e 2
    float densidade_Populacional =  populacao / area;
    float pib_Capita =  pib / populacao;    
    float densidade_Populacional2 =  populacao2 / area2;
    float pib_Capita2 = pib2 / populacao2;
    float super_Poder1 = populacao + area + pib +  (float)pontos_Turisticos + (1 / densidade_Populacional) + pib_Capita;
    float super_Poder2 = populacao2 + area2 + pib2 + (float)pontos_Turisticos2 + (1 / densidade_Populacional2) +pib_Capita2;

    // comparacao dos atributos das cartas 1 e 2
    int resultado_Populacao = populacao > populacao2;
    int resultado_Area = area > area2;
    int resultado_Pib =  pib > pib2;
    int resultadoPontos_Turisticos = pontos_Turisticos > pontos_Turisticos2;
    int resultado_Densidade_Populacional =  densidade_Populacional < densidade_Populacional2;
    int resultado_Pib_Capita = pib_Capita > pib_Capita2;
    int resultado_Super_Poder = super_Poder1 > super_Poder2;

    // impressao do resultado das comparacoes entre as cartas 1 e 2
    printf("\n~^^~ Batalha das Cartas no Super Trunfo ~^^~\n");
    printf("Comparacao de Cartas:\n");
    printf("População: Carta %d venceu\n", 2 - resultado_Populacao);
    printf("Area: Carta %d venceu\n", 2 - resultado_Area);
    printf("Pib: Carta %d venceu\n", 2 - resultado_Pib);
    printf("Pontos turisticos: Carta %d venceu\n", 2 - resultadoPontos_Turisticos);
    printf("Densidade populacional: Carta %d venceu\n", 2 - resultado_Densidade_Populacional);
    printf("Pib per capita: Carta %d venceu\n", 2 - resultado_Pib_Capita);
    printf("Super Poder: Carta %d venceu\n", 2 - resultado_Super_Poder);
    printf("\n~^^~ Fim da Batalha! ~^^~\n");

    return 0;
}