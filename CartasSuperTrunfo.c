#include <stdio.h>
#include <stdlib.h>

// Função para limpar o buffer de entrada
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Estrutura para representar uma cidade
typedef struct {
    int codigo;
    char nome[50];
    long populacao;
    float area;
    long pib;
    int pontos_turisticos;
} Cidade;

int main() {
    int num_cidades;
    
    printf("SUPER TRUNFO - CADASTRO DE CIDADES\n\n");
    
    // Solicita o número de cidades
    printf("Quantas cidades deseja cadastrar? ");
    scanf("%d", &num_cidades);
    limparBuffer();
    
    Cidade cidades[num_2cidades];
    
    for (int i = 0; i < num_cidades; i++) {
        printf("\n--- Cadastro da Cidade %d ---\n", i + 1);
        
        // Código
        printf("Codigo (numero inteiro): ");
        scanf("%d", &cidades[i].codigo);
        limparBuffer();
        
        // Nome
        printf("Nome (max 50 caracteres): ");
        fgets(cidades[i].nome, 50, stdin);
        // Remove a quebra de linha do final
        cidades[i].nome[strcspn(cidades[i].nome, "\n")] = '\0';
        
        // População
        printf("Populacao (ex: 1000000): ");
        scanf("%ld", &cidades[i].populacao);
        limparBuffer();
        
        // Área
        printf("Area em km² (ex: 1234.56): ");
        scanf("%f", &cidades[i].area);
        limparBuffer();
        
        // PIB
        printf("PIB (ex: 5000000000): ");
        scanf("%ld", &cidades[i].pib);
        limparBuffer();
        
        // Pontos turísticos
        printf("Numero de pontos turisticos: ");
        scanf("%d", &cidades[i].pontos_turisticos);
        limparBuffer();
    }
    
    // Exibição dos dados
    printf("\n=== DADOS DAS CIDADES CADASTRADAS ===\n");
    for (int i = 0; i < num_cidades; i++) {
        printf("\nCidade %d:\n", i + 1);
        printf("Codigo: %d\n", cidades[i].codigo);
        printf("Nome: %s\n", cidades[i].nome);
        printf("Populacao: %ld\n", cidades[i].populacao);
        printf("Area: %.2f km²\n", cidades[i].area);
        printf("PIB: %ld\n", cidades[i].pib);
        printf("Pontos Turisticos: %d\n", cidades[i].pontos_turisticos);
    }
    
    return 0;
}