#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//예제 3-16 아스키코드로 알파벳 대문자 출력

	system("title for 문으로 알파벳 대문자 출력");

	int cnt;

	printf("알파벳 대문자가 출력됩니다.\n");

	for (cnt = 65; cnt <= 90; cnt++)
		printf(" %c", cnt);
	printf("\n");

	return 0;
}