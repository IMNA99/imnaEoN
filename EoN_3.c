#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int iValue[6];
	int iSum = 0;
	int iCount;

	printf("6���� ���� �Է��Ͻÿ�. : ");
	scanf("%d%d%d%d%d%d", &iValue[0], &iValue[1], &iValue[2], &iValue[3], &iValue[4], &iValue[5]);


	for (iCount = 0; iCount < 6; iCount++)
	{
		iSum = iSum + iValue[iCount];

	}

	printf("6���� ���� ���� %d�Դϴ�.\n", iSum);

	return 0;
}