#include <stdio.h>

int main (){
char estado[50]; //Estado
char cod_da_carta[20]; //Código da carta (char[])
char nome_da_cidade [50]; //Nome da cidade (char[])
int população; //População
float area_em_km²; //Área em km² (float)
float pib; //(float)
int nmr_de_pontos_turisticos; //Número de pontos turísticos (int)

    //Entrada de dados do usuário
    printf("Digite o Estado: \n");
    scanf("%s", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &cod_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade);

    printf("Digite sua população: \n");
    scanf("%d", &população);

    printf("Digite a área em km²: \n");
    scanf("%f", &area_em_km²);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &nmr_de_pontos_turisticos);


    //Saída de dados
    printf("Carta cadastrada com sucesso! \n");

    printf("Estado: %s \n", estado);
    printf("Código da carta: %s \n", cod_da_carta);
    printf("Cidade: %s \n", nome_da_cidade);
    printf("População: %d \n", população);
    printf("Área em Km²: %f \n", area_em_km²);
    printf("PIB: %f \n", pib);
    printf("Pontos Turísticos: %d \n", nmr_de_pontos_turisticos);
}
