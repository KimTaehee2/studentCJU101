#include <stdio.h>
int main(void)
{
    int num;
    int i, j;
    int pn;
    int cnt = 0;  //���� �ʱ�ȭ

    printf("Please enter an integer of 2 or more. : ");
    scanf_s("%d", &num);

    for (i = 2; i <= num; i++)
    {
        pn = 1;
        for (j = 2; j < i; j++) // j�� 2���� i���� �����ϸ鼭 �ݺ�
        {
            if ((i % j) == 0) 
            {
                pn = 0;
                break; // ������ �������� ���̻� �Ҽ��� �ƴϱ� ������ �ݺ��� Ż��
            }
        }
        if (pn == 1)
        {
            printf("%5d", i);
            cnt++;
            if ((cnt % 5) == 0)
            {
                printf("\n"); // 5��°���� �ٹٲ�
            }
        }
    }
    return 0;
}