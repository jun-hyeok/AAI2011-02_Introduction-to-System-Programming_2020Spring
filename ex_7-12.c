#include <stdio.h>

int main(void)
{
    // 예제 7-12

    int cnt = 0;
    while (cnt < 30) {
        cnt++;
        printf("%3d", cnt);
        if ((cnt % 5) == 0) {
            printf("\n");
        }
    }
    return 0;
}