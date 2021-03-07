#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
    // 예제 7-10 while 문으로 1부터 입력받은 수까지 누적 합계 출력

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
        while (cnt <= su) {
            hap += cnt;
            printf("%03d회 반복 누적합 : %5d\n", cnt, hap);
            cnt++;
        }
        printf("1부터 %d까지의 누적합 : %5d\n", su, hap);
    }
    return 0;
}