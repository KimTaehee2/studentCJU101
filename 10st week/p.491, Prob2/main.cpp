#pragma warning(disable:4996) // C4996 에러를 무시

#include<stdio.h>
#include<stdlib.h>

struct cracker	//	바사삭의 가격과 열량을 저장할 구조체
{
	int price;	//	가격 변수 선언
	int calories;	//	열량 변수 선언
};

int main(void)
{
	struct cracker table;	//	구조체 변수 선언

	printf("Enter the price and calories of Basasak : ");
	scanf_s("%d%d", &(table.price), &(table.calories));

	printf("Price of Basasak : %dWON\n", table.price);
	printf("Calories of Basasak : %dkal", table.calories);

	return 0;
}