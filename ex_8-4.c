#include <math.h>
#include <stdio.h>

int main(void)
{
    // 예제 8-4 fabs() 함수로 실수의 절댓값 출력

    double result, age1, age2;

    printf("내 나이 입력 : ");
    scanf_s("%lf", &age1);
    printf("선생님 나이 입력 : ");
    scanf_s("%lf", &age2);

    result = age1 - age2;
    printf("[뺄셈 연산] %.0lf세 - %.0lf세 = %3.0lf세\n", age1, age2, result);

    result = fabs(age1 - age2);
    printf("[절댓값] %.0lf세 - %.0lf세 = %3.0lf세\n", age1, age2, result);

    return 0;
}