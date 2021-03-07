#include <stdio.h>

void Test(int num1, int num2);

int main(void)
{
    // 제출 ㄴㄴ
    int a = 3, b = 5, hap = 0;

    printf("수식 삭제로 void형의 오류 해결\n");
    printf("\n\n[main() 함수 영역]\n\n");
    printf("문> a=3, b=5를 사용자 함수에 전달\n");

    hap = Test(a, b);
    return 0;
}
void Test(int num1, int num2)
{
    int sum = 0;
    sum = num1 + num2;
    printf("\n\n[Test() 함수 영역]\n\n");
    printf("답> 두 수의 덧셈 연산 결과 : %d\n", sum);
}