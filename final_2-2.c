#include <stdio.h>
#include <stdlib.h>

void score_fun(void);
void grade_fun(int total);
void alpha_err(char alpha);
void jumsu_err(int jumsu);
void end_fun(char alpha);

int main(void)
{
    char alpha;
    printf("[ main( ) 함수 영역 ]\n");
    printf("프로그램을 시작하시겠습니까?(Yes/No) : ");
    scanf_s("%c", &alpha, sizeof(alpha));
    getchar();
    switch (alpha) {
    case 'Y':
    case 'y':
        score_fun();
        break;
    case 'N':
    case 'n':
        end_fun(alpha);
        break;
    default:
        alpha_err(alpha);
        break;
    }
}
void score_fun(void)
{
    int jumsu_1, jumsu_2, total;
re:
    printf("[ score_fun( ) 함수 영역 ]\n");
    printf("1차고사 점수입력(50점 만점) : ");
    scanf_s("%d", &jumsu_1, sizeof(jumsu_1));
    getchar();
    printf("2차고사 점수입력(50점 만점) : ");
    scanf_s("%d", &jumsu_2, sizeof(jumsu_2));
    getchar();
    if (jumsu_1 < 0 || jumsu_1 > 50) {
        jumsu_err(jumsu_1);
        goto re;

    } else if (jumsu_2 < 0 || jumsu_2 > 50) {
        jumsu_err(jumsu_2);
        goto re;
    } else {
        total = jumsu_1 + jumsu_2;
        grade_fun(total);
    }
}
void grade_fun(int total)
{
    printf("[ grade_fun( ) 함수 영역 ]\n");
    printf("score_fun( ) 함수에서 전달받은 값: %d", total);
    if (total >= 90 && total <= 100) {
        printf("등급 : 상\n");
    } else if (total >= 70 && total < 90) {
        printf("등급 : 중\n");
    } else if (total >= 0 && total < 70) {
        printf("등급 : 하\n");
    } else {
        jumsu_err(total);
    }
    main();
}
void alpha_err(char alpha)
{
    printf("[ alpha_err( ) 함수 영역 ]\n");
    printf("%c는 잘못된 입력입니다.\n", alpha);
    main();
}
void jumsu_err(int jumsu)
{
    printf("[ jumsu_err( ) 함수 영역 ]\n");
    printf("%d는 유효하지 않은 범위의 값입니다.\n", jumsu);
    score_fun();
}
void end_fun(char alpha)
{
    printf("[ end_fun( ) 함수 영역 ]\n");
    printf("main( ) 함수에서 프로그램 종료를 요청했습니다.\n");
    printf("알파벳 \"%c\"을 전달받아 프로그램을 종료합니다!!", alpha);
    exit(0);
}
