/*
Exercício 2 - Temperatura do equipamento

Faça um programa que solicite o valor da temperatura de um equipamento,
em °C.

A faixa normal de operação do equipamento vai de 0 a 30 °C.

Se a temperatura estiver fora dessa faixa, mostrar:
"Alerta: temperatura fora da faixa permitida!"

Caso contrário, mostrar:
"Temperatura normal."

Utilize o operador lógico || (OU) para criar uma condição composta
no comando if.
*/
#include <stdio.h>

int main(void) {
    float temperatura;

    printf("Digite o valor da temperatura (em °C): ");
    scanf("%f", &temperatura);

    if (temperatura < 0 || temperatura > 30) {
        printf("Alerta: temperatura fora da faixa permitida!\n");
    } else {
        printf("Temperatura normal.\n");
    }

    return 0;
}