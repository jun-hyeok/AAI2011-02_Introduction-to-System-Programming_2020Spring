#include <stdio.h>
#define CP 10             // 배열의 크기 선언

int main(void)
{
	char yn;              // 시작과 종료 문자 변수
	int choice, cnt;      // 차량 모델 번호 선택과 카운트 변수
	int car[CP] = { 0 };  // 배열 요소의 값을 모두 0으로 초기화 

	do
	{
		printf(" 호텔을 선택하겠습니까?(Y/N) : ");
		scanf_s(" %c", &yn, sizeof(yn));   // 입력 함수를 무한 반복할 경우 " %c"와 같이 한 칸 띄움

		if (yn == 'N' || yn == 'n')
			break;

		else if (yn == 'Y' || yn == 'y')
		{
			printf(" 호텔 번호 : 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15\n");
			printf(" 예약 현황 :");

			for (cnt = 0; cnt < CP; cnt++)
				printf("%2d", car[cnt]);

			printf("\n");

		re_input:      // goto 문 레이블                  

			printf(" 호텔 선택(1~15) : ");
			scanf_s("%d", &choice);

			if (choice < 1 || choice > 15)
			{
				printf(" 잘못 입력했습니다! \n");
				printf(" 호텔 번호를 다시 입력하세요. \n\n");
				goto re_input;
			}
			else
			{
				if (car[choice - 1] == 0)         // 예약되지 않은 차동차 모델
				{
					car[choice - 1] = 1;          // 예약 확정
					printf(" 예약 완료! \n\n");
				}
				else
				{
					printf(" [ No.%d ] 호텔은 이미 예약되었습니다. \n", choice);
					printf(" 호텔 번호를 다시 선택하세요. \n\n");
					goto re_input;
				}
			}
		}
		else
		{
			printf(" 알파벳 입력 오류! \n");
			printf(" 알파벳은 대소 문자 구별 없이 Y 또는 N만 허용합니다. \n");
			printf(" 알파벳을 다시 입력하시오. \n\n");
		}
	} while (1);

	printf(" 호텔 [ No.%d ] 예약 완료 후 프로그램 종료 \n", choice);
	return 0;
}