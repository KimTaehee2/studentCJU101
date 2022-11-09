#include<stdio.h>

void input_data(int* pa, int* pb);	
void swap_data(void);
void print_data(int a, int b);

int a, b;

int main(void)
{
	input_data(&a, &b);	// 전역 변수에 정수 값 입력하는 함수 호출
	swap_data();	// 두 변수를 교환하는 함수 호출
	print_data(a, b);	// 교환된 변숫값 출력하는 함수 호출

	return 0;
}
void input_data(int* pa, int* pb)	// 전역 변수에 정수 값 입력하는 함수
{
	printf("Enter two integers : ");
	scanf_s("%d %d", &a, &b);
}
void swap_data(void)	// 두 변수를 교환하는 함수
{
	int temp = 0;	// 정수를 임시 저장할 변수 선언 및 초기화

	temp = a;	// temp에 a 대입
	a = b;	// a에 b 대입
	b = temp;	// b에 temp 대입
}
void print_data(int a, int b)	// 교환된 변숫값을 출력하는 함수
{
	printf("two integer output : %d, %d", a,b);
}