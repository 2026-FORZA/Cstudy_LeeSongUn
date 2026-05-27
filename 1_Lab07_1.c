#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Student {
    char name[11];
    int score1;
    int score2;
    int score3;
};

int main() {
    int n;
    struct Student s[100];

    if (scanf("%d", &n) != 1) return 0;

    int max_score1 = -1;
    int target_idx = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", s[i].name, &s[i].score1, &s[i].score2, &s[i].score3);

        if (s[i].score1 > max_score1) {
            max_score1 = s[i].score1;
            target_idx = i;
        }
    }

    int rank2 = 1;
    int rank3 = 1;

    for (int i = 0; i < n; i++) {
        if (s[i].score2 > s[target_idx].score2) {
            rank2++;
        }
        if (s[i].score3 > s[target_idx].score3) {
            rank3++;
        }
    }

    printf("%s %d %d\n", s[target_idx].name, rank2, rank3);

    return 0;
}
#endif


