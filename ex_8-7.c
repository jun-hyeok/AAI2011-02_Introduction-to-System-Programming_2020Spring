#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    // 예제 8-7 Sleep() 함수로 지연 시간 설정

    system("title system() 함수 사용 프로그램");

    printf("현재 프로그램이 존재하는 디렉터리 정보 출력\n");

    system("dir");
    printf("\n이 프로그램은 10초 후 졸료됩니다.\n");

    Sleep(10000);
    systme("cls");
    return 0;
}