#include<stdio.h>
#include<locale.h>

/* Código ASCII */
int main() {
    setlocale(LC_ALL, "Portuguese");
    char caractere;
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);
    printf("O código ASCII de %c é %d\n", caractere, (int)caractere);
    return 0;
}
