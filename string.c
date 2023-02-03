
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char* array1 = malloc(sizeof(char) * 1001);
    scanf("%[^\n]s", array1);
    char* ptr = strtok(array1, " .,");
    int cnt = 0;
    while (ptr != NULL) {
        if (strcmp(ptr, "the") == 0) {
            cnt += 1;
        }
        ptr = strtok(NULL, " .,");
    }
    free(array1);
    printf("%d\n", cnt);

    return 0;
}


