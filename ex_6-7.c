#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
    // 예제 6-7 중첩 if ~ else 문으로 등급 판별

    int jumsu;
    char grade;

    printf("정수 입력 : ");
    scanf_s("%d", &jumsu);

    if (jumsu > 100 || jumsu < 0) {
        printf("점수 허용 구간(0~100)이 아닙니다.\n");
        printf("프로그램을 다시 시작하세요.\n");
        return 0;
    } else {
        if (jumsu >= 90)
            grade = 'A';
        else if (jumsu >= 80)
            grade = 'B';
        else if (jumsu >= 70)
            grade = 'C';
        else if (jumsu >= 60)
            grade = 'D';
        else
            grade = 'F';
    }

    printf("입력한 점수 : %d\n", jumsu);
    printf("점수 등급 : %c학점\n", grade);
    return 0;
}