#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996) // C4996 에러를 무시

#define MAXNUMBER	80	// 배열값 매크로 설정
#define LENGTH	5	// 문자열 길이

int main(void)
{
	char str[MAXNUMBER] = { NULL };	// 문자열 입력할 배열 선언 및 초기화
	char res_str[MAXNUMBER] = { NULL };	// 생략 문자열을 저장할 배열 선언 및 초기화
	char star[MAXNUMBER] = "*********";	// 생략 부분을 채울 문자열 저장
	int len;	//문자 길이를 저장할 변수 선언

	char *pstar = star;	// 생략 부분을 채울 문자열을 포인터에 저장
	

	printf("Enter word : ");
	scanf("%s", str);
	
	len = strlen(str);	//입력한 단어의 길이 계산

	if (strlen(str) <= LENGTH)	// 길이가 5이하면
	{
		strcpy(res_str,str);	// 그대로 복사
	}
	else // 5보다 크면
	{
		strncpy(res_str, str, LENGTH);	//5개의 문자 복사
		res_str[5] = '\0';	// 널문자 복사
		strncat(res_str, pstar, len - LENGTH);	//문자열 길이 만큼 별로 채움
	}

	printf("typed word : %s, omitted word : %s\n", str, res_str);


	return 0;
}