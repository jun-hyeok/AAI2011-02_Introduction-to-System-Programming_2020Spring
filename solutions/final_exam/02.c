#include <stdio.h>
#include <stdlib.h>           // exit( ) 탈출함수를 사용하기 위한 헤더파일

void score_fun();              // 중간고사와 기말고사 점수를 입력받는 함수
char grade_fun(int jumsu);     // 입력한 점수의 등급을 산출하는 함수
char alpa_err(char op);        // Y 또는 N 이외의 알파벳 입력 시 에러메시지 출력 함수
void jumsu_err(int jumsu);     // 점수의 허용구간 0~100 이외의 숫자 입력 시 에러메시지 출력 함수
void end_fun(char op);         // main( ) 함수에서 N을 입력받을 경우 프로그램을 종료하는 함수

void main()
{
	char choice;
	int jumsu_input;

	do {
		printf(" [ main( ) 함수 영역 ] \n");
		printf(" 프로그램을 시작하시겠습니까?(Yes/No) : _\b");
		scanf_s("%c", &choice, sizeof(choice));

		switch (choice) {
		case 'Y':
		case 'y':
			score_fun();
			getchar();
			break;
		case 'N':
		case 'n':
			end_fun(choice);
			break;
		default:
			alpa_err(choice);
			getchar();
			break;
		}
	} while (1);
}

void score_fun()                  // 사용자 정의 함수
{
	int jumsu_m, jumsu_f, total = 0;
	printf("\n [ score_fun( ) 함수 영역 ]\n");

	printf(" 1차고사 점수입력(50점 만점) : __\b\b");
	scanf_s("%d", &jumsu_m);

	if (jumsu_m < 0 || jumsu_m >50)
		jumsu_err(jumsu_m);
	else
		total += jumsu_m;

	printf(" 2차고사 점수입력(50점 만점) : __\b\b");
	scanf_s("%d", &jumsu_f);

	if (jumsu_f < 0 || jumsu_f >50)
		jumsu_err(jumsu_f);
	else {
		total += jumsu_f;
		grade_fun(total);
		getchar();
		main();
	}
}

char alpa_err(char op)
{
	printf("\n [ alpa_err( ) 함수 영역 ] \n");
	return printf(" main( ) 함수에서 입력한 알파벳 %c는(은) 유효하지 않습니다. \n\n", op);
}

char grade_fun(int jumsu)
{
	printf("\n [ grade_fun( ) 함수 영역 ]\n");
	if (jumsu >= 90 && jumsu <= 100) {
		printf(" score_fun( ) 함수에서 전달받은 값 : %d\n", jumsu);
		return printf(" 등급 : 상\n\n");
	}
	else if (jumsu >= 70 && jumsu <= 89) {
		printf(" score_fun( ) 함수에서 전달받은 값 : %d\n", jumsu);
		return printf(" 등급 : 중\n\n");
	}
	else {
		printf(" score_fun( ) 함수에서 전달받은 값 : %d\n", jumsu);
		return printf(" 등급 : 하\n");
	}
}

void jumsu_err(int jumsu)
{
	printf("\n [ jumsu_err( ) 함수 영역 ]\n");
	printf(" >> 점수 %d는(은) 유효 범위가 아닙니다.\n", jumsu);
	score_fun();
}

void end_fun(char op)
{
	printf("\n [ end_fun( ) 함수 영역 ] \n");
	printf(" main( ) 함수에서 프로그램 종료를 요청했습니다. \n");
	printf(" 알파벳 \"%c\"을 전달받아 프로그램을 종료합니다!! \n", op);
	exit(0);     // 프로그램 종료
}