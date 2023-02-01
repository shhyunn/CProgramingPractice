#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num;
    scanf("%d", &num);

    int** array1 = malloc(sizeof(int*) * num);

    for (int i = 0; i < num; i++) {
        array1[i] = malloc(sizeof(int) * num);
    }

    for (int j = 0; j < num; j++) {
        for (int k = 0; k < num; k++) {
            if (j == k) {
                array1[j][k] = 1;
            }
            else
                array1[j][k] = 0;
        }
    }

    for (int p = 0; p < num; p++) {
        for (int r = 0; r < num; r++) {
            printf("%d ", array1[p][r]);
        }
        printf("\n");
    }

    for (int h = 0; h < num; h++) {
        free(array1[h]);
    }

    free(array1);

    return 0;
}