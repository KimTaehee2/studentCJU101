#include<stdio.h>
int main(void)
{
	int A = 0; 
	int B = 0;          
	char op;               
	int res;                                                     //A, B, op, res ������ ���� �ʱ�ȭ

	printf("Enter the quadruple calculation(regular number) : "); //"��Ģ���� �Է�(����) : "���
	scanf_s("%d%c%d", &A, &op, 1, &B); // �����鿡 ���� �Է�

	switch (op)
	{
	case'+':
		res = A + B; 
		break;
	case'-':
		res = A - B;
		break;
	case'*':
		res = A * B;
		break;
	case'/':
		res = A / B;
		break;
	defualt:
		res = 0;
		break;            // op�� "+-*/" �̸� res = A -+*/ B�� �����ϰ� 30������ �̵�
	}
	printf("%d%c%d=%d", A, op, B, res);

	return 0;
}