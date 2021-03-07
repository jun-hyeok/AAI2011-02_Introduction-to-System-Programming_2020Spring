#include <stdio.h>
#include <stdlib.h>
#define ROOM 15
/* 3번 */
int main(void)
{
    char alpha;
    int choice;
    int hotel[ROOM] = { 0 };
    do {
        printf("호텔을 선택하시겠습니까?(Y/N) : ");
        scanf_s("%c", &alpha, sizeof(alpha));
        getchar();
        switch (alpha) {
        case 'Y':
        case 'y':
            printf("호텔 번호 : ");
            for (int i = 0; i < ROOM; i++) {
                printf("%2d ", i + 1);
            }
            printf("\n예약 현황 : ");
            for (int i = 0; i < ROOM; i++) {
                printf("%2d ", hotel[i]);
            }
        re:
            printf("\n호텔 선택(1~15) : ");
            scanf_s("%d", &choice, sizeof(choice));
            getchar();
            if (choice >= 1 && choice <= ROOM) {
                if (hotel[choice - 1] == 1) {
                    printf("이미 예약된 방입니다.\n");
                    printf("다시 선택해 주세요.\n");
                    goto re;
                }
                printf("예약 완료!\n\n");
                hotel[choice - 1] = 1;
                break;
            } else {
                printf("유효하지 않는 범위의 값입니다.\n");
                printf("다시입력 해주세요.\n");
                goto re;
            }

        case 'N':
        case 'n':
            printf("프로그램을 종료합니다.\n");
            return 0;
            break;
        default:
            printf("알파벳 입력 오류!\n");
            printf("알파벳은 대소 문자 구별 없이 Y 또는 N만 허용합니다.\n");
            printf("알파벳을 다시 입력하시오.\n\n");
            break;
        }
    } while (1);
}