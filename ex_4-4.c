#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
	//예제 4-4 부호가 없는 4바이트 정수형 변수 사용

	unsigned long money;

	printf("unsigned long형 유효 범위 : 0 ~ 4,294,967,295\n");

	printf("1.보유 현금 입력 : ");
	scanf_s("%lu", &money);

	printf("2.입력 현금 출력 : %lu\n", money);
	return 0;
}