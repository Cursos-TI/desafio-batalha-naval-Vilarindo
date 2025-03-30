#include <stdio.h>
// Nível novato
// Aluno LUIZ VILARINDO

int main() {
    
    int tabuleiro[10][10] = {0};

    // inserir o navio 1
    int tamanho_navio = 3;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[2][3 + i] = 3;
    }

    // verificar sobreposição antes de inserir o navio 2
    int sobreposicao = 0; 
    for (int i = 0; i < tamanho_navio; i++) {
        if (tabuleiro[6 + i][6] != 0) {
            sobreposicao = 1;
            break;
        }
    }

    if (sobreposicao) {
        printf("Erro: O segundo navio está sobrepondo o anterior!\n");
    } else {
        // inserir o navio 2
        for (int i = 0; i < tamanho_navio; i++) {
            tabuleiro[6 + i][6] = 3;
        }
    }

    // exibir tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
