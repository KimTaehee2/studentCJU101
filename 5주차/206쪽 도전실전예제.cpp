#include <stdio.h>

int rec_func(int n); // �Լ� ����

int main(void)
{
	int a = 0;
	a = rec_func(10); // �Լ� ȣ��
	printf("%d\n", a);

	return 0;
}

int rec_func(int n)
{
	if (n == 0)
		return n; // ȣ��Ƚ���� 0�̸� ��ȯ�ϰ� ����
	n = n + rec_func(n - 1);
	return n;
}