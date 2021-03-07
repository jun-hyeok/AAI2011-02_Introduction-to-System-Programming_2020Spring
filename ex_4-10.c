#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
	//예제 4-10 실수형 자료형인 float형과 double형 사용 

	float base, height;
	double result;

	printf("밑변과 높이에 소수 둘째 자리까지 데이터 입력\n");
	printf("밑변 입력(cm) : ");
	scanf_s("%f", &base);
	printf("높이 입력(cm) : ");
	scanf_s("%f", &height);

	result = (base * height) / 2;

	printf("삼각형의 넓이(소수 6째 자리까지 출력 : %f\n", result);
	printf("삼각형의 넓이(소수 15째 자리까지 출력 : %.15f\n", result);
	printf("삼각형의 넓이(소수 16째 자리까지 출력 : %.16f\n", result);
	printf("삼각형의 넓이(소수 17째 자리까지 출력 : %.17f\n", result);
	printf("삼각형의 넓이(소수 18째 자리까지 출력 : %.18f\n", result);
	return 0;

}