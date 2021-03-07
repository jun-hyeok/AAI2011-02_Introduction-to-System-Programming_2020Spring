#include <stdio.h>

int main(void)
{
    // 구구단 출력
    for (int i = 2; i < 9; i++) {
        if (i % 2 != 0) {
            // 짝수가 아닌 경우
            continue;
        } else {
            // 짝수인 경우
            for (int j = 1; j < 9; j++) {
                printf("%d X %d = %d\n", i, j, i * j);
                if (i == j)
                    break;
            }
            printf("\n");
        }
    }
    return 0;
}