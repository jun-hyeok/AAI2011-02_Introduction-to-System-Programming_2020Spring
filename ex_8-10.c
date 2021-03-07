#include <stdio.h>

void Insa();

int main(void)
{
    // 예제 8-10

    printf("사용자 정의 함수를 호출합니다.\n");
    Insa();
    return 0;
}

void Insa()
{
    printf("\n[Insa() 함수 영역]\n");
    printf("\n오늘 하루도 행복하세요!\n");
}