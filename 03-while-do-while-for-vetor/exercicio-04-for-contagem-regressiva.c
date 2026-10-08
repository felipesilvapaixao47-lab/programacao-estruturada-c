/*
Exercício 04 - Contagem regressiva

Utilizando o laço for, realizar uma contagem regressiva
de 10 até 0 e, ao final, exibir a mensagem "FIM!".
*/

#include <stdio.h>
#include <windows.h>

int main(void){
    int i;
    for(i=10;i>=0;i--){
        printf("%d\n",i);
        Sleep(1000);
    }
    printf("FIM!\n");
    return 0;
}