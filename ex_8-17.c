#include <stdio.h>

void Pr_ch(char ch, int num);

int main(void)
{
    char input;
    int n;

    printf("입력 예시 : T 8 (알파벳 [공백] 숫자 입력)\n");
    printf("\n[main() 함수 영역]\n\n");
    printf("문> 문자와 횟수(정수)를 입력 : ");

    scanf_s("%c %d", &input, sizeof(input), &n);
    Pr_ch(input, n);
    return 0;
}
void Pr_ch(char ch, int num)
{
    int cnt;
    printf("\n[Pr_ch() 함수 영역]\n\n");
    printf("답>");

    for (cnt = 1; cnt <= num; cnt++)
        printf("%c", ch);
    printf(" : %d회 출력 완료\n", cnt - 1);
}