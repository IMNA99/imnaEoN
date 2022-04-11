#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int N;
    int i;
    int piz[20]; //임의로 설정

    //초기설정: N>3 일때, 조건이 성립하기 때문
    piz[1] = 1;
    piz[2] = 1;

    //입력
    printf("피자 조각의 수 N을 입력하시오. : ");
    scanf("%d", &N);


    if (N < 3) //피자 조각수가 3 미만일 때, 초기설정 출력
    {
        printf("가능한 방법의 수는 %d개 입니다.\n", piz[N]);
        return;
    }
    else
    {
        for (i = 3; i < N ; i++)
        {
            piz[i] = piz[i - 1] + piz[i - 2]; //조각 규칙
        }
    }

    printf("가능한 방법의 수는 %d개 입니다.\n", piz[N]);

    return 0;
}
