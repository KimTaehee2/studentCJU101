#include<stdio.h>
int main(void)
{
	int A = 0; 
	int B = 0;          
	char op;               
	int res;                                                     //A, B, op, res 저장할 변수 초기화

	printf("Enter the quadruple calculation(regular number) : "); //"사칙연산 입력(정수) : "출력
	scanf_s("%d%c%d", &A, &op, 1, &B); // 변수들에 값을 입력

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
		break;            // op가 "+-*/" 이면 res = A -+*/ B를 수행하고 30행으로 이동
	}
	printf("%d%c%d=%d", A, op, B, res);

	return 0;
}