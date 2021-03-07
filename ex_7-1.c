#include <stdio.h>

int main(void)
{
    // 예제 7-1 for 문으로 10회 반복 출력

    for (int count = 0; count < 10; count++) {
        printf("%02d회 출력 : 안녕하세요.\n", count + 1);
    }

    return 0;
}