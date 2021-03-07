#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
	//예제 4-16 입력한 정수형 상수를 10진수, 8진수, 16진수로 출력

	int input_num;

	printf("정수 입력 : ");
	scanf_s("%d", &input_num);

	printf("10진수로 출력 : %d\n", input_num);
	printf("8진수로 출력 : %o\n", input_num);
	printf("16진수로 출력 : %X\n", input_num);
	printf("입력한 정수에 해당하는 문자 : %10c\n", input_num);
	return 0;
}