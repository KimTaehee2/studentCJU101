#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996) // C4996 ������ ����

#define MAXNUMBER	80	// ���ڿ� ũ�� ��ũ�� ����

int main(void)
{
	char str1[MAXNUMBER] = { NULL };
	char str2[MAXNUMBER] = { NULL };
	char str3[MAXNUMBER] = { NULL };
	char temp[MAXNUMBER] = { NULL };	// ������ ���̸� �ӽ������� ���� ���� �� �ʱ�ȭ

	printf("Enter three words : ");
	scanf_s("%s %s %s", str1, MAXNUMBER, str2, MAXNUMBER, str3, MAXNUMBER);

	if (strcmp(str1, str2) > 0)	// str1�� str2���� ũ��(������ ���߿� ����)
	{
		strcpy(temp, str1);	// temp�� str1 ����
		strcpy(str1, str2);	// str1�� str2 ����
		strcpy(str2, temp);	// str2�� temp ����
	}
	if (strcmp(str1, str3) > 0)	// str1�� str3���� ũ��(������ ���߿� ����)
	{
		strcpy(temp, str1);	// temp�� str1 ����
		strcpy(str1, str3);	// str1�� str3 ����
		strcpy(str3, temp);	// str3�� temp ����
	}
	if (strcmp(str2, str3) > 0)	// str2�� str3���� ũ��(������ ���߿� ����)
	{
		strcpy(temp, str2);	// temp�� str2 ����
		strcpy(str2, str3);	// str2�� str3 ����
		strcpy(str3, temp);	// str3�� temp ����
	}
	
	printf("%s %s %s\n", str1,str2,str3);

	return 0;

}