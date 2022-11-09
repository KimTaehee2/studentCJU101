#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996) // C4996 에러를 무시

#define MAXNUMBER	80	// 배열값 매크로 설정
#define STRINGZISE	9	// 문자 길이 매크로 설정

int main(void)
{
	char str[MAXNUMBER] = { 0 };	//str 문자열 변수 선언 및 초기화

	strcpy(str, "wine");	// str 배열에 "wine"을 복사(대입)
	strcat(str, "apple");	// str 배열에 "apple" 붙이기
	strncpy(str, "pear", 1);	//str 배열 뒤에 "pear" 문자열에서 첫번째 글자까지만 복사(대입)

	str[STRINGZISE] = '\0';	// 개행 문자가 입력된 위치에 널 문자 저장
	
	printf("%s, %d\n", str, (int)strlen(str));	//	str배열 출력 및 str배열의 길이값 출력

	return 0;
}