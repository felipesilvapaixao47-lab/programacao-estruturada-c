/*
Exercício 1 - Aprovação do aluno

Faça um programa que leia a nota final e a frequência de um(a) aluno(a).

O programa deve mostrar:
"Aluno(a) aprovado(a)" se a nota for maior ou igual a 5
e a frequência for maior ou igual a 75%.

Caso contrário, mostrar:
"Aluno(a) reprovado(a)".

Utilize o operador lógico && (E) para criar uma condição composta
no comando if.
*/

#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    float nota, frequencia;

    printf("Digite a nota final do(a) aluno(a): ");
    scanf("%f", &nota);

    printf("Digite a frequência do(a) aluno(a) (em porcentagem): ");
    scanf("%f", &frequencia);

    if (nota >= 5 && frequencia >= 75) {
        printf("Aluno(a) aprovado(a)\n");
    } else {
        printf("Aluno(a) reprovado(a)\n");
    }

    return 0;
}