/*
Exercício 3 - Análise de empréstimo

Faça um programa que leia o salário de um trabalhador e o valor
da prestação de um empréstimo.

O programa deve mostrar em tela a taxa percentual que a prestação
representa em relação ao salário.

Se a prestação for maior que 20% do salário, mostrar:
"Empréstimo não concedido."

Caso contrário, mostrar:
"Empréstimo concedido."
*/
#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    float salario, prestacao, percentual;

    printf("Digite o salário do trabalhador: ");
    scanf("%f", &salario);

    printf("Digite o valor da prestação do empréstimo: ");
    scanf("%f", &prestacao);

    percentual = (prestacao / salario) * 100;

    printf("A prestação representa %.2f%% do salário.\n", percentual);

    if (percentual > 20) {
        printf("Empréstimo não concedido.\n");
    } else {
        printf("Empréstimo concedido.\n");
    }

    return 0;
}