#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int N;
    int i;
    int piz[20]; //���Ƿ� ����

    //�ʱ⼳��: N>3 �϶�, ������ �����ϱ� ����
    piz[1] = 1;
    piz[2] = 1;

    //�Է�
    printf("���� ������ �� N�� �Է��Ͻÿ�. : ");
    scanf("%d", &N);


    if (N < 3) //���� �������� 3 �̸��� ��, �ʱ⼳�� ���
    {
        printf("������ ����� ���� %d�� �Դϴ�.\n", piz[N]);
        return;
    }
    else
    {
        for (i = 3; i < N ; i++)
        {
            piz[i] = piz[i - 1] + piz[i - 2]; //���� ��Ģ
        }
    }

    printf("������ ����� ���� %d�� �Դϴ�.\n", piz[N]);

    return 0;
}
