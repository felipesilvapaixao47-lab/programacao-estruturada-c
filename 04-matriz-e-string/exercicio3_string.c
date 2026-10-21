/*
Exercicio 3 - Contagem e concatenacao de string

Crie um programa em C que leia uma string do teclado,
com no maximo 20 caracteres.

O programa deve:
1. Exibir a quantidade de caracteres da string.
2. Copiar o conteudo da string para outra string.
3. Acrescentar um ponto de exclamacao (!) ao final do texto copiado.
4. Exibir a nova string na tela.

Dica: utilize as funcoes strlen(), strcpy() e strcat(),
disponiveis na biblioteca string.h.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[21], strConcat[22];

    printf("Digite uma string limitada a 20 caracteres: ");
    scanf("%20[^\n]", str);

    printf("A string tem %d caracteres.\n", (int)strlen(str));

    strcpy(strConcat, str);
    strcat(strConcat, "!");

    printf("String concatenada: %s", strConcat);

    return 0;
}