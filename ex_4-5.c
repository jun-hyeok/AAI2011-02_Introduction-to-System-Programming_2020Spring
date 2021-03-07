#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
	//예제 4-5 자료형의 유효 범위보다 작은 값 대입 - 언더플로 발생

	unsigned short a, b, result;

	printf("unsigned short형 유효 범위 : 0 ~ 65,535\n");

	printf("1.첫 번째 정수 입력 : ");
	scanf_s("%hu", &a);
	printf("2.두 번째 정수 입력 : ");
	scanf_s("%hu", &b);

	result = a - b;
	printf("뺄셈 연산 : %hu - %hu = %hu\n", a, b, result);
	return 0;
}