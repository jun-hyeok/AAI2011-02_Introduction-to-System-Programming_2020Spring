#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
    // 도전문제

    int keynum, result;

    printf("정수 입력 : ");
    scanf_s("%d", &keynum);

    result = keynum % 2;
    if (result != 0) {
        printf("입력한 %d은(는) \"홀수\"입니다.\n", keynum);
    } else {
        printf("입력한 %d은(는) \"짝수\"입니다.\n", keynum);
    }

    return 0;
}