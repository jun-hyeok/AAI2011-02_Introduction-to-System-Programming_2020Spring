#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
	//예제 4-8 정수형 데이터로 연산한 실수형 결과값을 정수형으로 출력

	int num1, num2;
	float result;

	printf("정수 2개를 입력하세요.\n");
	printf("첫 번째 정수 num1 = ");
	scanf_s("%d", &num1);
	printf("두 번째 정수 num2 = ");
	scanf_s("%d", &num2);

	result = num1 / num2;
	printf("나눗셈 연산 num1 / num2 = %d / %d = %f\n", num1, num2, result);
	return 0;

}