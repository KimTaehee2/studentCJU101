#include <stdio.h>

int main(void)
{
	int i,j;

	printf("Multiplication table : ");
	scanf_s("%d", &i); // 단수 입력

		for (j = 1; j <= 9; j++) //9번 반복
		{
			printf("%d * %d = %d\n", i, j, i * j);	//i에 j를 곱하는 값으로 활용
		}
	
	return 0;
}
