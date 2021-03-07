#include <stdio.h>

int main(void)
{
    // 예제 7-7 중첩 for 문으로 1부터 10까지 누적 함계 출력

    int dan, cnt, gob;

    for (dan = 2; dan <= 9; dan++) {
        for (cnt = 1; cnt <= 9; cnt++) {
            gob = dan * cnt;
            printf("%d x %d = %02d", dan, cnt, gob);
            printf("바깥쪽 for 문 %d일때, 안쪽 for 문은 %d\n", dan, cnt);
        }
        printf("\n");
    }
    return 0;
}