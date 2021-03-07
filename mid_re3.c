#include <stdio.h>

int main(void)
{
    /* 캐시 프로그램 */

    // 변수 선언: rest(나머지) - remainder(%) 연산으로 필요 없어짐.
    int price1, price2, price3; // 가격1, 가격2, 가격3
    int total, change; // 합계, 거스름돈
    int w10000, w5000, w1000, w100; // 만원, 오천원, 천원, 백원

    // price1, price2, price3 차례대로 입력받기
    printf("세 개의 물건값을 입력하세요 :");
    scanf_s("%d %d %d", &price1, &price2, &price3, sizeof(price1), sizeof(price2), sizeof(price3));

    // total, change 계산
    total = price1 + price2 + price3; // 물건 세 개의 가격 합계
    change = 100000 - total; // 100000원에서 가격 합계를 제외한 거스름돈

    // 가격 합계가 100000원을 초과할 때
    if (total > 100000) {
        printf("가지고 있는 돈이 적어 물건을 살 수 없습니다. 다시 실행하세요\n");
        return 0;
    }

    // 가장 적은 수의 화폐와 동전 수 계산
    w10000 = change / 10000; // 거스름돈에서 10000원으로 나누어지는 몫
    w5000 = change % 10000 / 5000; // w10000 구하고 남은 rest(나머지)에서 5000원으로 나누어지는 몫
    w1000 = change % 5000 / 1000; // w5000 구하고 남은 rest(나머지)에서 1000원으로 나누어지는 몫
    w100 = change % 1000 / 100; // w1000 구하고 남은 rest(나머지)에서 100원으로 나누어지는 몫

    // 결과 출력
    printf("거스름돈은 %d원 입니다.\n", change);
    printf("만원권 : %d장\n", w10000);
    printf("오천원권 : %d장\n", w5000);
    printf("천원권 : %d장\n", w1000);
    printf("백원짜리 동전 : %d개\n", w100);

    return 0;
}