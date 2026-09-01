#include <stdio.h>
#include <locale.h>

/* Calculo de média da Unip */
int main(void) {

    setlocale(LC_ALL, "Portuguese");
    
    float nota1, nota2, pim, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a nota do PIM: ");
    scanf("%f", &pim);
    media = (nota1 + nota2 + pim) / 3;
    printf("A média do aluno é: %.2f\n", media);
    return 0;
}