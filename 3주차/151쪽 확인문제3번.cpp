#include<stdio.h>
int main(void)

{
	int age = 25, chest = 95; 
	char size;               // 변수 저장
	if (age < 20)
	{
		if (chest < 85)
		{
			size = 'S';
		}
		else if (chest < 95)
		{
			size = 'M';
		}
		else
		{
			size = 'L';
		}            //나이가 20 미만이면 if~ else if~ else문에 만족하는 사이즈를 뽑아 37행으로 이동
	}
	else
	{
		if (chest < 90)
		{
			size = 'S';
		}
		else if (chest < 100)
		{
			size = 'M';
		}
		else
		{
			size = 'L';
		}
	}                // 나이가 20 이상이면 if ~ else if ~ else문에 만족하는 사이즈를 뽑아 37행으로 이동
	printf("Size is %c.", size);

	return 0;
}
