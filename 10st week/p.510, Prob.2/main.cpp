#pragma warning(disable:4996) // C4996 에러를 무시

#include <stdio.h>
#include<stdlib.h>

#define TRAIN_NUMBER	5

typedef struct train Train;

struct train	//	자기 참조 구조체
{
	int seats;	//	객차의 좌석 수
	struct train* next;	// 다음 객차를 연결할 포인터
};
int main(void)
{
	Train* head = NULL, * tail = NULL;	//	head 포인터, tail 포인터 초기화
	
	for (int i = 0; i < TRAIN_NUMBER; i++)
	{
		if (head == NULL)
		{
			head = tail = (Train*)malloc(sizeof(Train));	//	tail에 저장 공간 할당
		}
		else
		{
			tail->next = (Train*)malloc(sizeof(Train));	//	다음 객차를 연결할 변수
			tail = tail->next;	//	tail이 다음 객차를 연결할 변수를 가리키도록 함
		}
	}
	
	return 0;

}