#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
	//예제 4-7 실수형 데이터로 연산한 결과값을 실수형으로 출력

	float height, weight, swap, bmi;

	printf("키와 체중은 소수 둘째 자리까지 입력\n");

	printf("키 입력(cm) : ");
	scanf_s("%f", &height);

	printf("체중 입력(kg) : ");
	scanf_s("%f", &weight);
	
	swap = height / 100;
	bmi = weight / (swap * swap);
	printf("BMI = 체중(kg) / (키(m) x 키(m))\n");
	printf("센티미터로 입력한 키를 미터로 환산해서 사용\n");
	printf("BMI = %8.2f bmi\n", bmi);
	return 0;
}