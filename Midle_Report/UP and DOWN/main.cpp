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
/* �ݺ����� Ȱ���� ���� �Է��� ���ڿ� ��ǻ�� ���ڸ� ����
UP �Ǵ� DOWN�� ����ϰ� ���� �Է��ϴ� Ƚ���� ī��Ʈ�ϴ� �Լ�*/

{
	int sys_num = 0;	// ��ǻ�Ͱ� ������ ������ ���� ���� �� ���� �����ϱ� ���� ���� �ʱ�ȭ
	int my_num = 0;	// ���� �Է��ϴ� ���ڸ� �����ϱ� ���� ���� �ʱ�ȭ
	int count = 0;	// �Է��ϴ� Ƚ���� Ȯ���ϱ����� ���� ���� �� �ʱ�ȭ
	int hint_num = 0;	// ��Ʈ�� ��������� ���� ���� �� �ʱ�ȭ

	sys_num = rand() % MAXIMUM_NUMBER;	//0~50������ ������ ���� �� �ϳ��� sys_num�� ���� 
	hint_num = rand() % HINT_NUMBER1 + HINT_NUMBER2;	// ������ ���� �� �ϳ��� hint_num�� ����(������ 1~5)


	while (1)	// while �ݺ����� if���� Ȱ���� ��ǻ�Ϳ��� ������ ���ڿ� ���� �Է��� ���ڸ� ��
	{
		printf("\t(%d) : ", count + COUNT_ADD);	// Ƚ���� ����ϱ����� 0���Ͱ� �ƴ� 1�� ���� 1���� Ƚ���� ���

		printf("Enter an integer..(The range is 0 ~ 50) : ");
		scanf_s("%d", &my_num);

		printf("\n");

		if ((my_num < MINIMUM_NUMBER) || (my_num > MAXIMUM_NUMBER))	//���� �Է��� ���ڰ� ������ ������ ���� ������ ��� ��츦 ���� "||"�� OR ���ǹ� Ȱ��
		{
			printf("Number is out of range!\n");
			printf("You Lose.. Retry!\n");
			break;
		}

		if (sys_num < my_num)	//��ǻ�Ͱ� ������ ���� ũ�Ⱑ ���� �Է��� ���� ũ�⺸�� ���� ���
		{
			printf("\tDOWN\n\n\n");
		}

		else if (sys_num > my_num)	// ��ǻ�Ͱ� ������ ���� ũ�Ⱑ ���� �Է��� ���� ũ�⺸�� ū ���

		{
			printf("\tUP\n\n\n");
		}

		else if (sys_num == my_num) // ��ǻ�Ͱ� ������ ���� ũ�Ⱑ ���� �Է��� ���� ũ��� ���� ���
		{
			printf("\tYou Win ^!^\n\n\n");
			break;
		}

		count++;	// �Է��� Ƚ���� Ȯ��

		if (count + COUNT_LASTNUMBER == chance)	// ������ ��ȸ���� ��Ʈ�� �˷��ֱ� ���� if�� ���
		{
			printf("\tLast Chance!\n");
			printf("\tThe number is around %d\n", sys_num + hint_num);
		}

		if (count == chance)	//������ Ƚ���� ���� �Է��� Ƚ���� ��������
		{
			printf("\tYou Lose..You've exceeded the limit.\n\n");	// ���й��� ���
			printf("\tThe number is %d\n", sys_num);
			break;	// 53������ �̵�
		}

	}
}

int main(void)
{
	int chance = 0;	// Ƚ���� �����ϱ� ���� ���� �ʱ�ȭ

	srand((unsigned)time(NULL));	//�ð����� ������ ������ ����

	chance = rand() % CHNACE_NUMBER1 + CHANCE_NUMBER2;	// 3~10������ ������ ������ chance�� ����

	printf("\n");

	printf("\t<Please enter %d times before..>", chance);

	printf("\n\n");

	game(chance);	// 8�� ~ 63������� �Լ� ȣ��

	return 0;
}

