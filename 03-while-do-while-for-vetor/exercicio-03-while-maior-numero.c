/*
Exercício 03 - Maior número informado

Utilizando o laço while, ler vários números naturais
até que seja digitado um número negativo.
Ao final, exibir o maior número lido.
*/

#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int num=0,maoir=0;
    printf("Digite números naturais (digite um número negativo para encerrar):\n");

    while (num >= 0) {
        scanf("%d", &num);
        if (num > maoir) {
            maoir = num;
        }
    }
    printf("O maior número informado foi: %d\n", maoir);
    return 0;
}