#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#pragma warning(disable:4996) // C4996 에러를 무시


#define MAX_PATH 256
#define NEXT_NUMBER 1

char* getExt_txt(char* fname)   //  파일 확장자 추출 함수
{
    static char buf[MAX_PATH] = ""; //  정적변수 선언
    char* ptr2 = NULL;

    ptr2 = strrchr(fname, '.');  //  문자열에서 마지막에 위치한 "." 검색

    if (ptr2 == NULL)    //  찾지 못한다면 NULL을 반환
    {
        return NULL;
    }

    strcpy(buf, ptr2 + NEXT_NUMBER);   //  "." 다음 문자를 buf에 복사

    printf("The [%s] file extension is [%s].\n", fname, ptr2);

    return buf; //  buf반환
}

char* getExt_string(char* fname)   //  파일명 추출 함수
{
    static char buf[MAX_PATH] = ""; //  정적변수 선언
    char* ptr1 = NULL;

    ptr1 = strrchr(fname, '\\');  //  문자열에서 마지막에 위치한 "." 검색
  

    if (ptr1 == NULL)    //  찾지 못한다면 NULL을 반환
        return NULL;

    strcpy(buf, ptr1 + NEXT_NUMBER);   //  "." 다음 문자를 buf에 복사


    printf("File name is [%s].\n", ptr1);

    return buf; //  buf반환
}



int main(void)
{
    FILE* fp = NULL;

    fp = fopen("C:\\Users\\a2070\\Documents\\GitHub\\Test1\\test.txt", "w");    //  Test1 폴더에 test.txt파일 생성

    if (fp == NULL) //  파일 포인터가 널 포인터면 파일 개방 실패
    {
        printf("File doesn't open\n");
        return 1;
    }

    fclose(fp); //  파일 포인터 닫기

    char file_adr[MAX_PATH] = { 0 }; //  입력할 파일 주소 크기 선언 및 초기화
    char* ptr = NULL;

    printf("Enter your file adress : ");
    scanf_s("%s", file_adr, MAX_PATH);

    printf("\n");

    ptr = getExt_string(file_adr);  //  파일명 추출 함수 
    ptr = getExt_txt(file_adr); //  파일 확장자 추출 함수 호출

    return 0;
}
