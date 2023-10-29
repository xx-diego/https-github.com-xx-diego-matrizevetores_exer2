#include <stdio.h>
#include <stdlib.h>

int main() {
    char continuar;
    do {
        int tammat;
        printf("Matrizes quadradas sempre possuem o numero de linhas igual ao de colunas, assim, insira o numero de linhas da matriz quadrada: ");
        scanf("%d", &tammat);

        int** matriz = (int**)malloc(tammat * sizeof(int*));
        for (int i = 0; i < tammat; i++) {
            matriz[i] = (int*)malloc(tammat * sizeof(int));
    }

        printf("Insira os elementos da matriz (1 por vez e apos cada elemento pressione 'enter'):\n");
        for (int i = 0; i < tammat; i++) {
            for (int j = 0; j < tammat; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    //diagonal principal
    int somaDiagonalPrincipal = 0;
    for (int i = 0; i < tammat; i++) {
        somaDiagonalPrincipal += matriz[i][i];
    }

    //diagonal secundária
    int somaDiagonalSecundaria = 0;
    for (int i = 0; i < tammat; i++) {
        somaDiagonalSecundaria += matriz[i][tammat - 1 - i];
    }

    printf("Soma diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("Soma diagonal secundária: %d\n", somaDiagonalSecundaria);

    printf("calcular outra matriz quadrada? (s/n): ");
    scanf(" %c", &continuar);
    
    } while (continuar == 's' || continuar == 'S');

    return 0;
}