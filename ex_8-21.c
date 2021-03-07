#include <stdio.h>

int Sum(int cnt);

int main(void)
{
    int input, hap = 0;
    printf("[main() 함수 영역]\n");
    printf("전달> 어디까지 구할까요 : ");
    scanf_s("%d", &input);

    printf("호출> Sum() 함수 호출\n\n");
    printf("[Sum() 함수 호출 완료]\n");
    hap = Sum(input);
    printf("동작> Sum() 함수에서 1부터 %d까지 누적 함계 산출\n", input);
    printf("회신> main() 함수 반환\n\n");
    printf("[main() 함수 영역]\n");
    printf("결과> 1부터 %d까지 누적 합계 : %d\n", input, hap);
    return 0;
}

int Sum(int cnt)
{
    if (cnt == 1)
        return 1;
    else
        return cnt + Sum(cnt - 1);
}