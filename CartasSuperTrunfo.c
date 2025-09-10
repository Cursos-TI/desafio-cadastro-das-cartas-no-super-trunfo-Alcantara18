#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

 int atributo1, atributo2;
 int resultado1, resultado2;
 srand(time(0));



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
    
  //Menu Interativo
  //Primeiro atributo
    printf("***Jogo Cartas Super Trunfo***\n");
    printf("Escolha o primeiro atributo: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &atributo1);

    

    switch (atributo1)
    {
      case 1:
      printf("%s x %s\n", estadoA , estadoB);
      printf("População\n");
      printf("%s: %u\n", estadoA , populaçãoA);
      printf("%s: %u\n",estadoB , populaçãoB);
      
      resultado1 = populaçãoA > populaçãoB ? 1 : 0;
      break;
      
      case 2:
      printf("%s x %s\n", estadoA , estadoB);
      printf("Área\n");
      printf("%s: %.3f km²\n", estadoA , areaA);
      printf("%s: %.3f km²\n",estadoB , areaB);
      
      resultado1 = areaA > areaB ? 1 : 0;
      break;

      case 3:
      printf("%s x %s\n", estadoA , estadoB);
      printf("PIB\n");
      printf("%s: %.3f\n", estadoA , PIBA);
      printf("%s: %.3f\n",estadoB , PIBB);
      
      resultado1 = PIBA > PIBB ? 1 : 0;
      break;

      case 4:
      printf("%s x %s\n", estadoA , estadoB);
      printf("Pontos turisticos\n");
      printf("%s: %d\n", estadoA , PTA);
      printf("%s: %d\n",estadoB , PTB);
      
      resultado1 = PTA > PTB ? 1 : 0;
      break;

      case 5:
      printf("%s x %s\n", estadoA , estadoB);
      printf("Densidade Populacional\n");
      printf("%s: %.2f\n", estadoA , DePOA);
      printf("%s: %.2f\n",estadoB , DePoB);
      
      resultado1 = DePOA < DePoB ? 1 : 0;
      break;

      case 6:
      printf("%s x %s\n", estadoA , estadoB);
      printf("PIB per Capita\n");
      printf("%s: %.2f\n", estadoA , PPCA);
      printf("%s: %.2f\n",estadoB , PPCB);
      
      resultado1 = PPCA > PPCB ? 1 : 0;
      break;

      case 7:
      printf("%s x %s\n", estadoA , estadoB);
      printf("Super Poder\n");
      printf("%s: %.2f\n", estadoA , SPA);
      printf("%s: %.2f\n",estadoB , SPB);
      
      resultado1 = SPA > SPB ? 1 : 0;
      break;

     default:
     printf("Opção Inválida\n");
      break;
    }

    //Segundo atributo
    printf("Escolha o segundo atributo: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &atributo2);

    if(atributo1 == atributo2){
      printf("Você escolheu o mesmo atributo!\n");
    }else{
          switch (atributo2)
    {
      case 1:
      printf("%s x %s\n", estadoA , estadoB);
      printf("População\n");
      printf("%s: %u\n", estadoA , populaçãoA);
      printf("%s: %u\n",estadoB , populaçãoB);
      
      resultado2 = populaçãoA > populaçãoB ? 1 : 0;
      break;
      
      case 2:
      printf("%s x %s\n", estadoA , estadoB);
      printf("Área\n");
      printf("%s: %.3f km²\n", estadoA , areaA);
      printf("%s: %.3f km²\n",estadoB , areaB);
      
      resultado2 = areaA > areaB ? 1 : 0;
      break;

      case 3:
      printf("%s x %s\n", estadoA , estadoB);
      printf("PIB\n");
      printf("%s: %.3f\n", estadoA , PIBA);
      printf("%s: %.3f\n",estadoB , PIBB);
      
      resultado2 = PIBA > PIBB ? 1 : 0;
      break;

      case 4:
      printf("%s x %s\n", estadoA , estadoB);
      printf("Pontos turisticos\n");
      printf("%s: %d\n", estadoA , PTA);
      printf("%s: %d\n",estadoB , PTB);
      
      resultado2 = PTA > PTB ? 1 : 0;
      break;

      case 5:
      printf("%s x %s\n", estadoA , estadoB);
      printf("Densidade Populacional\n");
      printf("%s: %.2f\n", estadoA , DePOA);
      printf("%s: %.2f\n",estadoB , DePoB);
      
      resultado2 = DePOA < DePoB ? 1 : 0;
      break;

      case 6:
      printf("%s x %s\n", estadoA , estadoB);
      printf("PIB per Capita\n");
      printf("%s: %.2f\n", estadoA , PPCA);
      printf("%s: %.2f\n",estadoB , PPCB);
      
      resultado2 = PPCA > PPCB ? 1 : 0;
      break;

      case 7:
      printf("%s x %s\n", estadoA , estadoB);
      printf("Super Poder\n");
      printf("%s: %.2f\n", estadoA , SPA);
      printf("%s: %.2f\n",estadoB , SPB);
      
      resultado2 = SPA > SPB ? 1 : 0;
      break;

     default:
     printf("Opção Inválida\n");
      break;
    }
    }
    if(resultado1 && resultado2){
      printf("Você ganhou!\n");
    }else if(resultado1 != resultado2){
      printf("Você empatou!\n");
    }else{
      printf("Você perdeu!\n");
    }



    return 0;

  }