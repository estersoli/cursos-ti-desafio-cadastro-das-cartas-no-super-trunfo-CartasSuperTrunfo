#include <stdio.h>
#include <string.h>

int main() {
// Aqui definindo o que será cadastrado
    char Estado; 
    char codigoDaCidade[10];
    char NomeDaCidade[100];
    char String1[132] = "Agora vamos cadastrar as cidades! Seguindo o exemplo: A01 (A letra representa o Estado e o numero a identificacao de qual cidade.";
    int Populacao;
    float Area;
    float Pib;
    int NroPontosTuristicos;

    printf("Estado:\n"); // Casdastro do estado
    scanf(" %c", &Estado);

    printf("%s \n", String1); // Pular linha

    printf("Digite o codigo da cidade:\n");
    scanf("%s", codigoDaCidade); // Cadastro do código da cidade

    printf("Digite o nome da cidade:\n");
    scanf(" %s", &NomeDaCidade); // Cadastro da cidade

    printf("Numero de habitantes (Populacao):\n"); // Cadastro nmr de habitantes
    scanf("%d", &Populacao);

    printf("Area da cidade em km²:\n"); // Cadastro da area
    scanf("%f", &Area);

    printf("Digite o PIB:\n"); // Cadastro do pib
    scanf("%f", &Pib);

    printf("Numero de pontos turisticos:\n"); // Cadastro dos pontos turísticos
    scanf("%d", &NroPontosTuristicos);

    printf("Estado: %c\n Codigo da cidade: %s\n", Estado, codigoDaCidade); // Aqui irão aparecer as informações cadastradas
    printf("Cidade: %s\n Habitantes: %d\n", NomeDaCidade, Populacao);
    printf("PIB: %f\n Pontos turisticos: %d\n", Pib, NroPontosTuristicos);

    return 0;
}
