#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int row, col;
    scanf("%d %d", &row, &col);
    char** array1 = malloc(sizeof(char*) * row);

    for (int i = 0; i < col; i++) {
        array1[i] = malloc(sizeof(char) * (col + 1));
    }

    for (int j = 0; j < row; j++) {
        scanf("%s", array1[j]);
    }

    for (int n = 0; n < row; n++) {
        for (int o = 0; o < col; o++) {
            if (array1[n][o] != '*') {
                array1[n][o] = '0';
            }
        }
    }

    for (int p = 0; p < row; p++) {
        for (int q = 0; q < col; q++) {
            if (array1[p][q] == '*')  //Áö·ÚÀÏ °æ¿ì
            {
                for (int r = p - 1; r < p + 2; r++) {
                    for (int s = q - 1; s < q + 2; s++) {
                        if (r < 0 || s < 0 || r >= row || s >= col || array1[p][q] == array1[r][s] || array1[r][s] == '*') {
                            continue;
                        }
                        array1[r][s] += 1;
                    }
                }
            }
        }
    }

    for (int k = 0; k < row; k++) {
        for (int m = 0; m < col; m++) {
            printf("%c", array1[k][m]);
        }
        printf("\n");
    }

    for (int l = 0; l < row; l++) {
        free(array1[l]);
    }

    free(array1);

    return 0;
}