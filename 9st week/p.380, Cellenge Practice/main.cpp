#include<stdio.h>

void input_data(int* pa, int* pb);	
void swap_data(void);
void print_data(int a, int b);

int a, b;

int main(void)
{
	input_data(&a, &b);	// ���� ������ ���� �� �Է��ϴ� �Լ� ȣ��
	swap_data();	// �� ������ ��ȯ�ϴ� �Լ� ȣ��
	print_data(a, b);	// ��ȯ�� ������ ����ϴ� �Լ� ȣ��

	return 0;
}
void input_data(int* pa, int* pb)	// ���� ������ ���� �� �Է��ϴ� �Լ�
{
	printf("Enter two integers : ");
	scanf_s("%d %d", &a, &b);
}
void swap_data(void)	// �� ������ ��ȯ�ϴ� �Լ�
{
	int temp = 0;	// ������ �ӽ� ������ ���� ���� �� �ʱ�ȭ

	temp = a;	// temp�� a ����
	a = b;	// a�� b ����
	b = temp;	// b�� temp ����
}
void print_data(int a, int b)	// ��ȯ�� �������� ����ϴ� �Լ�
{
	printf("two integer output : %d, %d", a,b);
}