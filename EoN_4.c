/*
���� ����: ������ ���ڵ��� ������������ �����Ͻÿ�.

�� ���ڸ� �� -> ū ���ڸ� ���������� ������
��, �� �� ��ġ�� �ٲٴ� ��
�̷��� ���ǹ��� �ݺ�

������ ���쳪 ȿ������ ��������
�ֳ��ϸ� �ѹ��� �ݺ��� ������ �� ���� ū ���� �� �ڷ� ���� �� �ݺ���
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int iValue[6];
	int temp;
	int i;
	int j;

	//�Է�
	printf("6���� ���� �Է��Ͻÿ�. : ");
	scanf("%d %d %d %d %d %d", &iValue[0], &iValue[1], &iValue[2], &iValue[3], &iValue[4], &iValue[5]);


	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 5 - i; j++) //ū ���� ���������� ��ġ ����
		{
			if (iValue[j] > iValue[j + 1]) 
			{
				temp = iValue[j];
				iValue[j] = iValue[j + 1];
				iValue[j + 1] = temp;
			}
		}
	}

	//���
	printf("[%d, %d, %d, %d, %d, %d]", iValue[0], iValue[1], iValue[2], iValue[3], iValue[4], iValue[5]);

	return 0;
}

