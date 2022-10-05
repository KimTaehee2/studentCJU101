#include<stdio.h>

int add(int x, int y)  //함수 정의
{
	int temp;  // 두 정수의 합을 잠시 저장할 변수
	temp = x + y; // X + Y를 temp에 보관
	return temp;// temp의 값을 반환
} //함수 끝
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
	int res;                                                     //A, B, op, res 저장할 변수 초기화

	printf("Enter the quadruple calculation(regular number) : "); //"사칙연산 입력(정수) : "출력
	scanf_s("%d%c%d", &A, &op, 1, &B); // 변수들에 값을 입력

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
		break;            // op가 "+-*/" 이면 res = A -+*/ B를 수행하고 30행으로 이동
	}
	}
	printf("%d%c%d=%d", A, op, B, res);

	return 0;
}