#include <stdio.h>

void Exchange(float a);

int main(void)
{
    float input;

    printf("인치(inch)를 센티미터(cm)로 환산\n");
    printf("문>인치 입력: ");
    scanf_s("%f", &input);

    printf("\n");
    Exchange(input);
    printf("\n");
    return 0;
}
void Exchange(float a)
{
    double swap;
    swap = a * 2.5399;
    printf("[Exchange() 함수 영역]\n\n");
    printf("답>단위환산 : %.2finch는 %.2lfcm\n", a, swap);
}