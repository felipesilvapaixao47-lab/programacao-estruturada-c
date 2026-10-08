/*
Exercício 05 - Quantidade de números pares

Ler 10 valores inteiros do teclado e armazená-los em um vetor.
Depois, informar quantas posições do vetor armazenaram números pares.
*/
#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int vetor[10], i, quantidade_pares = 0;

    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            quantidade_pares++;
        }
    }

    printf("Quantidade de números pares: %d\n", quantidade_pares);
    return 0;
}