#include <stdio.h>


int main() {
  // Carta 01
  // Declarando Variáveis
char estado1;
char codigo1[20];
char cidade1[20];
int populaçao1;
float area1;
float pib1;
int pontos1;

char estado2;
char codigo2[20];
char cidade2[20];
int populaçao2;
float area2;
float pib2;
int pontos2;

  // Entrada de Dados
  printf("Digite o Estado: \n");
  scanf(" %c", estado1);

  printf("Digite o código: \n");
  scanf("%s", codigo1);

  printf("Digite a cidade: \n");
  scanf("%s", cidade1);

  printf("Digite a população: \n");
  scanf("%d", populaçao1);

  printf("Digite a área: \n");
  scanf("%f", area1);

  printf("Digite o  PIB: \n ");
  scanf("%f", pib1);

  printf("Digite os Pontos Turísticos: \n");
  scanf("%d", pontos1);


  // Área para exibição dos dados da cidade

return 0;
} 
