#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#pragma warning(disable:4996) // C4996 ������ ����


#define MAX_PATH 256
#define NEXT_NUMBER 1

char* getExt(char* fname)   //  ���� Ȯ���� ���� �Լ�
{
    static char buf[MAX_PATH] = ""; //  �������� ����
    bool ret = false;
    char* ptr = NULL;

    ptr = strrchr(fname, '.');  //  ���ڿ����� �������� ��ġ�� "." �˻�

    if (ptr == NULL)    //  ã�� ���Ѵٸ� NULL�� ��ȯ
        return NULL;

    strcpy(buf, ptr + NEXT_NUMBER);   //  "." ���� ���ڸ� buf�� ����

    return buf; //  buf��ȯ
}

int main(void)
{
    FILE* fp = NULL;

    fp = fopen("C:\\Users\\a2070\\Documents\\GitHub\\Test1\\test.txt", "w");    //  Test1 ������ test.txt���� ����

    if (fp == NULL) //  ���� �����Ͱ� �� �����͸� ���� ���� ����
    {
        printf("File doesn't open\n");
        return 1;
    }

    fclose(fp); //  ���� ������ �ݱ�

    char file_adr[MAX_PATH] = { 0 }; //  �Է��� ���� �ּ� ũ�� ���� �� �ʱ�ȭ
    char* ptr = NULL;

    printf("Enter your file adress : ");
    scanf_s("%s", file_adr, MAX_PATH);

    printf("\n");

    ptr = getExt(file_adr); //  ���� Ȯ���� ���� �Լ� ȣ��

    printf("The [%s] file extension is [%s].\n", file_adr, ptr);

    return 0;
}
