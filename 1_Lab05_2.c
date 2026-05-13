#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
    char grade(int k)
    {
        if (k >= 90) return 'A';
        else if (k >= 80) return 'B';
        else if (k >= 70) return 'C';
        else if (k >= 60) return 'D';
        else return 'F';
    }

    int main()
    {
        scanf("%d", &n);
        printf("%c", grade(n));
        return 0;
    }
	return 0;
}
#endif