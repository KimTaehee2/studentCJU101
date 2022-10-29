#include<stdio.h>

#define	PASSWORD 9273	// 내가 설정한 비밀번호


void pwcheck(int* a);	// 비밀번호를 입력받고 비교하는 함수 pwcheck 선언

int main(void)
{
	int pw = PASSWORD; // 내가 설정한 비밀번호를 정수형 변수 pw에 저장
	
	pwcheck(&pw); // pwcheck 함수 호출
	
	return 0;
}

void pwcheck(int* pw_sys)	//비밀번호를 입력받고 비교하는 함수 pwcheck, 매개변수는 main 함수의 pw의 값을 포인터로 받아옴.
{
	int pw_other; // 사용자가 입력할 비밀번호가 저장될 변수 pw_other 선언

	while (1)
	{
		printf("Enter the password : ");
		scanf_s("%d", &pw_other);

		if (*pw_sys == pw_other)	//내가 시스템에 저장한 비밀번호와 사용자가 입력한 비밀번호가 같다면
		{
			printf("Normal termination..\n");	//출력
			break;	//반복문 탈출
		}

		if( *pw_sys != pw_other )	//내가 시스템에 저장한 비밀번호와 사용자가 입력한 비밀번호가 다르다면

		{
			printf("Not matched, retry..\n");	//출력 후 다시 반복
			
		}
	}
}
