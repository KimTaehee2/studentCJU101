#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996) // C4996 에러를 무시

#define MAXNUMBER	80	// 문자열 크기 매크로 선언

int main(void)
{
	char str1[MAXNUMBER] = { NULL };
	char str2[MAXNUMBER] = { NULL };
	char str3[MAXNUMBER] = { NULL };
	char temp[MAXNUMBER] = { NULL };	// 문자의 길이를 임시저장할 변수 선언 및 초기화

	printf("Enter three words : ");
	scanf_s("%s %s %s", str1, MAXNUMBER, str2, MAXNUMBER, str3, MAXNUMBER);

	if (strcmp(str1, str2) > 0)	// str1이 str2보다 크면(사전에 나중에 오면)
	{
		strcpy(temp, str1);	// temp에 str1 대입
		strcpy(str1, str2);	// str1에 str2 대입
		strcpy(str2, temp);	// str2에 temp 대입
	}
	if (strcmp(str1, str3) > 0)	// str1이 str3보다 크면(사전에 나중에 오면)
	{
		strcpy(temp, str1);	// temp에 str1 대입
		strcpy(str1, str3);	// str1에 str3 대입
		strcpy(str3, temp);	// str3에 temp 대입
	}
	if (strcmp(str2, str3) > 0)	// str2가 str3보다 크면(사전에 나중에 오면)
	{
		strcpy(temp, str2);	// temp에 str2 대입
		strcpy(str2, str3);	// str2에 str3 대입
		strcpy(str3, temp);	// str3에 temp 대입
	}
	
	printf("%s %s %s\n", str1,str2,str3);

	return 0;

}