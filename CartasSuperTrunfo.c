#include <stdio.h>

int main(){
printf("Desafio Xadrez! \n");
int codigo;
char nome[200];
int populacao;
float area;
float pib;
int pontos_turisticos;


printf("Digite o codigo da cidade:");
scanf("%d",&codigo);

printf("Digite o nome da cidade:");
scanf("%s",nome);

printf("Digite a populacao da cidade:");
scanf("%d", &populacao);

printf("Digite a area da cidade ( em km²):");
scanf("%f", &area);

printf("Digite o PIB da cidade ( em milhoes de reais):");
scanf("%f", &pib);

printf("Digite o número de pontos turisticos da cidade:");
scanf("%d", &pontos_turisticos);


    printf("\nInformações da Cidade:\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}
