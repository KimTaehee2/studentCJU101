#pragma warning(disable:4996) // C4996 ������ ����

#include <stdio.h>
#include<stdlib.h>

#define TRAIN_NUMBER	5

typedef struct train Train;

struct train	//	�ڱ� ���� ����ü
{
	int seats;	//	������ �¼� ��
	struct train* next;	// ���� ������ ������ ������
};
int main(void)
{
	Train* head = NULL, * tail = NULL;	//	head ������, tail ������ �ʱ�ȭ
	
	for (int i = 0; i < TRAIN_NUMBER; i++)
	{
		if (head == NULL)
		{
			head = tail = (Train*)malloc(sizeof(Train));	//	tail�� ���� ���� �Ҵ�
		}
		else
		{
			tail->next = (Train*)malloc(sizeof(Train));	//	���� ������ ������ ����
			tail = tail->next;	//	tail�� ���� ������ ������ ������ ����Ű���� ��
		}
	}
	
	return 0;

}