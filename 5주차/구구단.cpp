#include <stdio.h>

int main(void)
{
	int i,j;

	printf("Multiplication table : ");
	scanf_s("%d", &i); // �ܼ� �Է�

		for (j = 1; j <= 9; j++) //9�� �ݺ�
		{
			printf("%d * %d = %d\n", i, j, i * j);	//i�� j�� ���ϴ� ������ Ȱ��
		}
	
	return 0;
}
