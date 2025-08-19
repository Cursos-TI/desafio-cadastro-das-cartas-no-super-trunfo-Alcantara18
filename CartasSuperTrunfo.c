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


 char estado[20];
 char codigo[20];
 char cidade[20];
 int população;
 float área;
 float PIB;
 int PT;



    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o estado:  \n");
    scanf("%s", &estado);

    printf("Digite o código:  \n");
    scanf("%s", &codigo);

    printf("Digite a cidade:  \n");
    scanf("%s", &cidade);

    printf("Digite a população:  \n");
    scanf("%d", &população);

    printf("Digite a área:  \n");
    scanf("%f", &área);

    printf("Digite o PIB:  \n");
    scanf("%f", &PIB);

    printf("Digite os PontosTuristicos:  \n");
    scanf("%d", &PT);

     float densidadepop  = (float) população / área;
     float pibperca = (float) PIB / população;

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", população);
    printf("Área: %.3f km²\n", área),
    printf("PIB: %.3f\n", PIB);
    printf("Números de Pontos Turisticos: %d\n", PT );
    printf("Densidade Populacional: %f\n", densidadepop);
    printf("PIB per Capita: %f\n", pibperca);

    printf("Digite o estado:  \n");
    scanf("%s", &estado);

    printf("Digite o código:  \n");
    scanf("%s", &codigo);

    printf("Digite a cidade:  \n");
    scanf("%s", &cidade);

    printf("Digite a população:  \n");
    scanf("%d", &população);

    printf("Digite a área:  \n");
    scanf("%f", &área);

    printf("Digite o PIB:  \n");
    scanf("%f", &PIB);

    printf("Digite os PontosTuristicos:  \n");
    scanf("%d", &PT);

     float densidadePop  = (float) população / área;
     float PibPerCa = (float) PIB / população;

    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", população);
    printf("Área: %.3f km²\n", área),
    printf("PIB: %.3f\n", PIB);
    printf("Números de Pontos Turisticos: %d\n", PT );
    printf("Densidade Populacional: %f\n", densidadePop);
    printf("PIB per Capita: %f\n", PibPerCa);

    return 0;

}
