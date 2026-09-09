/*
Atividade 3 - Preço final do produto acrescido de imposto

Faça um programa que leia o valor de um produto e o estado de destino.
O programa deve mostrar o preço final do produto acrescido do imposto
correspondente ao estado escolhido.

Estados:
m - MG - 7%
s - SP - 12%
r - RJ - 15%
k - MS - 8%

Caso o estado digitado não seja válido, mostrar uma mensagem de erro.
*/
#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    float valor;
    char estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    fflush(stdin); // Limpa o buffer do teclado para evitar problemas com o scanf
    printf("Digite o estado de destino (m - MG, s - SP, r - RJ, k - MS): ");
    scanf(" %c", &estado);

    switch (estado) {
        case 'm':
            printf("O preço final do produto é: R$ %.2f\n", valor*1.07); // 7% de imposto
            break;
        case 's':
            printf("O preço final do produto é: R$ %.2f\n", valor*1.12); // 12% de imposto
            break;
        case 'r':
            printf("O preço final do produto é: R$ %.2f\n", valor*1.15); // 15% de imposto
            break;
        case 'k':
            printf("O preço final do produto é: R$ %.2f\n", valor*1.08); // 8% de imposto
            break;
        default:
            printf("Estado inválido.\n");
            return 1; // Retorna erro
    }

    return 0;
}