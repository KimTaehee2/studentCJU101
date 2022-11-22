#include <stdio.h>
#include <stdlib.h>

#define LAST_NUMBER 2
#define DIVIDE_NUMBER   5
#define NUMBER_1    1

int main(void)

{
    int num;
    int* pn;    //  ���� �Ҵ��� �׸�
    int i, j, cnt = 0;

    printf("> Please enter a positive number : ");
    scanf_s("%d", &num);

    pn = (int*)malloc(num * sizeof(int));   //  �迭����� ũ��� �迭����� ������ ���� ũ�� ��ŭ ���� �Ҵ� �� ����

    if (pn == NULL) //  �����Ҵ��� �Ǿ����� Ȯ��(����ó��)
    {
        printf("out of memory");
        exit(1);
    }

    for (i = 0; i < (num - NUMBER_1); i++) //  i�� �Է��� �� -1 ���� �������� �ݺ�
    {
        pn[i] = i + LAST_NUMBER;  //  ���ڿ��� �� ����
    }

    i = 0;
    while (1)
    {

        while ((pn[i] == 0) && (i < (num - LAST_NUMBER)))
        {
            i++;
        }   //  �迭��Ұ� 0���� �ƴ��� Ȯ��

        if (i == (num - LAST_NUMBER))     //  i�� �Է��� ��-2�� ���ٸ� ��� Ż��
            break;

        for (j = i + NUMBER_1; j < (num - NUMBER_1); j++)
        {

            if ((pn[j] % pn[i]) == 0)   //  j�� i�� ������ 0�̶��
            {
                pn[j] = 0;  //  0����
            }
        }

        i++;
    }

    for (i = 0; i < (num - LAST_NUMBER); i++)
    {
        if (pn[i] != 0)
            printf("%5d", pn[i]);   //  �Ҽ� ���

        else
            printf("%5c", 'X'); //  �Ҽ��� �ƴѰ��� X�� �ٲ�

        if ((i + NUMBER_1) % DIVIDE_NUMBER == 0)   //  5��°���� �ٹٲ�
        {
            printf("\n");
        }
    }

    free(pn);   //  ���� �Ҵ� ����


    return 0;

}