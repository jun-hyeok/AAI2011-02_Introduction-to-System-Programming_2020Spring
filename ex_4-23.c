#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
	//예제 4-23 const 키워드로 기호 상수 선언

	const float M = 3.305785;
	float flat, area = 0;

	printf("기호 상수 M : %f\n", M);
	printf("평방미터(㎡) = 평 * %f\n", M);

	printf("평 입력 : ");
	scanf_s("%f", &flat);
	area = flat * M;

	printf("입력한 %f평은 %f㎡\n", flat, area);
	return 0;
}