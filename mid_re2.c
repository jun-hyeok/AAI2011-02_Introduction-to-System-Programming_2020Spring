#include <stdio.h>

int main(void)
{
    /* 전기요금 프로그램 */

    // 변수 선언
    int amount, basic; // 전기 사용량(kW), 기본요금
    double price, tax, total; //  사용량 * kW당 요금, 세금, 전체 사용요금(기본요금 + 사용량 * kW당 요금)

    // 전기 사용량 입력
    printf("전기 사용량을 입력하세요(kW): ");
    scanf_s("%d", &amount);

    // 전기 사용량이 없거나 잘못 입력할 때
    if (amount <= 0) {
        printf("다시 실행하세요.\n");
        return 0;
    }

    // 기본 요금, 사용량 * kW당 요금 계산 : 구간별 초과량 * kW당 요금 + 이전 구간 요금
    if (amount > 500) // 500kW 초과
    {
        basic = 9330;
        price = (amount % 500) * 494.0 + 100 * (52.0 + 88.5 + 127.8 + 184.3 + 274.3);
    } else if (amount > 400) // 401 ~ 500kW
    {
        basic = 5130;
        price = (amount % 400) * 274.3 + 100 * (52.0 + 88.5 + 127.8 + 184.3);
    } else if (amount > 300) // 301 ~ 400kW
    {
        basic = 2710;
        price = (amount % 300) * 184.3 + 100 * (52.0 + 88.5 + 127.8);
    } else if (amount > 200) // 201 ~ 300kW
    {
        basic = 1130;
        price = (amount % 200) * 127.8 + 100 * (52.0 + 88.5);
    } else if (amount > 100) // 101 ~ 200kW
    {
        basic = 660;
        price = (amount % 100) * 88.5 + 100 * 52.0;
    } else // 1 ~ 100kW
    {
        basic = 370;
        price = amount * 52.0;
    }
    total = basic + price; // 전체 사용요금
    tax = total * 0.09; // 세금 = 전체 사용요금의 9%

    // 결과 출력
    printf("이번 달 요금은 %.0lf원입니다.\n", total + tax); // 이번 달 요금 = 전체 사용요금 + 세금

    return 0;
}