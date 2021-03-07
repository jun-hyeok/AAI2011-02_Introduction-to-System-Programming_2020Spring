#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 45

int main(void)
{
    // 예제 8-2 srand() 함수로 실행할 때마다 다른 임의의 숫자 출력

    int cnt;

    printf("1~45 중에서 숫자 6개를 출력\n");
    srand((unsigned)time(NULL));

    printf("srand() 출력 : ");
    for (int cnt = 1; cnt < 6; cnt++)
        printf("%d ", 1 + (rand() % NUM));
    printf("\n");
    return 0;
}