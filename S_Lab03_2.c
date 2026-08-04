#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str[10001];
    int koi_count = 0;
    int ioi_count = 0;

    // 문자열 입력 (최대 10,000자)
    if (scanf("%10000s", str) == 1) {
        int len = strlen(str);

        // 연속 3글자를 검사해야 하므로 len - 2까지 반복
        for (int i = 0; i < len - 2; i++) {
            // "KOI" 검사
            if (str[i] == 'K' && str[i + 1] == 'O' && str[i + 2] == 'I') {
                koi_count++;
            }
            // "IOI" 검사
            if (str[i] == 'I' && str[i + 1] == 'O' && str[i + 2] == 'I') {
                ioi_count++;
            }
        }

        // 결과 출력 (첫 줄: KOI 개수, 둘째 줄: IOI 개수)
        printf("%d\n", koi_count);
        printf("%d\n", ioi_count);
    }

    return 0;
}
#endif