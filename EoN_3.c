#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int iValue[6];
	int iSum = 0;
	int iCount;

	printf("6개의 수를 입력하시오. : ");
	scanf("%d%d%d%d%d%d", &iValue[0], &iValue[1], &iValue[2], &iValue[3], &iValue[4], &iValue[5]);


	for (iCount = 0; iCount < 6; iCount++)
	{
		iSum = iSum + iValue[iCount];

	}

	printf("6개의 수의 합은 %d입니다.\n", iSum);

	return 0;
}