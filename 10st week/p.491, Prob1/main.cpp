#pragma warning(disable:4996) // C4996 에러를 무시

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

void output_book1();	//함수 선언
void output_book2();
void output_book3();

struct book	//구조체 선언
{
	char title[MAX_NUMBER];
	char author[MAX_NUMBER];
	int page;
	int price;
};	//	제목과 저자는 문자열이므로 char형 사용, 페이지와 가격은 정수이므로 int형 사용

int main(void)
{
	output_book1();	//	함수 호출
	printf("\n");

	output_book2();	//	함수 호출
	printf("\n");

	output_book3();	//	함수 호출
	printf("\n");

	return 0;
}


void output_book1(void)	//	매개변수가 없는 함수1 선언
{
	struct book red_hood;	//	struct book형의 변수 선언

	strcpy(red_hood.title, "Little Red Riding Hood");	//	title 배열 멤버에 제목 복사
	strcpy(red_hood.author, "Richard Watson");	//	author 배열 멤버에 저자 복사
	red_hood.page = RED_HOOD_PAGE_TOTAL_NUMBER;	//	page 멤버에 페이지 수 저장
	red_hood.price = RED_HOOD_BOOK_PRICE;	//	price 멤버에 가격 저장

	printf("Title : %s\n", red_hood.title);	//	각 멤버의 데이터 출력
	printf("Author : %s\n", red_hood.author);
	printf("Page : %d\n", red_hood.page);
	printf("Price : %d\n", red_hood.price);
}
void output_book2(void)
{
	struct book jack;	//	struct book형의 변수 선언

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
	struct book harry;	//	struct book형의 변수 선언

	strcpy(harry.title, "Harry Potter and the Deathly Hallows : Volume 7");
	strcpy(harry.author, "J.K Rolling");
	harry.page = HARRY_PAGE_TOTAL_NUMBER;
	harry.price = HARRY_BOOK_PRICE;

	printf("Title : %s\n", harry.title);
	printf("Author : %s\n", harry.author);
	printf("Page : %d\n", harry.page);
	printf("Price : %d\n", harry.price);
}