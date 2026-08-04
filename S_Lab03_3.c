#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

// N의 최대 범위인 10,000,000 크기의 배열
// 메인 함수 내부가 아닌 전역 변수로 선언하여 스택 오버플로우 방지
#define MAX 10000000
bool is_prime[MAX + 1];

int main() {
    int M, N;

    if (scanf("%d %d", &M, &N) != 2) return 0;

    // 1. 처음에는 모든 수를 소수로 가정 (true 초기화)
    for (int i = 2; i <= N; i++) {
        is_prime[i] = true;
    }

    // 2. 에라토스테네스의 체 알고리즘 적용
    // i * i <= N 까지만 확인하면 충분함
    for (int i = 2; (long long)i * i <= N; i++) {
        if (is_prime[i]) {
            // i가 소수라면, i의 배수들을 모두 소수에서 제외 (false)
            for (int j = i * i; j <= N; j += i) {
                is_prime[j] = false;
            }
        }
    }

    // 3. M부터 N까지의 소수 개수 세기
    int count = 0;
    for (int i = M; i <= N; i++) {
        if (is_prime[i]) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
#endif