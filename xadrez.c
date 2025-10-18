#include <stdio.h>

/*
  Desafio: Nível Novato – Movimentando as Peças do Xadrez
  -------------------------------------------------------
  Este programa simula a movimentação de três peças de xadrez:
  - Torre  (usando laço FOR)
  - Bispo  (usando laço WHILE)
  - Rainha (usando laço DO-WHILE)

  Cada peça se move um número pré-definido de casas, e a direção
  de cada movimento é exibida no console.
*/

int main(void) {
    /* ===================== TORRE ===================== */
    printf("===== Movimento da TORRE =====\n");
    int casasTorre = 5;  // A torre se moverá 5 casas para a direita

    // A torre se move em linha reta (horizontal ou vertical).
    // Aqui usaremos um laço FOR para percorrer cada casa.
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    /* ===================== BISPO ===================== */
    printf("\n===== Movimento do BISPO =====\n");
    int casasBispo = 5;  // O bispo se moverá 5 casas na diagonal (cima-direita)
    int contador = 1;

    // O bispo se move em diagonal, logo imprime "Cima, Direita".
    // Aqui usaremos um laço WHILE.
    while (contador <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", contador);
        contador++;
    }

    /* ===================== RAINHA ===================== */
    printf("\n===== Movimento da RAINHA =====\n");
    int casasRainha = 8;  // A rainha se moverá 8 casas para a esquerda
    int posicao = 1;

    // A rainha pode se mover em todas as direções.
    // Aqui simularemos um movimento de 8 casas para a esquerda usando DO-WHILE.
    do {
        printf("Casa %d: Esquerda\n", posicao);
        posicao++;
    } while (posicao <= casasRainha);

    /* ===================== FIM ===================== */
    printf("\nSimulacao concluida com sucesso!\n");
    return 0;
}
