#include <stdio.h>

void matrixAddition(int m1[][2], int m2[][2], int result[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

int main() {
    int m1[2][2] = {{1, 2}, {3, 4}};
    int m2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];
    matrixAddition(m1, m2, result);
    printf("Resultant Matrix after Addition:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
