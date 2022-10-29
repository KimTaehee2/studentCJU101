#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 3	// 3 by 3 행렬을 만들기 위해 N을 3으로 설정
#define M 3	// 3 by 3 행렬을 만들기 위해 M을 3으로 설정
#define RAND_SIZE 10	//무작위 난수의 범위 설정
 
void print_arr(int a[N][M]) // 배열을 출력하는 print_arr 함수
{

	for (int i = 0; i < N; i++) // 반복문을 사용한 2차원 배열의 출력
	{
		for (int j = 0; j < M; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("\n");
}

int main(void)
{
	int arr1[N][M] = { 0 };	// 첫 번째 2차원 행렬이 담길 2차원 배열 arr1을 선언하고 0으로 초기화
	int arr2[M][N] = { 0 };	// 두 번째 2차원 행렬이 담길 2차원 배열 arr2을 선언하고 0으로 초기화
	int mul[N][N] = { 0 };	// 두 행렬의 곱이 담길 2차원 배열 mul을 선언하고 0으로 초기화

	srand((unsigned)time(NULL));	//시간별로 무작위 난수가 생성됨

	for (int i = 0; i < N; i++)	// 배열의 [M][N]까지 배열의 구성요소를 채워주기 위한 반복문 선언
	{
		for (int j = 0; j < M; j++) // 배열의 [M][N]까지 배열의 구성요소를 채워주기 위한 반복문 선언
		{
			arr1[i][j] = rand() % RAND_SIZE;	//무작위 난수 생성
			arr2[j][i] = rand() % RAND_SIZE;	//무작위 난수 생성
		}

	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			for (int k = 0; k < M; k++) // // 행렬의 곱 공식을 이용하기 위한 반복문 선언
			{
				mul[i][j] += arr1[i][k] * arr2[k][j]; 
			}
		}
	}

	printf("arr1[%d][%d] \n",N,M);
	print_arr(arr1); // 배열 출력을 위해 print_arr 함수 호출

	printf("arr2[%d][%d] \n",M,N);
	print_arr(arr2);

	printf("mul[%d][%d] \n",M,N);
	print_arr(mul);

	return 0;
}

