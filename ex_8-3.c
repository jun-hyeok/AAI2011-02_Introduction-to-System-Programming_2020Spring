#include <math.h>
#include <stdio.h>

int main(void)
{
    // 예제 8-3 실수형 상수에 올림 함수 ceil()과 내림 함수 floor()사용

    double result, target = 3.5;

    printf("double형 변수 target의 값 : 3.5\n");

    result = ceil(target);
    printf("올림 함수 ceil() 사용 결과 : %.2lf\n", result);

    result = floor(target);
    printf("내림 함수 floor() 사용 결과 : %.2lf\n", result);
    return 0;
}