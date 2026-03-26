#include <stdio.h>
#include <stdlib.h>
#include <string.h>
        
// ============================================================================
//constante global
#define tam_max 50

struct territorio{
    char continente[tam_max];
    char cor[tam_max];
    int tropa;
};

void limparBufferEntrada(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF); 
}

int main() {
    
printf("============================================================================\n");
printf("PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO \n");
printf("============================================================================\n");

    struct territorio mundo[4];
    int totalContinente = 0;
    int opcao;

    //laço principal
    do{

    printf("Para começar o jogo, é necessário cadastrar os territórios\n");
    printf("Para tanto, escolha a opção desejada:\n");
    printf("1 - cadastrar território\n");
    printf("2 - visualizar os territórios\n");
    printf("0 - sair do jogo...\n");

    scanf("%d", &opcao);
    limparBufferEntrada();

    switch (opcao){


        case 1: //cadastro de novos continente
    
        if(totalContinente < 4){

        printf("Qual o seu continente? \n");
        fgets (mundo[totalContinente].continente, tam_max, stdin);
    
        printf("Qual a cor dele?\n");
        fgets(mundo[totalContinente].cor, tam_max, stdin);

        mundo[totalContinente].continente[strcspn(mundo[totalContinente].continente, "\n")] = '\0';
        mundo[totalContinente].cor[strcspn(mundo[totalContinente].cor, "\n")] = '\0';

        printf("Quantas tropas ele possui?\n");
        scanf("%d", &mundo[totalContinente].tropa);
        limparBufferEntrada();

        printf("Cadastro realizado com sucesso!\n");

        totalContinente++;
    
}       else{
   
        printf("Foi atingido o total de territorios cadastrados");

}
    
    printf("Pressione enter para prosseguir...\n");
    getchar();
    break;

        case 2: //mostra os territorios
    
        for(int c = 0; c < totalContinente; c++){
            printf("====================\n");
            printf("território %d: %s\n", c + 1, mundo[c].continente);
            printf("cor: %s\n", mundo[c].cor);
            printf("tropa: %d\n", mundo[c].tropa);

        }

}
    }while(opcao != 0);

        
    return 0;
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
