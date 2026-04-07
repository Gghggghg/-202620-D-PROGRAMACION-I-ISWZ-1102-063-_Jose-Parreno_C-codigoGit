include <stdio.h>
int main(void)
{
    int p[3][3] = { {1, 3, -4}, {1, 1, -2}, {-1, -2, 5} };
    int q[3][3] = { {8, 3, 0}, {3, 10, 2}, {0, 2, 6} };
    int r[3][3];
    int i, j, k;
    int sum;

    /* Multiplica las matrices p y q */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum = 0;
            // Calcula el elemento ´k´ es solo otro ´i´ para hacer calculos
            for (k = 0; k < 3; k++)
                sum += p[i][k] * q[k][j];
            r[i][j] = sum;
        }
    }

    /* Imprime el resultado */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d\t", r[i][j]);
        printf("\n");
    }

    return 0;
}
