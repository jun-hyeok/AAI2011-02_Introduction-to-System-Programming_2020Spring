#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
    // 예제 6-4 if ~ else 문으로 홀수와 짝수 판별

    int input_num, result;

    printf("정수 입력 : ");
    scanf_s("%d", &input_num);

    result = input_num % 2;

    if (result != 0) {
        printf("입력한 정수 %d는(은) \"홀수\"입니다.\n", input_num);
    } else {
        printf("입력한 정수 %d는(은) \"짝수\"입니다.\n", input_num);
    }

    return 0;
}