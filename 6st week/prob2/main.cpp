#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define MAXIMUM_NUMBER	60	//�迭�� ũ�� ����
#define SIZE 10	//���� ũ��
#define RAND_SIZE 20	//�������� �ִ밪


int main(void)
{
	int num[MAXIMUM_NUMBER] = { 0 };	//�迭 �ʱ�ȭ
	double avg = 0;
	double var = 0;
	double devi = 0;
	double sum = 0;

	//��� �л� ǥ������ ���� �ʱ�ȭ

	srand(time(NULL));	//�ð����� ������ ������ ������

	printf("Numbers\n{");
	
	for (int i = 0; i < SIZE; i++)
	{
		num[i] = rand() % RAND_SIZE;	//������ ���� ����
		printf("%d ", num[i]);	//������ ������ ä���� �迭 ���
	}
	printf("}\n");

	for (int i = 0; i < SIZE; i++)	//��� ���ϴ� �ݺ���
	{
		sum = sum + num[i];
	}
	avg = sum / SIZE;

	for (int i = 0; i < SIZE; i++)	//�л� ���ϴ� �ݺ���
	{
		var = var + pow((num[i] - avg), 2);
	}
	var = var / SIZE;
	devi = sqrt(var);	//#include <math.h>�� �̿��� ǥ�������� ���ϴ½��� ���

	printf("\nAverage : %.4lf", avg);
	printf("\nVariation : %.4lf", var);
	printf("\nStandard Deviation : %.4lf\n", devi);

	return 0;
}