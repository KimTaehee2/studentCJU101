#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 3	// 3 by 3 ����� ����� ���� N�� 3���� ����
#define M 3	// 3 by 3 ����� ����� ���� M�� 3���� ����
#define RAND_SIZE 10	//������ ������ ���� ����
 
void print_arr(int a[N][M]) // �迭�� ����ϴ� print_arr �Լ�
{

	for (int i = 0; i < N; i++) // �ݺ����� ����� 2���� �迭�� ���
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
	int arr1[N][M] = { 0 };	// ù ��° 2���� ����� ��� 2���� �迭 arr1�� �����ϰ� 0���� �ʱ�ȭ
	int arr2[M][N] = { 0 };	// �� ��° 2���� ����� ��� 2���� �迭 arr2�� �����ϰ� 0���� �ʱ�ȭ
	int mul[N][N] = { 0 };	// �� ����� ���� ��� 2���� �迭 mul�� �����ϰ� 0���� �ʱ�ȭ

	srand((unsigned)time(NULL));	//�ð����� ������ ������ ������

	for (int i = 0; i < N; i++)	// �迭�� [M][N]���� �迭�� ������Ҹ� ä���ֱ� ���� �ݺ��� ����
	{
		for (int j = 0; j < M; j++) // �迭�� [M][N]���� �迭�� ������Ҹ� ä���ֱ� ���� �ݺ��� ����
		{
			arr1[i][j] = rand() % RAND_SIZE;	//������ ���� ����
			arr2[j][i] = rand() % RAND_SIZE;	//������ ���� ����
		}

	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			for (int k = 0; k < M; k++) // // ����� �� ������ �̿��ϱ� ���� �ݺ��� ����
			{
				mul[i][j] += arr1[i][k] * arr2[k][j]; 
			}
		}
	}

	printf("arr1[%d][%d] \n",N,M);
	print_arr(arr1); // �迭 ����� ���� print_arr �Լ� ȣ��

	printf("arr2[%d][%d] \n",M,N);
	print_arr(arr2);

	printf("mul[%d][%d] \n",M,N);
	print_arr(mul);

	return 0;
}

