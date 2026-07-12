#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    // 숫자 0~9에 해당하는 대시(세그먼트)의 개수
    int segment[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };

    char str[51];
    scanf("%s", str);

    int total = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        int digit = str[i] - '0';
        total += segment[digit];
    }

    printf("%d\n", total);

    return 0;
}
#endif
