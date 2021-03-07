#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
    // 예제 7-5 입력한 수까지 5의 배수 누적 합계 출력

    int count, su, hap = 0;

    printf("어디까지 5의 배수를 구할까요 : ");
    scanf_s("%d", &su);

    for (count = 5; count <= su; count += 5) {

        hap += count;
        printf("%d까지 5의 배수 누적 합계 출력 : %03d\n", count, hap);
    }
    printf("%d까지 5의 배수 누적 합계 출력 : %03d\n", su, hap);
    return 0;
}