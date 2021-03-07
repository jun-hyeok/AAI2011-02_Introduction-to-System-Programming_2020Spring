#include <stdio.h>

int main(void)
{
    // 예제 7-3 for 문으로 1부터 10까지 누적 함계 출력

    int count, hap = 0;

    for (count = 1; count <= 10; count++) {

        hap += count;
        printf("%02d까지 누적합 출력 : hap = %02d\n", count, hap);
    }
    printf("1 + 2 + ~ + 9 + 10 = %02d\n", hap);
    return 0;
}