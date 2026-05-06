#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int arr[1000];

	if (scanf("%d", &n) == 1) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		for (int i = n - 1; i >= 0; i--) {
			printf("%d ", arr[i]);
		}
	}

	return 0;
}
#endif