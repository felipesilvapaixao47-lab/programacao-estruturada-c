/*
Exercício 01 - Números naturais em ordem crescente

Utilizando o laço while, ler um número inteiro positivo
e imprimir todos os números naturais de 0 até o número informado.
*/

#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int n_final, n_atual = 0;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n_final);

    printf("Números naturais de 0 até %d:\n", n_final);

    while (n_atual <= n_final) {
        printf("%d\n", n_atual);
        n_atual++;
    }

    return 0;
}