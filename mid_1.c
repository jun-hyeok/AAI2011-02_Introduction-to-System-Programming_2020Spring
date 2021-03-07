#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
    /* 체중 관리 프로그램 */

    // 변수 선언: 몸무게, 키, BMI(체질량지수)
    double weight, height, bmi;

    // weight, height 차례대로 입력받기
    printf("몸무게(kg)와 키(cm) 입력 : ");
    scanf_s("%lf %lf", &weight, &height);
    // scanf_s("%lf %lf", &weight, sizeof(weight), &height, sizeof(height)); // ms build in vs

    // height[cm]을 100으로 나누어 height[m]로 변환
    height /= 100;

    // bmi 계산식
    bmi = weight / (height * height);

    // 건강진단
    if (bmi >= 20 && bmi < 25) { // BMI가 20.0이상 25.0미만인 경우
        printf("건강합니다.\n"); // 건강
    } else { //                     그렇지 않은 경우
        printf("건강관리가 필요합니다.\n"); // 주의
    }

    return 0;
}