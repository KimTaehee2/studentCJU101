#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996) // C4996 ������ ����

#define MAXNUMBER	80	// �迭�� ��ũ�� ����
#define STRINGZISE	9	// ���� ���� ��ũ�� ����

int main(void)
{
	char str[MAXNUMBER] = { 0 };	//str ���ڿ� ���� ���� �� �ʱ�ȭ

	strcpy(str, "wine");	// str �迭�� "wine"�� ����(����)
	strcat(str, "apple");	// str �迭�� "apple" ���̱�
	strncpy(str, "pear", 1);	//str �迭 �ڿ� "pear" ���ڿ����� ù��° ���ڱ����� ����(����)

	str[STRINGZISE] = '\0';	// ���� ���ڰ� �Էµ� ��ġ�� �� ���� ����
	
	printf("%s, %d\n", str, (int)strlen(str));	//	str�迭 ��� �� str�迭�� ���̰� ���

	return 0;
}