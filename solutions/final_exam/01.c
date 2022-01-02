/*-- 7장 프로그래밍 2번 정답  --*/

#include <stdio.h>

int main(void)
{
	int su, cnt, hap = 0;

re:
	printf(" 정수값 입력 : ");
	scanf_s("%d", &su);

	if (su < 0)
	{
		printf(" 음의 정수값 %d는(은) 허용하지 않습니다. \n", su);
		printf(" 양의 정수값을 다시 입력하세요. \n");
		goto re;
	}
	else
	{
		for (cnt = 1; cnt <= su; cnt++)
		{
			if ((cnt % 2) == 0)
			{
				hap += cnt;
				cnt++;
			}
			else
				continue;
		}
		printf("1부터 %d까지 짝수의 누적 합계는 %d\n", su, hap);
	}
	return 0;
}