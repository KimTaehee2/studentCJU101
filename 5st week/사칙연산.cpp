#include<stdio.h>

int add(int x, int y)  //�Լ� ����
{
	int temp;  // �� ������ ���� ��� ������ ����
	temp = x + y; // X + Y�� temp�� ����
	return temp;// temp�� ���� ��ȯ
} //�Լ� ��
int sub(int x, int y)
{
	int temp;
	temp = x - y;
	return temp;
}
int mul(int x, int y)
{
	int temp;
	temp = x * y;
	return temp;
}
int div(int x, int y)
{
	int temp;
	temp = x / y;
	return temp;
}
int rim(int x, int y)
{
	int temp;
	temp = x % y;
	return temp;
}

int main(void)
{
	int A, B;
	char op;
	int res;                                                     //A, B, op, res ������ ���� �ʱ�ȭ

	printf("Enter the quadruple calculation(regular number) : "); //"��Ģ���� �Է�(����) : "���
	scanf_s("%d%c%d", &A, &op, 1, &B); // �����鿡 ���� �Է�

	switch (op)
	{
	case'+':
	{
		printf("Addition:\n");
		res = A + B;
		printf("%d%c%d = %d\n", A, op, B, res);
		break;
	}
	case'-':
	{
		printf("subtraction:\n");
		res = A - B;
		printf("%d%c%d = %d\n", A, op, B, res);
		break;
	}
	case'*':
	{
		printf("Multiplication:\n");
		res = A * B;
		printf("%d%c%d = %d\n", A, op, B, res);
		break;
	}
	case'/':
	{
		printf("Dvision:\n");
		res = A / B;
		printf("%d%c%d = %d\n", A, op, B, res);
		break;
	}
	case'%':
	{
		printf("Remainder:\n");
		res = A % B;
		printf("%d%c%d = %d\n", A, op, B, res);
		break;
	}
defualt:
	{
		printf("error;\n");
		res = 0;
		printf("%d%c%d = %d\n", A, op, B, res);
		break;            // op�� "+-*/" �̸� res = A -+*/ B�� �����ϰ� 30������ �̵�
	}
	}
	printf("%d%c%d=%d", A, op, B, res);

	return 0;
}