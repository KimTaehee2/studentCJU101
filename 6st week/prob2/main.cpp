#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define MAXIMUM_NUMBER	60	//배열의 크기 지정
#define SIZE 10	//숫자 크기
#define RAND_SIZE 20	//난수들의 최대값


int main(void)
{
	int num[MAXIMUM_NUMBER] = { 0 };	//배열 초기화
	double avg = 0;
	double var = 0;
	double devi = 0;
	double sum = 0;

	//평균 분산 표준편차 변수 초기화

	srand(time(NULL));	//시간별로 무작위 난수가 생성됨

	printf("Numbers\n{");
	
	for (int i = 0; i < SIZE; i++)
	{
		num[i] = rand() % RAND_SIZE;	//무작위 난수 생성
		printf("%d ", num[i]);	//무작위 난수로 채워진 배열 출력
	}
	printf("}\n");

	for (int i = 0; i < SIZE; i++)	//평균 구하는 반복문
	{
		sum = sum + num[i];
	}
	avg = sum / SIZE;

	for (int i = 0; i < SIZE; i++)	//분산 구하는 반복문
	{
		var = var + pow((num[i] - avg), 2);
	}
	var = var / SIZE;
	devi = sqrt(var);	//#include <math.h>를 이용해 표준편차를 구하는식을 사용

	printf("\nAverage : %.4lf", avg);
	printf("\nVariation : %.4lf", var);
	printf("\nStandard Deviation : %.4lf\n", devi);

	return 0;
}