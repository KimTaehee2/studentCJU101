#pragma warning(disable:4996) // C4996 ������ ����

#include<stdio.h>
#include<stdlib.h>

struct cracker	//	�ٻ���� ���ݰ� ������ ������ ����ü
{
	int price;	//	���� ���� ����
	int calories;	//	���� ���� ����
};

int main(void)
{
	struct cracker table;	//	����ü ���� ����

	printf("Enter the price and calories of Basasak : ");
	scanf_s("%d%d", &(table.price), &(table.calories));

	printf("Price of Basasak : %dWON\n", table.price);
	printf("Calories of Basasak : %dkal", table.calories);

	return 0;
}