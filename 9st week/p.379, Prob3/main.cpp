#include<stdio.h>

#define NUMBER_A	10
#define NUMBER_B	20

void add_by_pointer(int* pa, int* pb, int* pr)	// 매개변수는 있지만 반환값이 없는 함수
{
	*pr = *pa + *pb;	// *pr에 *pa + *pb를 더한 값을 대입
}
int main(void)
{
	int a = NUMBER_A, b = NUMBER_B, res = 0;	// 변수 선언 및 초기화

	add_by_pointer(&a, &b, &res);	// 함수호출

	printf("%d", res);

	return 0;
}