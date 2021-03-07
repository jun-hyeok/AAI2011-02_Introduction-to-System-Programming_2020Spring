#include <stdio.h>
#define PI 3.141592
#define scanf_s scanf // gcc build in vscode

int main(void)
{
	//예제 4-22 #define 명령으로 기호 상수 선언

	float r, area = 0;

	printf("기호 상수 PI : 3.14159\n");
	printf("원의 넓이 = π * 반지름 * 반지름\n");

	printf("반지름 입력(㎝) : ");
	scanf_s("%f", &r);
	area = PI * r* r;

	printf("반지름 %f㎝인 원의 넓이는 %f㎠\n", r, area);
	return 0;
}