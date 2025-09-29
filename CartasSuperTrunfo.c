#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  int populacao;
        int numeroPontosTuristicos;
        float area;
        float pib;
        char estado;
        char codigo [4];
        char nomeCidade [50]; // Área para definição das variáveis para armazenar as propriedades das cidades

        printf ("Digite seu Estado: \n");
        scanf ("%s", &estado); 
  
        printf ("Digite seu Código: \n");
        scanf ("%s", &codigo);

        printf ("Digite o Nome da Cidade: \n");
        scanf ("%s", &nomeCidade);
  
        printf ("Digite sua População: \n");
        scanf ("%d",&populacao);
  
        printf ("Digite sua Área: \n");
        scanf ("%f", &area);

        printf ("Digite seu PIB: \n");
        scanf ("%f", &pib);

        printf ("Digite seu Número de pontos turísticos: \n");
        scanf ("%d",&numeroPontosTuristicos);

        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo);
        printf("Cidade: %s\n", nomeCidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f bilhões de reais\n", pib);
        printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos);
  
return 0;
} 
