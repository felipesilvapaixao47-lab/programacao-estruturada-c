#include <stdio.h>

int main(void) {
    float receita[3][2], gasto[3][2], lu[3][2];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Receita e gasto no semestre %d de %d: ",
                   j + 1, i + 2020);

            scanf("%f %f", &receita[i][j], &gasto[i][j]);

            lu[i][j] = receita[i][j] - gasto[i][j];
        }
    }

    printf("\tSem.1\t\tSem.2\n");
    printf("2020\t%.1f\t\t%.1f\n", lu[0][0], lu[0][1]);
    printf("2021\t%.1f\t\t%.1f\n", lu[1][0], lu[1][1]);
    printf("2022\t%.1f\t\t%.1f\n", lu[2][0], lu[2][1]);

    return 0;
}
