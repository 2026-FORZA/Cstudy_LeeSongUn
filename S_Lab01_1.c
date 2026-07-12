#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int divisors[10000];
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors[count] = i;
            count++;
        }
    }

    if (k <= count) {
        printf("%d\n", divisors[k - 1]);
    }
    else {
        printf("-1\n");
    }

    return 0;
}
#endif
