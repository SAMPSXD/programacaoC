#include <stdio.h>
int main(){
    char estado;
    char codigo[4];
    char cidade[20];
    int populacao;
    float area;
    float PIB;
    int quantidade;

    //AGORA COMEÇA O DÓIGO

    printf("Carta 1:\n");
    
    printf("Digite uma letra para representar um Estado de A a H: ");
    scanf(" %c", &estado);

    printf("Digite um código para representar o Estado (Ex:A01): ");
    scanf(" %s", codigo);

    printf("Digite um nome para a cidade: ");
    scanf(" %s", cidade);

    printf("Digite um valor para a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Informe um valor da área dessa cidade em Km²: ");
    scanf(" %f", &area);

    printf("Informe o produto interno bruto: ");
    scanf(" %f", &PIB);

    printf("Diga a quantidade de pontos turísticos: ");
    scanf(" %d", &quantidade); 
    
    //AGORA RETORNA A CARTA 

    printf("\nCARTA 1:\n");
    
    printf("Estado: %c\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome da Cidade: %s\n", cidade);

    printf("População: %d pessoas\n", populacao);

    printf("Área: %.2f km²\n", area);

    printf("PIB: %.2f bilhões\n", PIB);

    printf("Pontos turísticos: %d pontos turísticos\n", quantidade);

    //CARTA 2

    char estado1;
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    float PIB1;
    int quantidade1;

    printf("\nCarta 2:\n");

    printf("Digite uma letra para representar um Estado de A a H: ");
    scanf(" %c", &estado1);

    printf("Digite um código para representar o Estado (Ex:A01): ");
    scanf(" %s", codigo1);

    printf("Digite um nome para a cidade: ");
    scanf(" %s", cidade1);

    printf("Digite um valor para a população da cidade: ");
    scanf(" %d", &populacao1);

    printf("Informe um valor da área dessa cidade em Km²: ");
    scanf(" %f", &area1);

    printf("Informe o produto interno bruto: ");
    scanf(" %f", &PIB1);

    printf("Diga a quantidade de pontos turísticos: ");
    scanf(" %d", &quantidade1); 

    printf("\nCARTA 2:\n");
    
    printf("Estado: %c\n", estado1);

    printf("Código: %s\n", codigo1);

    printf("Nome da Cidade: %s\n", cidade1);

    printf("População: %d pessoas\n", populacao1);

    printf("Área: %.2f km²\n", area1);

    printf("PIB: %.2f bilhões\n", PIB1);

    printf("Pontos Turísticos: %d pontos turísticos\n", quantidade1);

    return 0;
}

