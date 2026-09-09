/* Faça um programa que leia dois números reais e imprima o maior deles */
#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    float num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("O maior número é: %.2f\n", num1);
    } else {
        printf("O maior número é: %.2f\n", num2);
    }

    return 0;
}