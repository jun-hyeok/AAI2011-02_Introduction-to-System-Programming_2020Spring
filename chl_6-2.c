#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
    // 도전문제

    int input, check;

    printf("정수 입력 : ");
    scanf_s("%d", &input);

    switch (check) {
    case 0:
        printf("입력한 %d은(는) 3의 배수입니다.\n", input);
        break;

    default:
        printf("입력한 %d은(는) 3의 배수가 아닙니다.\n", input);
        break;
    }

    return 0;
}