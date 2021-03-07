#include <stdio.h>

int my_power(int base, int exp);

int main(void)
{
    // 연습문제 7-1-4 제출 ㄴㄴ

    int res;

    res = my_power(2, 10);
    printf("%.2lfm\n", res);

    return 0;
}

int my_power(int base, int exp)
{
    int temp;

    temp = base ^ exp;

    return temp;
}