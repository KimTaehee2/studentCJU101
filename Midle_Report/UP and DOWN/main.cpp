#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MINIMUM_NUMBER		0
#define MAXIMUM_NUMBER		50
#define CHNACE_NUMBER1		7
#define CHANCE_NUMBER2		3
#define HINT_NUMBER1		1
#define HINT_NUMBER2		4
#define COUNT_ADD			1
#define COUNT_LASTNUMBER	1

void game(int chance)
/* 반복문을 활용해 내가 입력한 숫자와 컴퓨터 숫자를 비교해
UP 또는 DOWN을 출력하고 내가 입력하는 횟수를 카운트하는 함수*/

{
	int sys_num = 0;	// 컴퓨터가 무작위 난수로 뽑은 난수 한 개를 저장하기 위한 변수 초기화
	int my_num = 0;	// 내가 입력하는 숫자를 저장하기 위한 변수 초기화
	int count = 0;	// 입력하는 횟수를 확인하기위한 변수 설정 및 초기화
	int hint_num = 0;	// 힌트를 만들기위한 변수 설정 및 초기화

	sys_num = rand() % MAXIMUM_NUMBER;	//0~50까지의 무작위 난수 중 하나를 sys_num에 저장 
	hint_num = rand() % HINT_NUMBER1 + HINT_NUMBER2;	// 무작위 난수 중 하나를 hint_num에 저장(범위는 1~5)


	while (1)	// while 반복문과 if문을 활용해 컴퓨터에서 저장한 숫자와 내가 입력한 숫자를 비교
	{
		printf("\t(%d) : ", count + COUNT_ADD);	// 횟수를 출력하기위해 0부터가 아닌 1을 더해 1부터 횟수를 출력

		printf("Enter an integer..(The range is 0 ~ 50) : ");
		scanf_s("%d", &my_num);

		printf("\n");

		if ((my_num < MINIMUM_NUMBER) || (my_num > MAXIMUM_NUMBER))	//내가 입력한 숫자가 난수를 설정한 범위 밖으로 벗어난 경우를 위해 "||"인 OR 조건문 활용
		{
			printf("Number is out of range!\n");
			printf("You Lose.. Retry!\n");
			break;
		}

		if (sys_num < my_num)	//컴퓨터가 저장한 정수 크기가 내가 입력한 정수 크기보다 작은 경우
		{
			printf("\tDOWN\n\n\n");
		}

		else if (sys_num > my_num)	// 컴퓨터가 저장한 정수 크기가 내가 입력한 정수 크기보다 큰 경우

		{
			printf("\tUP\n\n\n");
		}

		else if (sys_num == my_num) // 컴퓨터가 저장한 정수 크기가 내가 입력한 정수 크기와 같은 경우
		{
			printf("\tYou Win ^!^\n\n\n");
			break;
		}

		count++;	// 입력한 횟수를 확인

		if (count + COUNT_LASTNUMBER == chance)	// 마지막 기회에서 힌트를 알려주기 위해 if문 사용
		{
			printf("\tLast Chance!\n");
			printf("\tThe number is around %d\n", sys_num + hint_num);
		}

		if (count == chance)	//정해진 횟수가 내가 입력한 횟수가 같아지면
		{
			printf("\tYou Lose..You've exceeded the limit.\n\n");	// 실패문장 출력
			printf("\tThe number is %d\n", sys_num);
			break;	// 53행으로 이동
		}

	}
}

int main(void)
{
	int chance = 0;	// 횟수를 저장하기 위한 변수 초기화

	srand((unsigned)time(NULL));	//시간별로 무작위 난수가 생성

	chance = rand() % CHNACE_NUMBER1 + CHANCE_NUMBER2;	// 3~10까지의 무작위 난수를 chance에 저장

	printf("\n");

	printf("\t<Please enter %d times before..>", chance);

	printf("\n\n");

	game(chance);	// 8행 ~ 63행까지의 함수 호출

	return 0;
}

