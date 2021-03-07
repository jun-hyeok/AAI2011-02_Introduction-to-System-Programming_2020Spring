#include <stdio.h>

int main(void)
{
    // 예제 7-2 for 문으로 10회 반복 출력 후 카운트 횟수 출력

    int count;

    for (count = 1; count <= 10; count++) {
        printf("%02d회 출력 : 안녕하세요.\n", count);
    }
    printf("for 문 종료 후 카운트 변수의 값 : %02d\n", count);
    return 0;
}