/*
Exercício 06 - Subtração de vetores

Ler dois vetores A e B, com 5 números inteiros cada.
Criar um novo vetor C calculando C = A - B
e exibir os elementos do vetor C.
*/
#include <stdio.h>
#include <locale.h>
int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int A[5], B[5], C[5], i;

    printf("Digite 5 valores inteiros para o vetor A:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite 5 valores inteiros para o vetor B:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
    }

    for (i = 0; i < 5; i++) {
        C[i] = A[i] - B[i];
    }

    printf("Vetor C (A - B):\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}