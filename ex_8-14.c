#include <stdio.h>
int Sum(int su);
int main(void)
{
    int input, result;
    printf("1부터 입력받은 수까지 누적 합계 산출\n");
    printf("-----------------------------------------------\n");
    printf("메인 함수의 역할\n");
    printf("1. 키보드로 정수값 입력받은\n");
    printf("2. 시용자 정이 함수 호출\n");
    printf("3. 입력 받은 정수값을 사용자 함수에 전달\n");
    printf("4. 사용자 정의 함수에서 전달받은 결과값 출력\n");
    printf("-----------------------------------------------\n");
    printf("사용자 정의 함수의 역할\n");
    printf("1. 메인 함수로부터 정수값 전달 받음\n");
    printf("2. for문으로 누적 함계 산출\n");
    printf("3. 누적합계를 메인 함수에 반환\n");
    printf("-----------------------------------------------\n");
    printf("[main() 함수 영역]\n\n");
    printf("질문>어디까지 누적합을 구할까요 : ");
    scanf_s("%d", &input);
    result = Sum(input);
    printf("[main() 함수 영역]\n\n");
    printf("결과> 1부터 %d까지 누적 함계 : %d\n", input, result);
    return 0;
}
int Sum(int su)
{
    int hap = 0;
    printf("[Sum() 함수 영역]\n\n");
    for (int cnt = 0; cnt < su; cnt++) {
        hap += cnt + 1;
    }
    return hap;
}