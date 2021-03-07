#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
    // 예제 7-11 while 문으로 무한 반복문 수행

    int su, cnt, hap = 0;

re:
    printf("어디까지의 합을 구할까요 : ");
    scanf_s("%d", &su);

    if (su < 0) {
        printf("음의 정수는 허용하지 않습니다.\n");
        printf("프로그램을 다시 시작합니다.\n");
        goto re;
    } else {
        cnt = 1;
        while (1) {
            if (hap > 50) {
                break;
            } else {
                hap += cnt;
            }
            printf("%d회 반복 누적합 : %5d\n", cnt, hap);
            cnt++;
        }
        printf("누적되는 합이 50을 초과하였습니다.\n");
        printf("1부터 %d까지의 누적합 : %d\n", cnt - 1, hap);
    }
    return 0;
}