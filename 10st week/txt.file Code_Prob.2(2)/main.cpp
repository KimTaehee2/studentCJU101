#include <stdio.h>

#pragma warning(disable:4996) // C4996 ������ ����

#define MAX_NUMBER  256

int main(void)
{
    char old_fname[MAX_NUMBER] = {};
    char new_fname[MAX_NUMBER] = {};

    printf("Enter your old file name : ");
    scanf_s("%s", old_fname, MAX_NUMBER);

    printf("\n");

    printf("Enter your new file name : ");
    scanf_s("%s", new_fname, MAX_NUMBER);

    if (rename(old_fname, new_fname) == 0)  //  "rename"�Լ��� ������ �������̶�� 0���� ������
    {
        printf("File [%s] is successfully renamed to [%s]\n", old_fname, new_fname);
        
    }
    else    //  ������ ���� �ƴ϶��
    {
        printf("File rename failed\n");
    }

    return 0;
}
