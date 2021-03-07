#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
	//예제 4-6 연산 결과가 자료형의 유효 범위보다 작음 - 언더플로 발생

	short min_su, input, result;
	min_su = -32768;
	
	printf("short형 유효 범위 : -32768 ~ 32767\n");
	printf("min_su = -32768일 때\n");
	printf("뺄셈 연산을 수행할 정수 입력 : ");
	scanf_s("%hi", &input);

	result = min_su - input;
	printf("뺄셈 연산 : %hi - %hi = %hi\n", min_su, input, result);
	return 0;
}