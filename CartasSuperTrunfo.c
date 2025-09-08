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

 char Carta1[30] = "Carta1";
 char Carta2[30] = "Carta2";

 char estadoA[20] = "Ceara";
 char estadoB[20] = "Bahia";

 char codigoA[20] = "A01";
 char codigoB[20] = "B01";

 char cidadeA[20] = "Fortaleza";
 char cidadeB[20] = "Salvador";

 int populaçãoA = 12325000;
 int populaçãoB = 67480008;

 float áreaA = 351.136;
 float áreaB = 531.197;

 float PIBA = 603.478;
 float PIBB = 806.897;

 int PTA = 13;
 int PTB = 19;


 



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
    printf("Área: %.3f km²\n", áreaA),
    printf("PIB: %.3f\n", PIBA);
    printf("Números de Pontos Turisticos: %d\n", PTA );


    //Carta B
    
    printf("***Carta B***\n");
    printf("Estado: %s\n", estadoB);
    printf("Código: %s\n", codigoB);
    printf("Cidade: %s\n", cidadeB);
    printf("População: %u\n", populaçãoB);
    printf("Área: %.3f km²\n", áreaB),
    printf("PIB: %.3f\n", PIBB);
    printf("Números de Pontos Turisticos: %d\n", PTB );




    return 0;

}