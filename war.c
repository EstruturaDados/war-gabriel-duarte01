#include <stdio.h>
#include <stdlib.h>
#include <string.h>
        
// ============================================================================
//constante global
#define tam_max 50 //tamanho máximo das strings
#define mundo_max 5 //quantidade máxima de territórios

struct territorio{
    char continente[tam_max];
    char cor[tam_max];
    int tropa;
};  

void limparBufferEntrada(){
    
    int c;
    while((c = getchar()) != '\n' && c != EOF);

}

int main(){

    struct territorio mundo[mundo_max];
    int totalContinente = 0;
    int i = 3;
    int k = 1;
    
    printf("==============================\n\n" );
    printf("Vamos cadastrar os 5 territórios iniciais do nosso mundo!\n\n");
    printf("==============================\n\n" );

    //Laço do cadastro dos continentes
    for(int i = 0; i < 5; i++){
        
        printf("--- Cadastrando o território %d\n", i + 1);

        printf("Qual o nome? ");
        fgets(mundo[i].continente, tam_max, stdin);
        
        printf("Qual a cor? ");
        fgets(mundo[i].cor, tam_max, stdin);

        mundo[i].continente[strcspn (mundo[i].continente, "\n")] = '\0';
        mundo[i].cor[strcspn(mundo[i].cor, "\n")] = '\0';

        printf("Quantas tropas? ");
        scanf("%d", &mundo[i].tropa);
        limparBufferEntrada();
        
        printf("\n");
    }

        printf("\nCadastro inicial realizado com sucesso!\n\n");
        printf("===============================\n");
        printf("Mapa do mundo - ESTADO ATUAL\n");
        printf("===============================\n\n");
        
        for(int j = 0; j < 5; j++){
            printf("TERRIÓRIO %d\n", j + 1);
            printf("    -Nome: %s\n", mundo[j].continente);
            printf("    -Cor: %s\n", mundo[j].cor);
            printf("    -Tropa: %d\n", mundo[j].tropa);
        }
    }



