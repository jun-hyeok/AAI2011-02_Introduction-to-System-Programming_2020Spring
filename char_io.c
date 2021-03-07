#include <stdio.h>

int main(void)
{
    char op, str[12];
    printf("1.문자 입력:");
    scanf_s("%c", &op, sizeof(op));
    getchar();

    printf("2.문자열 입력:");
    scanf_s("%s", str, sizeof(str));

    printf("문자 출력:%c\t",op);
    printf("문자열 출력:|%-12s|\n",str);


}