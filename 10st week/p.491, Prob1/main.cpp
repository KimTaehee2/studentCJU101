#pragma warning(disable:4996) // C4996 ������ ����

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUMBER	200
#define RED_HOOD_PAGE_TOTAL_NUMBER	36
#define JACK_PAGE_TOTAL_NUMBER	13
#define HARRY_PAGE_TOTAL_NUMBER	784
#define RED_HOOD_BOOK_PRICE	7000
#define JACK_BOOK_PRICE	2000
#define HARRY_BOOK_PRICE	27230

void output_book1();	//�Լ� ����
void output_book2();
void output_book3();

struct book	//����ü ����
{
	char title[MAX_NUMBER];
	char author[MAX_NUMBER];
	int page;
	int price;
};	//	����� ���ڴ� ���ڿ��̹Ƿ� char�� ���, �������� ������ �����̹Ƿ� int�� ���

int main(void)
{
	output_book1();	//	�Լ� ȣ��
	printf("\n");

	output_book2();	//	�Լ� ȣ��
	printf("\n");

	output_book3();	//	�Լ� ȣ��
	printf("\n");

	return 0;
}


void output_book1(void)	//	�Ű������� ���� �Լ�1 ����
{
	struct book red_hood;	//	struct book���� ���� ����

	strcpy(red_hood.title, "Little Red Riding Hood");	//	title �迭 ����� ���� ����
	strcpy(red_hood.author, "Richard Watson");	//	author �迭 ����� ���� ����
	red_hood.page = RED_HOOD_PAGE_TOTAL_NUMBER;	//	page ����� ������ �� ����
	red_hood.price = RED_HOOD_BOOK_PRICE;	//	price ����� ���� ����

	printf("Title : %s\n", red_hood.title);	//	�� ����� ������ ���
	printf("Author : %s\n", red_hood.author);
	printf("Page : %d\n", red_hood.page);
	printf("Price : %d\n", red_hood.price);
}
void output_book2(void)
{
	struct book jack;	//	struct book���� ���� ����

	strcpy(jack.title, "Jack and the Beanstalk");
	strcpy(jack.author, "Joseph Jacobs");
	jack.page = JACK_PAGE_TOTAL_NUMBER;
	jack.price = JACK_BOOK_PRICE;

	printf("Title : %s\n", jack.title);
	printf("Author : %s\n", jack.author);
	printf("Page : %d\n", jack.page);
	printf("Price : %d\n", jack.price);
}
void output_book3(void)
{
	struct book harry;	//	struct book���� ���� ����

	strcpy(harry.title, "Harry Potter and the Deathly Hallows : Volume 7");
	strcpy(harry.author, "J.K Rolling");
	harry.page = HARRY_PAGE_TOTAL_NUMBER;
	harry.price = HARRY_BOOK_PRICE;

	printf("Title : %s\n", harry.title);
	printf("Author : %s\n", harry.author);
	printf("Page : %d\n", harry.page);
	printf("Price : %d\n", harry.price);
}