#include <stdio.h>
#define ChEsT  95


int main(void)
{
	int chest = 95; // 가슴둘레의 크기를 저장할 변수
	char size; // 사이즈의 크기를 저장할 변수
	if (chest < 90)
	{
		size = 'S'; // 가슴둘레가 90보다 작으면 사이즈 S 출력
	}
	else if (90 < chest <= 100)
	{
		size = 'M'; // 가슴둘레가 90보다 크고 100보다 크거나 같으면 사이즈 M 출력
	}
	else
	{
		size = 'L'; // 가슴둘레가 "if ~ else if" 의 조건과 맞지 않으면 사이즈 L을 출력
	}

	printf("size : %c", size); // if ~ else if ~ else 문으로 결정된 size 값 출력

	return 0;
}