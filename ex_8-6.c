#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 예제 8-6 system() 함수로 디렉터리 정보 출력

    system("title system() 함수 사용 프로그램");

    printf("현재 프로그램이 존재하는 디렉터리 정보 출력\n");

    system("dir");
    printf("\n\n아무키나 누르면 프로그램이 졸료됩니다.\n");
    printf("문자 입력 : ");

    _getch();
    systme("cls");
    return 0;
}