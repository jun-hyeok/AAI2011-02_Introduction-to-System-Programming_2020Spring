#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
	//예제 4-20 배열을 사용하여 문자열 상수 출력

	char arr[6] = "space";
	char input[13];

	printf("arr[6] = \"space\"\n");
	printf("문자열 상수 출력: %s\n", arr);

	printf("문자열 입력 : ");
	scanf_s("%s", input, sizeof(input));

	printf("제시한 문자열 상수 + 입력한 문자열 = %s%s\n", arr, input);
	return 0;
}