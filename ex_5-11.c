#include <stdio.h>

int main(void)
{
    // 예제 5-11 시프트 연산자로 비트 연산

    int num, val1, val2, val3, val4, val5;
    num = 5;

    val1 = num << 1;
    val2 = num << 2;
    val3 = num >> 1;
    val4 = num >> 2;

    printf("num = 5일 때\n");
    printf("1. 왼쪽 시프트 연산\n");
    printf("num << 1 : %d\n", val1);
    printf("num << 2 : %d\n", val2);
    printf("2. 오른쪽 시프트 연산\n");
    printf("num >> 1 : %d\n", val3);
    printf("num >> 2 : %d\n", val4);
    return 0;
}