#include<stdio.h>

#pragma warning(disable:4996) // C4996 ������ ����

#define YELLOW_NUMBER	5
#define DIVIDE_NUMBER	4
typedef enum 
{ CYAN, MAGENTA, YELLOW = YELLOW_NUMBER,BLACK } COLOR;	//	������ ����, 0,1,5,6�� ���� ���ڰ�
typedef enum 
{ UP, DOWN, LEFT, RIGHT } ARROW;	//	������ ����, 0,1,2,3,4�� ���� ���� ��

int main(void)
{
	COLOR my_color = YELLOW;	//	���� ���� �� YELLOW ����
	int c;	//	���� ����
	ARROW direction = UP;	//	���� ���� �� UP ����
	int d = direction;	//	���� ���� �� derection ����

	for (int c = CYAN; c <= BLACK; c++)	//	c�� 0���� �ʱ�ȭ, 6���� �۰ų� ����
	{
		d++;	//	������ d���� �ٷ� 1�� ����
		d = d % DIVIDE_NUMBER;	//	4�� ���� ������ ���� ������

		if (c == my_color)	//	���������� ���ǽ��� �������� ������ �ٽ� �ǵ��ư��� ���ǽ��� �����Ѵٸ� ��� Ż��
			break;
	}
	switch (d)
	{
	case UP: printf("Current Direction : UP");	//	UP�̸� UP���
		break;
	case DOWN: printf("Current Direction : DOWN");	// DOWN�̸� DOWN���
		break;
	case LEFT: printf("Current Direction : LEFT");	// LEFT�̸� LEFT���
		break;
	case RIGHT: printf("Current Direction : RIGHT");	//	RIGHT�̸� RIGHT���
		break;
	default: printf("ERROR\n");	//	�̵� ���� �ƴϸ� ERROR ���
		break;
	}
	return 0;
}