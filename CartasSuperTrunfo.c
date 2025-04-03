#include <stdio.h>

int main(){
  
    //Carta 1 e 2 (A, B)
    char estado[15], estado2[15];
    char codigo_Carta[10], codigo_Carta2[10];
    char nome_Cidade[10], nome_Cidade2[10];
    float população, população2;
    float área, área2;
    float pib, pib2;
    int pontos_Turisticos, pontos_Turisticos2;

    //Incersao de dados da Carta 1
    printf("Carta 1:\n");
    
    printf("Estado: ");
    scanf("%s", estado);
    
    printf("Código da Carta: ");
    scanf("%s", codigo_Carta);
    
    printf("Nome da Cidade: ");
    scanf("%s", nome_Cidade);
    
    printf("População: ");
    scanf("%f", &população);
    
    printf("Área (em km²): ");
    scanf("%f", &área);
    
    printf("PIB: ");
    scanf("%f", &pib);
    
    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontos_Turisticos);

    //Incersao de dados da Carta 2
    printf("Carta 2:\n");
    
    printf("Estado: ");
    scanf("%s", estado2);
    
    printf("Código da Carta: ");
    scanf("%s", codigo_Carta2);
    
    printf("Nome da Cidade: ");
    scanf("%s", nome_Cidade2);
    
    printf("População: ");
    scanf("%f", &população2);
    
    printf("Área (em km²): ");
    scanf("%f", &área2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontos_Turisticos2);

    // impressao das informacoes fonecidas pelo user (carta 1)
    printf("Carta 1: \n");

    printf("Estado: %s\n", estado);

    printf("Código da Carta: %s\n", codigo_Carta);

    printf("Nome da Cidade: %s\n", nome_Cidade);

    printf("População: %3f\n", população);

    printf("Área: %.3f km²\n", área);

    printf("PIB: %.1f bilhões de reais\n", pib);
    
    printf("Números de Pontos Turisticos: %d\n", pontos_Turisticos);


    // impressao das informacoes fonecidas pelo user (carta 2)
    printf("Carta 2: \n");

    printf("Estado: %s\n", estado2);
    
    printf("Código da Carta: %s\n", codigo_Carta2);
    
    printf("Nome da Cidade: %s\n", nome_Cidade2);
    
    printf("População: %3f\n", população2);
    
    printf("Área: %.3f km²\n", área2);
    
    printf("PIB: %.1f bilhões de reais\n", pib2);
        
    printf("Números de Pontos Turisticos: %d\n", pontos_Turisticos2);

    return 0;

}
