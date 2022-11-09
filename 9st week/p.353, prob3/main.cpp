#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996) // C4996 ������ ����

#define MAXNUMBER	80	// �迭�� ��ũ�� ����
#define LENGTH	5	// ���ڿ� ����

int main(void)
{
	char str[MAXNUMBER] = { NULL };	// ���ڿ� �Է��� �迭 ���� �� �ʱ�ȭ
	char res_str[MAXNUMBER] = { NULL };	// ���� ���ڿ��� ������ �迭 ���� �� �ʱ�ȭ
	char star[MAXNUMBER] = "*********";	// ���� �κ��� ä�� ���ڿ� ����
	int len;	//���� ���̸� ������ ���� ����

	char *pstar = star;	// ���� �κ��� ä�� ���ڿ��� �����Ϳ� ����
	

	printf("Enter word : ");
	scanf("%s", str);
	
	len = strlen(str);	//�Է��� �ܾ��� ���� ���

	if (strlen(str) <= LENGTH)	// ���̰� 5���ϸ�
	{
		strcpy(res_str,str);	// �״�� ����
	}
	else // 5���� ũ��
	{
		strncpy(res_str, str, LENGTH);	//5���� ���� ����
		res_str[5] = '\0';	// �ι��� ����
		strncat(res_str, pstar, len - LENGTH);	//���ڿ� ���� ��ŭ ���� ä��
	}

	printf("typed word : %s, omitted word : %s\n", str, res_str);


	return 0;
}