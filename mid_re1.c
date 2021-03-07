#include <stdio.h>

int main(void)
{
    /* 자동차 주행시간 측정 프로그램 */

    // 변수 선언
    int mileage, speed, rest; // 거리(km), 속력(km/h), 나머지(거리%속력)
    int hour, min; // 시, 분
    double sec; // 초

    // 거리와 속력 입력 받기
    printf("거리(km)와 속력(km/h) 입력 : ");
    scanf_s("%d %d", &mileage, &speed, sizeof(mileage), sizeof(speed));

    // 시간 계산
    hour = mileage / speed; // 시간 = 거리 / 속력 : 시 단위
    rest = mileage % speed;
    min = rest * 60 / speed; // 분 단위로 변경
    rest = rest * 60 % speed;
    sec = (double)rest * 60 / speed; // 초 단위로 변경

    // 결과 출력
    printf("소요 시간은 %d시간 %d분 %.3lf초입니다.\n", hour, min, sec);

    return 0;
}