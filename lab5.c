#include <stdio.h>

int main(int argv, char ** argc) {
    int a[9] = {99, 88, 77, 66, 55, 44, 33, 22, 11};
    for (int i =0; i < 9; i++) { printf("%d\t", i); }
    printf("\n");
    for (int i =0; i < 9; i++) { printf("%d\t", a[i]); }
    printf("\n");

    int matrix1[2][2] = {1, 2, 3, 4};
    int matrix2[2][2] = {1, 0, 0, 1};
    int matrix3[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrix3[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }

    return 0;
}