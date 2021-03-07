#include <stdio.h>

int main(void)
{
    // 예제 7-16 continue 문으로 짝수의 누적 합계 출력

    int cnt, su, hap = 0;
    printf("홀수는 continue 문을 사용하여 건너 뜁니다.\n");
    printf("정수 입력 : ");

    scanf_s("%d", &su);

    for (cnt = 1; cnt <= su; cnt++) {
        if ((cnt % 2) != 0) {
            continue;
        } else {
            hap += cnt;
            printf("%3d", cnt);
            if ((cnt % 20) == 0) {
                printf("\n");
            }
        }
    }
    printf("\n 1부터 %d까지 짝수의 누적 합계 : %d\n", su, hap);
    return 0;
}