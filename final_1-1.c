#include <stdio.h>

int main(void)
{
    // 문제1 숫자 맞추기 게임
    int right = 25; // 정답
    int num, cnt = 0; // 숫자, 시도 횟수
    while (1) {
        printf("숫자 입력(1부터 50까지) : ");
        scanf_s("%d", &num, sizeof(num));
        cnt++;
        if (num > right) {
            // 입력한 숫자가 정답보다 큰 경우
            printf("%d보다 작습니다!\n", num);
        } else if (num < right) {
            // 입력한 숫자가 정답보다 작은 경우
            printf("%d보다 큽니다!\n", num);
        } else {
            printf("정답입니다!\n");
            printf("시도한 횟수는 %d회 입니다.\n", cnt);
            return 0;
        }
    }
}