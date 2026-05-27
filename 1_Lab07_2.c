#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    char* str = (char*)malloc(sizeof(char) * 100);
    int a, b;

    if (str == NULL) {
        return -1;
    }

    if (scanf("%s", str) != 1) {
        free(str);
        return 0;
    }

    if (scanf("%d %d", &a, &b) != 1) {
        free(str);
        return 0;
    }

    for (int i = a - 1; i < b; i++) {
        printf("%c", *(str + i));
    }

   
    printf("\n");

    free(str);

    return 0;
}
#endif