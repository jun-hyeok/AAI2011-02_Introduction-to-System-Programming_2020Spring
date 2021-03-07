#include <stdio.h>

int main(void)
{
    // 예제 7-15 누적 합계가 1000을 넘으면 반복문 탈출

    int su, cnt, hap = 0;

re:
    printf("어디까지 합을 구할까요 : ");
    scanf_s("%d", &su);

    if (su < 0) {
        printf("음의 정수는 허용하지 않습니다.\n");
        printf("프로그램을 다시 시작합니다.\n\n");
        goto re;
    } else {
        cnt = 1;
        do {
            if (hap > 1000) {
                printf("누적되는 합이 1000을 초과하였습니다.\n");
                break;
            } else {
                hap += cnt;
            }
            printf("%d회 반복 누적합 : %d\n", cnt, hap);
            cnt++;
        } while (cnt <= su);
        printf("1부터 %d까지의 누적합 : %d\n", cnt - 1, hap);
    }
    return 0;
}