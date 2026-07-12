#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    // 입력 값 검증
    if (n < 1 || n > 100 || m < 1 || m > 3) {
        printf("INPUT ERROR!\n");
        return 0;
    }

    if (m == 1) {
        // 종류1: 왼쪽 정렬, 별 개수 1개씩 증가
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (m == 2) {
        // 종류2: 오른쪽 정렬, 별 개수 감소 (공백 증가)
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i - 1; j++) {
                printf(" ");
            }
            for (int j = 0; j < n - i + 1; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (m == 3) {
        // 종류3: 가운데 정렬 피라미드 (별 개수 2i-1개)
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < n - i; j++) {
                printf(" ");
            }
            for (int j = 0; j < 2 * i - 1; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
#endif