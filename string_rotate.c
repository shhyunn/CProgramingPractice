#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char* array1 = malloc(sizeof(char) * 31);
    char* array2 = malloc(sizeof(char) * 31);

    scanf("%[^\n]s", array1);

    int index = 0;

    for (int j = 0; j < strlen(array1); j++) {
        if (array1[j] != ' ') {
            array2[index] = array1[j];
            index++;
        }
    }
    array2[index] = '\0';

    int length = strlen(array2);
    int res = 1;

    for (int i = 0; i < length / 2; i++) {
        if (array2[i] != array2[length - i - 1]) {
            res = 0;
            break;
        }
    }
    free(array1);
    free(array2);
    
    printf("%d", res);
    return 0;
}