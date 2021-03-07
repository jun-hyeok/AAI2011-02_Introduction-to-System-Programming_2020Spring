#include <stdio.h>
#define scanf_s scanf // gcc build in vscode

int main(void)
{
	//예제 4-18 출력 형식 지정자를 사용하여 double형 상수 출력

	double d_num;
	
	printf("실수형 상수 입력 : ");
	scanf_s("%lf", &d_num);

	printf("float형 상수 출력 : %f\n", d_num);
	printf("e 지수형으로 출력 : %e\n", d_num);
	printf("E 지수형으로 출력 : %E\n", d_num);
	return 0;
}