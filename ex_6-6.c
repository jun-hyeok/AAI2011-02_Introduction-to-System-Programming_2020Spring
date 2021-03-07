#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
    // 예제 6-6 다중 if ~ else 문으로 등급 판별

    int jumsu;
    char* grade;

    printf("정수 입력 : ");
    scanf_s("%d", &jumsu);

    if (jumsu >= 90)
        grade = "A학점";
    else if (jumsu >= 80)
        grade = "B학점";
    else if (jumsu >= 70)
        grade = "C학점";
    else if (jumsu >= 60)
        grade = "D학점";
    else
        grade = "F학점";

    printf("점수 등급 : %s\n", grade);
    return 0;
}