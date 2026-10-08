/*
Exercício 02 - Números naturais em ordem decrescente

Utilizando o laço while, ler um número inteiro positivo
e imprimir todos os números naturais do número informado até 0,
em ordem decrescente.
*/

#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int n_final;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n_final);

    printf("Números naturais de %d até 0:\n", n_final);

    int n_atual = n_final;
    while (n_atual >= 0) {
        printf("%d\n", n_atual);
        n_atual--;
    }

    return 0;
}