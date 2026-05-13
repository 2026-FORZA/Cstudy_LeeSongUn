#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	void f()
	{
		if (n % 2 == 0) {
			printf("even");
		}
		else {
			printf("odd");
		}
	}

	int main()
	{
		scanf("%d", &n);
		f(n);
		return 0;
	}

	return 0;
}
#endif