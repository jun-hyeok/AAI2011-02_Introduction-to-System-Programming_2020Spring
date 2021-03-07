#include <stdio.h>
// #define scanf_s scanf // gcc build in vscode

int main(void)
{
    /* 캐시 프로그램 */

    // 변수 선언: rest(나머지) - remainder(%) 연산으로 필요 없어짐.
    int price1, price2, price3; //             가격1, 가격2, 가격3
    int total, change; //                      합계, 거스름돈
    int w5000, w1000, w500, w100, w50, w10; // 오천원, 천원, 오백원, 백원, 십원

    // price1, price2, price3 차례대로 입력받기
    printf("세 개의 물건값을 입력하세요 :");
    scanf_s("%d %d %d", &price1, &price2, &price3);
    // scanf_s("%d %d %d", &price1, sizeof(price1), &price2, sizeof(price2), &price3, sizeof(price3)); // ms build in vs

    // total, change 계산
    total = price1 + price2 + price3; // 물건 세 개의 가격 합계
    change = 50000 - total; //           50000원에서 가격 합계를 제외한 거스름돈

    // (옵션)가격 합계가 50000원을 초과할 때
    /* if (total > 5000) {
        printf("가지고 있는 돈이 적어 물건을 살 수 없습니다. 다시 실행하세요\n");
        return 0;
    } */

    // 가장 적은 수의 화폐와 동전 수 계산
    w5000 = change / 5000; //        거스름돈에서 5000원으로 나누어지는 몫
    w1000 = change % 5000 / 1000; // w5000 구하고 남은 rest(나머지)에서 1000원으로 나누어지는 몫
    w500 = change % 1000 / 500; //   w1000 구하고 남은 rest(나머지)에서 500원으로 나누어지는 몫
    w100 = change % 500 / 100; //    w500 구하고 남은 rest(나머지)에서 100원으로 나누어지는 몫
    w50 = change % 100 / 50; //      w100 구하고 남은 rest(나머지)에서 50원으로 나누어지는 몫
    w10 = change % 50 / 10; //       w50 구하고 남은 rest(나머지)에서 10원으로 나누어지는 몫

    // 결과 출력
    printf("거스름돈은 %d원 입니다.\n", change);
    printf("오천원권 : %d장\n", w5000);
    printf("천원권 : %d장\n", w1000);
    printf("오백원짜리 동전 : %d개\n", w500);
    printf("백원짜리 동전 : %d개\n", w100);
    printf("오십원짜리 동전 : %d개\n", w50);
    printf("십원짜리 동전 : %d개\n", w10);

    return 0;
}