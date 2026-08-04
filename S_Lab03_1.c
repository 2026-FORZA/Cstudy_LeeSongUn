#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int A, B;

    // (1)과 (2) 위치에 들어갈 세 자리 자연수 입력
    if (scanf("%d %d", &A, &B) == 2) {
        // B의 자릿수 분리
        int b_ones = B % 10;            // 일의 자리 (예: 385 -> 5)
        int b_tens = (B / 10) % 10;     // 십의 자리 (예: 385 -> 8)
        int b_hundreds = B / 100;       // 백의 자리 (예: 385 -> 3)

        // (3) A * B의 일의 자리
        int line3 = A * b_ones;
        // (4) A * B의 십의 자리
        int line4 = A * b_tens;
        // (5) A * B의 백의 자리
        int line5 = A * b_hundreds;
        // (6) 전체 곱셈 결과 A * B
        int line6 = A * B;

        // 결과 출력
        printf("%d\n", line3);
        printf("%d\n", line4);
        printf("%d\n", line5);
        printf("%d\n", line6);
    }

    return 0;
}
#endif