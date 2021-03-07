#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 예제 8-1 rand() 함수로 임의의 숫자 출력

    printf("1~45 중에서 숫자 6개 출력\n");
    printf("rand() : ");
    for (int cnt = 1; cnt <= 6; cnt++)
        printf("%d ", rand());

    printf("\nrand() %% 45 : ");
    for (int cnt = 1; cnt <= 6; cnt++)
        printf("%d ", rand() % 45);

    printf("\n1+(rand() %% 45) : ");
    for (int cnt = 1; cnt <= 6; cnt++)
        printf("%d ", 1 + rand() % 45);
    printf("\n");
    return 0;
}