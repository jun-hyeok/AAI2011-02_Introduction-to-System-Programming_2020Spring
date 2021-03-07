#include <stdio.h>
// #define scanf_s scanf // gcc build in vscode

int main(void)
{
    /* 장학금 계산 프로그램 */

    // 변수 선언 및 초기화
    int rich = 150; //     가정형편 점수 : default = 150
    double grade = 4.1; // 학점(평점평균|GPA) : default = 4.1
    double pay; //         등록금

    // (조건 추가) 등록금 입력 받기
    printf("장학금 공제 전 다음 학기 납입할 등록금 입력(원):");
    scanf_s("%lf", &pay);
    // scanf_s("%lf", &pay, sizeof(pay)); // ms build in vs

    // (옵션) 학점(평점평균|GPA) 입력 받기 (가정형편 점수에 응용 가능)
    /* printf("장학금 기준학기 학점(평점평균|GPA) 입력(#/4.5):");
    scanf_s("%lf", &grade); */

    // 장학금 심사
    if (rich >= 100) { //        가정형편이 좋고
        if (grade >= 3.5) //     학점(평점평균|GPA)이 3.5이상이면
            pay *= (1 - 0.2); // 납입할 등록금 20% 감면 조정
    } else { //              가정형현이 어려우면
        pay *= (1 - 0.4); // 납입할 등록금 40% 감면 조정
    }

    // 결과 출력
    printf("장학금 공제 후 다음 학기 납입할 등록금은 %.0lf원 입니다.\n", pay);

    return 0;
}