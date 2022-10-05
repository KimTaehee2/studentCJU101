#include <stdio.h>
int main(void)
{
    int num;
    int i, j;
    int pn;
    int cnt = 0;  //변수 초기화

    printf("Please enter an integer of 2 or more. : ");
    scanf_s("%d", &num);

    for (i = 2; i <= num; i++)
    {
        pn = 1;
        for (j = 2; j < i; j++) // j가 2부터 i까지 증가하면서 반복
        {
            if ((i % j) == 0) 
            {
                pn = 0;
                break; // 나누어 떨어지면 더이상 소수가 아니기 때문에 반복문 탈출
            }
        }
        if (pn == 1)
        {
            printf("%5d", i);
            cnt++;
            if ((cnt % 5) == 0)
            {
                printf("\n"); // 5번째에서 줄바꿈
            }
        }
    }
    return 0;
}