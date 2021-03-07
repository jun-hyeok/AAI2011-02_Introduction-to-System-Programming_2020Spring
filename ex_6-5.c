#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
    // 예제 6-5 if ~ else 문으로 알파벳의 대소 문자 판별

    char alphabet;

    printf("알파벳 입력 : ");
    scanf_s("%c", &alphabet /* , sizeof(alphabet) */);

    if (alphabet >= 'A' && alphabet <= 'Z') {
        printf("입력한 알파벳 %c는(은) \"대문자\"이고\n", alphabet);
        printf("아스키코드값은 %d입니다.\n", alphabet);
    } else {
        printf("입력한 알파벳 %c는(은) \"소문자\"이고\n", alphabet);
        printf("아스키코드값은 %d입니다.\n", alphabet);
    }

    return 0;
}