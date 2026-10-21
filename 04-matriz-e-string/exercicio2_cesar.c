/*
Exercicio 2 - Codigo de Cesar

Desenvolva um programa em C que leia uma string de ate 60 caracteres
e codifique o texto utilizando o Codigo de Cesar com deslocamento
de uma posicao no alfabeto.

Cada letra deve ser substituida pela proxima letra do alfabeto.
Quando a letra for 'z', ela deve ser substituida por 'a'.

Exemplo:
Texto original: o zumbido da abelha.
Texto codificado: p avncjep eb bcfmib.

O programa deve exibir a string codificada na tela.

Dica: utilize o codigo ASCII dos caracteres para realizar a
substituicao das letras.
*/

#include <stdio.h>

int main(void) {
    char str[61], strCodif[61];
    int i;

    printf("Digite uma string limitada a 60 caracteres: ");
    scanf("%60[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 32 && str[i] <= 64) {
            // 32 a 64: espacos, simbolos, pontuacao e algarismos
            strCodif[i] = str[i];
        } else {
            if (str[i] == 'z' || str[i] == 'Z') {
                strCodif[i] = str[i] - 25;
            } else {
                strCodif[i] = str[i] + 1;
            }
        }
    }

    strCodif[i] = '\0';

    puts("String codificada: ");
    puts(strCodif);

    return 0;
}