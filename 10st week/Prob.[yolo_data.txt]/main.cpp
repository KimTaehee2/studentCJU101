#include<stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996) // C4996 ������ ����

int main(void)
{
    FILE* fp1;
    FILE* fp2;
    
    fp1 = fopen("C:\\Users\\a2070\\Documents\\GitHub\\studentCJU101\\10st week\\Prob.[yolo_data.txt]\\yolo_label_data.txt", "r");
    fp2 = fopen("C:\\Users\\a2070\\Documents\\GitHub\\studentCJU101\\10st week\\Prob.[yolo_data.txt]\\yolo_bbox_data.txt", "r");

    if (fp1 == NULL)    //  yolo_lable ���� ���� ó��
    {
        printf("File is not open");
        return 1;
    }
    if (fp2 == NULL)    //  yolo_bbox ���� ���� ó��
    {
        printf("File is not open");
        return 1;
    }
    
    while (1)
    {
        char ch;

        ch = fgetc(fp1);    //  yolo_lable ���� ������ ������ ������ ����
        if (ch == EOF)  //  �Լ��� ��ȯ���� EOF�� �Է� ����
        {
            break;
        }
        putchar(ch);    //  ���Ͽ� �ԷµǾ��ִ� ���� ���
    }
    fclose(fp1);    //  ���� ����

    while (1)
    {
        char ch;

        ch = fgetc(fp2);    //  yolo_bbox ���� ������ ������ ������ ����
        if (ch == EOF)  //  �Լ��� ��ȯ���� EOF�� �Է� ����
        {
            break;
        }
        putchar(ch);    //  ���Ͽ� �ԷµǾ��ִ� ���� ���
    }
    fclose(fp2);    //  ���� ����

    return 0;
}