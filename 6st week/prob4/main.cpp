#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE	10	//숫자의 갯수
#define RAND_SIZE	20	//무작위 난수 숫자의 최댓값

int sort(int* num)	//오름차순 내림차순 정렬 함수
{
	int temp = 0;	// 임시로 저장할 함수 초기화

	printf("Ascending Order\n");

	for (int i = 0; i < SIZE; i++)	// 오름차순 정렬하기 위한 반복문 사용
	{
		for (int j = i; j < SIZE; j++)
		{
			if (num[i] > num[j]) //num[i]가 num[j]보다 크다면
			{
				temp = num[i];	//num[i]를 temp에 저장
				num[i] = num[j];	// num[i]에 num[j]를 저장
				num[j] = temp;	//num[i]에 temp를 저장
			}

		}
		printf("%d  ", num[i]);	// 오름차순으로 정렬된 숫자 출력

	}
	printf("\n");

	printf("Descending Order\n");	

	for (int i = 0; i < SIZE; i++)	// 내림차순 정렬하기 위한 반복문 사용
	{
		for (int j = i; j < SIZE; j++)
		{
			if (num[i] < num[j])	//num[i]가 num[j]보다 작다면
			{
				temp = num[i];	//num[i]를 temp에 저장
				num[i] = num[j];	// num[i]에 num[j]를 저장
				num[j] = temp;	//num[i]에 temp를 저장
			}

		}
		printf("%d  ", num[i]);

	}
	printf("\n");

	return temp;	//temp를 반환
}

int main(void)
{
	int num[SIZE] = { 0 };	//숫자 배열 선언 및 초기화

	srand(time(NULL));	//시간별로 무작위 난수가 생성됨

	printf("Original Number is ..\n");

	for (int i = 0; i < SIZE; i++)
	{
		num[i] = rand() % RAND_SIZE;	//무작위 난수 생성
		printf("%d  ", num[i]);	//무작위 난수로 채워진 배열 출력
	}

	printf("\n");	

	sort(num);	// 정렬하는 함수 호출

	return 0;
}