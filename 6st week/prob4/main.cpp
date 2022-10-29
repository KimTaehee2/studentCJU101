#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE	10	//������ ����
#define RAND_SIZE	20	//������ ���� ������ �ִ�

int sort(int* num)	//�������� �������� ���� �Լ�
{
	int temp = 0;	// �ӽ÷� ������ �Լ� �ʱ�ȭ

	printf("Ascending Order\n");

	for (int i = 0; i < SIZE; i++)	// �������� �����ϱ� ���� �ݺ��� ���
	{
		for (int j = i; j < SIZE; j++)
		{
			if (num[i] > num[j]) //num[i]�� num[j]���� ũ�ٸ�
			{
				temp = num[i];	//num[i]�� temp�� ����
				num[i] = num[j];	// num[i]�� num[j]�� ����
				num[j] = temp;	//num[i]�� temp�� ����
			}

		}
		printf("%d  ", num[i]);	// ������������ ���ĵ� ���� ���

	}
	printf("\n");

	printf("Descending Order\n");	

	for (int i = 0; i < SIZE; i++)	// �������� �����ϱ� ���� �ݺ��� ���
	{
		for (int j = i; j < SIZE; j++)
		{
			if (num[i] < num[j])	//num[i]�� num[j]���� �۴ٸ�
			{
				temp = num[i];	//num[i]�� temp�� ����
				num[i] = num[j];	// num[i]�� num[j]�� ����
				num[j] = temp;	//num[i]�� temp�� ����
			}

		}
		printf("%d  ", num[i]);

	}
	printf("\n");

	return temp;	//temp�� ��ȯ
}

int main(void)
{
	int num[SIZE] = { 0 };	//���� �迭 ���� �� �ʱ�ȭ

	srand(time(NULL));	//�ð����� ������ ������ ������

	printf("Original Number is ..\n");

	for (int i = 0; i < SIZE; i++)
	{
		num[i] = rand() % RAND_SIZE;	//������ ���� ����
		printf("%d  ", num[i]);	//������ ������ ä���� �迭 ���
	}

	printf("\n");	

	sort(num);	// �����ϴ� �Լ� ȣ��

	return 0;
}