#include <stdio.h>

int main(void)
{
    // 예제 7-9 중첩 for 문으로 *를 1개부터 5개까지 출력

    int cnt, star, su = 5;

    for (cnt = 1; cnt <= 5; cnt++) {
        printf("%d행 : ", cnt);
        for (star = 5; star >= cnt; star--) {
            printf(" * ");
        }
        printf("5개 중에서 %d개 반복 출력\n", su--);
    }
    return 0;
}