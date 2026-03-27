#include <stdio.h>
#include <stdlib.h>
#include <string.h>
        
// ============================================================================
//constante global
#define tam_max 50
#define mundo_max 5

struct territorio{
    char continente[tam_max];
    char cor[tam_max];
    int tropa;
};  

void limparBufferEntrada(){
    
    int c;
    while((c = gertchar()) != '\n' && c != EOF);

}

int main(){

    struct territorio mundo[mundo_max];
    int totalContinente = 0;
    int i;

    //Laço do cadastro dos continentes
    for(int i = 0; i < 4; i++){
        
        printf("Qual o continente?\n");
        fgets(mundo[i].continente, tam_max, stdin);
        
        printf("Qual a cor?\n");
        fgets(mundo[i].cor, tam_max, stdin);

        mundo[i].continente[strcspn (mundo[i].continente, "\n")] = '\0';
        mundo[i].cor[strcspn(mundo[i].cor, "\n")] = '\n';

        printf("Quantas tropas?\n");
        scanf("%d", &mundo[i].tropa);
        limparBufferEntrada();
        
    }

    if(i != 0){
        
        for(int j = 0; j <= i; j++){
            printf("Continente %d", j + 1);
            printf("Nome: %s", mundo[j].continente);
            printf("Cor: %s", mundo[j].cor);
            printf("Tropa: %d", mundo[j].tropa);
        }
    }







}

        
   

// --- Implementação das Funções ---

// alocarMapa():
// Aloca dinamicamente a memória para o vetor de territórios usando calloc.
// Retorna um ponteiro para a memória alocada ou NULL em caso de falha.

// inicializarTerritorios():
// Preenche os dados iniciais de cada território no mapa (nome, cor do exército, número de tropas).
// Esta função modifica o mapa passado por referência (ponteiro).

// liberarMemoria():
// Libera a memória previamente alocada para o mapa usando free.

// exibirMenuPrincipal():
// Imprime na tela o menu de ações disponíveis para o jogador.

// exibirMapa():
// Mostra o estado atual de todos os territórios no mapa, formatado como uma tabela.
// Usa 'const' para garantir que a função apenas leia os dados do mapa, sem modificá-los.

// exibirMissao():
// Exibe a descrição da missão atual do jogador com base no ID da missão sorteada.

// faseDeAtaque():
// Gerencia a interface para a ação de ataque, solicitando ao jogador os territórios de origem e destino.
// Chama a função simularAtaque() para executar a lógica da batalha.

// simularAtaque():
// Executa a lógica de uma batalha entre dois territórios.
// Realiza validações, rola os dados, compara os resultados e atualiza o número de tropas.
// Se um território for conquistado, atualiza seu dono e move uma tropa.

// sortearMissao():
// Sorteia e retorna um ID de missão aleatório para o jogador.

// verificarVitoria():
// Verifica se o jogador cumpriu os requisitos de sua missão atual.
// Implementa a lógica para cada tipo de missão (destruir um exército ou conquistar um número de territórios).
// Retorna 1 (verdadeiro) se a missão foi cumprida, e 0 (falso) caso contrário.

// limparBufferEntrada():
// Função utilitária para limpar o buffer de entrada do teclado (stdin), evitando problemas com leituras consecutivas de scanf e getchar.
