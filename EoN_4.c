/*
버블 정렬: 다음의 숫자들을 오름차순으로 정리하시오.

두 숫자를 비교 -> 큰 숫자를 오른쪽으로 보내기
즉, 두 수 위치를 바꾸는 것
이러한 조건문을 반복

구현은 쉬우나 효율성이 떨어진다
왜냐하면 한번의 반복이 끝났을 때 제일 큰 값이 맨 뒤로 가는 걸 반복함
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int iValue[6];
	int temp;
	int i;
	int j;

	//입력
	printf("6개의 수를 입력하시오. : ");
	scanf("%d %d %d %d %d %d", &iValue[0], &iValue[1], &iValue[2], &iValue[3], &iValue[4], &iValue[5]);


	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 5 - i; j++) //큰 수를 오른쪽으로 위치 변경
		{
			if (iValue[j] > iValue[j + 1]) 
			{
				temp = iValue[j];
				iValue[j] = iValue[j + 1];
				iValue[j + 1] = temp;
			}
		}
	}

	//출력
	printf("[%d, %d, %d, %d, %d, %d]", iValue[0], iValue[1], iValue[2], iValue[3], iValue[4], iValue[5]);

	return 0;
}

