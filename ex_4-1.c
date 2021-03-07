#include <stdio.h>

int main(void)
{
	//예제 4-1 정수형 자료형의 크기 출력
	
	short num1;
	int num2;
	long long num3;

	printf("자료형의 크기를 구하는 함수 : sizeof() 함수\n");
	printf("1.short형 변수 : %d바이트\n", sizeof(num1));
	printf("2.int형 변수 : %d바이트\n", sizeof(num2));
	printf("3.long long형 변수 : %d바이트\n", sizeof(num3));
	printf("1바이트는 8비트입니다.\n");
	printf("4.short형 변수 : %d비트\n", sizeof(num1)*8);
	printf("5.int형 변수 : %d비트\n", sizeof(num2)*8);
	printf("6.long long형 변수 : %d비트\n", sizeof(num3)*8);
	
	return 0;
}