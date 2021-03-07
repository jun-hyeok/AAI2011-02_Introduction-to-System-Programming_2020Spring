#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
	//예제 4-13 입력한 알파벳을 아스키코드값으로 출력

	char input_alpha;
	
	printf("알파벳 입력 : ");
	scanf_s("%c", &input_alpha, sizeof(input_alpha));

	printf("입력한 알파벳 출력 : %c\n", input_alpha);
	printf("입력한 알파벳의 아스키코드값 : %d\n", input_alpha);
	return 0;
}