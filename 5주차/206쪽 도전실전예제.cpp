#include <stdio.h>

int rec_func(int n); // 함수 선언

int main(void)
{
	int a = 0;
	a = rec_func(10); // 함수 호출
	printf("%d\n", a);

	return 0;
}

int rec_func(int n)
{
	if (n == 0)
		return n; // 호출횟수가 0이면 반환하고 끝냄
	n = n + rec_func(n - 1);
	return n;
}