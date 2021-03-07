#include <stdio.h>
/* 1번 */
int main(void)
{
    int su, cnt, hap = 0;

re:
    printf("정수값 입력: ");
    scanf_s("%d", &su, sizeof(su));
    if (su > 0) {
        for (cnt = 1; cnt <= su; cnt++) {
            if (cnt % 3 == 0) {
                hap = hap + cnt;
            }
        }
        printf("1부터 %d까지 3의 배수 누적 합계는 %d\n", su, hap);
        return 0;
    } else {
        printf("음의 정수값 %d는(은) 허용하지 않습니다.\n", su);
        printf("양의 정수값을 다시 입력하세요.\n");
        goto re;
    }
}