#include <stdio.h>
#define ChEsT  95


int main(void)
{
	int chest = 95; // �����ѷ��� ũ�⸦ ������ ����
	char size; // �������� ũ�⸦ ������ ����
	if (chest < 90)
	{
		size = 'S'; // �����ѷ��� 90���� ������ ������ S ���
	}
	else if (90 < chest <= 100)
	{
		size = 'M'; // �����ѷ��� 90���� ũ�� 100���� ũ�ų� ������ ������ M ���
	}
	else
	{
		size = 'L'; // �����ѷ��� "if ~ else if" �� ���ǰ� ���� ������ ������ L�� ���
	}

	printf("size : %c", size); // if ~ else if ~ else ������ ������ size �� ���

	return 0;
}