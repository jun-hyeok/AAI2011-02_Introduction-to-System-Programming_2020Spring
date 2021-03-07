#include <stdio.h>

int main(void)
{
    // 예제 7-8 중첩 for 문으로 *를 1개부터 5개까지 출력

    int cnt, star;

    for (cnt = 1; cnt <= 5; cnt++) {
        printf("%d행 : ", cnt);
        for (star = 1; star <= cnt; star++) {
            printf(" * ");
        }
        printf("1개부터 %d개까지 반복 출력\n", cnt);
    }
    return 0;
}