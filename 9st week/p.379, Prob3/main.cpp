#include<stdio.h>

#define NUMBER_A	10
#define NUMBER_B	20

void add_by_pointer(int* pa, int* pb, int* pr)	// �Ű������� ������ ��ȯ���� ���� �Լ�
{
	*pr = *pa + *pb;	// *pr�� *pa + *pb�� ���� ���� ����
}
int main(void)
{
	int a = NUMBER_A, b = NUMBER_B, res = 0;	// ���� ���� �� �ʱ�ȭ

	add_by_pointer(&a, &b, &res);	// �Լ�ȣ��

	printf("%d", res);

	return 0;
}