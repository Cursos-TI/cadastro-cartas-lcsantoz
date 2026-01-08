#include <stdio.h>


int main() {
//Declarando Variáveis
//Carta 01
char estado1;
char codigo1[20];
char cidade1[20];
int populaçao1;
float area1;
float pib1;
int pontos1;

//Carta 02
char estado2;
char codigo2[20];
char cidade2[20];
int populaçao2;
float area2;
float pib2;
int pontos2;

  //Entrada de Dados
  //Carta 01
  printf("Digite o Estado: \n");
  scanf(" %c", &estado1);

  printf("Digite o código: \n");
  scanf("%s", codigo1);

  printf("Digite a cidade: \n");
  scanf("%s", cidade1);

  printf("Digite a população: \n");
  scanf("%d", &populaçao1);

  printf("Digite a área: \n");
  scanf("%f", &area1);

  printf("Digite o  PIB: \n ");
  scanf("%f", &pib1);

  printf("Digite os Pontos Turísticos: \n");
  scanf("%d", &pontos1);

  //Carta 02
  printf("Digite o Estado: \n");
  scanf(" %c", &estado2);

  printf("Digite o código: \n");
  scanf("%s", codigo2);

  printf("Digite a cidade: \n");
  scanf("%s", cidade2);

  printf("Digite a população: \n");
  scanf("%d", &populaçao2);

  printf("Digite a área: \n");
  scanf("%f", &area2);

  printf("Digite o  PIB: \n ");
  scanf("%f", &pib2);

  printf("Digite os Pontos Turísticos: \n");
  scanf("%d", &pontos2);


  //Exibição dos dados da cidade
  //Carta 01
  printf("Carta 01 \n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Cidade: %s \n", cidade1);
  printf("População: %d \n", populaçao1);
  printf("Área: %f \n", area1);
  printf("PIB: %f \n", pib1);
  printf("Pontos turísticos: %d \n", pontos1);

  //Carta 02
  printf("Carta 02 \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Cidade: %s \n", cidade2);
  printf("População: %d \n", populaçao2);
  printf("Área: %f \n", area2);
  printf("PIB: %f \n", pib2);
  printf("Pontos turísticos: %d \n", pontos2);
  



return 0;
} 
