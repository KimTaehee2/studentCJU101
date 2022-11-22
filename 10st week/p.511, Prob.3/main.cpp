#include<stdio.h>

#pragma warning(disable:4996) // C4996 에러를 무시

#define YELLOW_NUMBER	5
#define DIVIDE_NUMBER	4
typedef enum 
{ CYAN, MAGENTA, YELLOW = YELLOW_NUMBER,BLACK } COLOR;	//	열거형 선언, 0,1,5,6인 시작 숫자값
typedef enum 
{ UP, DOWN, LEFT, RIGHT } ARROW;	//	열거형 선언, 0,1,2,3,4인 시작 숫자 값

int main(void)
{
	COLOR my_color = YELLOW;	//	변수 선언 및 YELLOW 대입
	int c;	//	변수 선언
	ARROW direction = UP;	//	변수 선언 및 UP 대입
	int d = direction;	//	변수 선언 및 derection 대입

	for (int c = CYAN; c <= BLACK; c++)	//	c를 0으로 초기화, 6보다 작거나 같다
	{
		d++;	//	들어오는 d값을 바로 1씩 증가
		d = d % DIVIDE_NUMBER;	//	4로 나눠 나머지 값을 내보냄

		if (c == my_color)	//	나머지값이 조건식을 만족하지 않으면 다시 되돌아가고 조건식을 만족한다면 블록 탈출
			break;
	}
	switch (d)
	{
	case UP: printf("Current Direction : UP");	//	UP이면 UP출력
		break;
	case DOWN: printf("Current Direction : DOWN");	// DOWN이면 DOWN출력
		break;
	case LEFT: printf("Current Direction : LEFT");	// LEFT이면 LEFT출력
		break;
	case RIGHT: printf("Current Direction : RIGHT");	//	RIGHT이면 RIGHT출력
		break;
	default: printf("ERROR\n");	//	이도 저도 아니면 ERROR 출력
		break;
	}
	return 0;
}