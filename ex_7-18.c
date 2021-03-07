#include <stdio.h>

int sum()
{
    int a = 10, b = 20, hap;
    hap = a + b;
    return hap;
}

int main(void)
{
    // 예제 7-18 사용자 정의 함수에서 return 문 활용

    int result;

    printf("sum() 함수의 덧셈연산\n");
    result = sum();

    printf("a=10, b=20일 때");
    printf("결과는 %d\n", result);
    return 0;
}