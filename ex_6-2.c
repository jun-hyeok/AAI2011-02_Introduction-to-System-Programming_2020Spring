#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
    // 예제 6-2 코드 블록을 선언하지 않은 if 문 - 오류 발생

    int input_num;

    printf("정수 입력 : ");
    scanf_s("%d", &input_num);

    if (input_num > 0)
        printf("입력한 정수 %d는(은) 양의 정수입니다.\n", input_num);
    printf("조건문은 참입니다.\n");

    return 0;
}