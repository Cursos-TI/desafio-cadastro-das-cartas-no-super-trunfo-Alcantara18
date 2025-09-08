#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Edson

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

  printf("Desafio Super Trunfo Países\n");
  printf("Tema 1 Cadastro das Cartas\n");

 //Cartas
 char Carta1[30] = "Carta1";
 char Carta2[30] = "Carta2";

 //Estado
 char estadoA[20] = "Ceara";
 char estadoB[20] = "Bahia";

 //Codigo da Carta
 char codigoA[20] = "A01";
 char codigoB[20] = "B01";

 //Cidade
 char cidadeA[20] = "Fortaleza";
 char cidadeB[20] = "Salvador";

 //População
 unsigned long int populaçãoA = 12325000;
 unsigned long int populaçãoB = 67480008;

 //Área
 float areaA = 351.136;
 float areaB = 531.197;

 //PIB
 double PIBA = 73294603.478;
 double PIBB = 95659806.897;

 //Pontos Turísticos
 int PTA = 13;
 int PTB = 19;

 //Densidade Populacional
 float DePOA;
 float DePoB;

 //PIB per Capita
 float PPCA;
 float PPCB;

 //Super Poder
 float SPA;
 float SPB;

 DePOA = populaçãoA / areaA;
 DePoB = populaçãoB / areaB;

 PPCA = PIBA / populaçãoA;
 PPCB = PIBB / populaçãoB;
 
 SPA = populaçãoA + areaA + PIBA + PTA + DePOA + PPCA;
 SPB = populaçãoB + areaB + PIBB + PTB + DePoB + PPCB;



    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Carta A
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("***Carta A***\n");
    printf("Estado: %s\n", estadoA);
    printf("Código: %s\n", codigoA);
    printf("Cidade: %s\n", cidadeA);
    printf("População: %u\n", populaçãoA);
    printf("Área: %.3f km²\n", areaA),
    printf("PIB: %.3f\n", PIBA);
    printf("Números de Pontos Turisticos: %d\n", PTA );
    printf("Densidade Populacional: %.2f\n", DePOA);
    printf("PIB per Capita: %.2f\n", PPCA);
    printf("Super Poder: %.2f\n", SPA);


    //Carta B
    
    printf("***Carta B***\n");
    printf("Estado: %s\n", estadoB);
    printf("Código: %s\n", codigoB);
    printf("Cidade: %s\n", cidadeB);
    printf("População: %u\n", populaçãoB);
    printf("Área: %.3f km²\n", areaB),
    printf("PIB: %.3f\n", PIBB);
    printf("Números de Pontos Turisticos: %d\n", PTB );
    printf("Densidade Populacional: %.2f\n", DePoB);
    printf("PIB per Capita: %.2f\n", PPCB);
    printf("Super Poder: %.2f\n", SPB);

    if(populaçãoA > populaçãoB){
      printf("População: Carta 1 Venceu!\n");
    }else{
      printf("População: Carta 2 Venceu!\n");
    }

    if (areaA > areaB){
      printf("Área: Carta 1 Venceu!\n");
    }else{
      printf("Área: Carta 2 Venceu!\n");
    }

    if(PIBA > PIBB){
      printf("PIB: Carta 1 Venceu!\n");
    }else{
      printf("PIB: Carta 2 Venceu!\n");
    }

    if(PTA > PTB){
      printf("Pontos Turísticos: Carta 1 Venceu!\n");
    }else{
      printf("Pontos Turísticos: Carta 2 Venceu!\n");
    }

    if(DePOA > DePoB){
      printf("Densidade Populacional: Carta 1 Venceu!\n");
    }else{
      printf("Densidade Populacional: Carta 2 Venceu!\n");
    }

    if(PPCA > PPCB){
      printf("PIB per Capita: Carta 1 Venceu!\n");
    }else{
      printf("PIB per Capita: Carta 2 Venceu!\n");
    }

    if(SPA > SPB){
      printf("Super Poder: Carta 1 Venceu!\n");
    }else{
      printf("Super Poder: Carta 2 Venceu!\n");
    }



    return 0;

}