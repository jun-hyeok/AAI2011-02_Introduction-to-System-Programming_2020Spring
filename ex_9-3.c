#include <stdio.h>

int main(void)
{
    int cnt, sum = 0;
    printf("1부터 10까지 누적 합계 출력\n");

    for (cnt = 1; cnt <= 10; cnt++) {
        char alpha = 'Q';
        sum += cnt;
        printf("실행 %c : 1부터 %d까지 누적 합계 : %d\n", alpha, cnt, sum);
    }
    return 0;
}