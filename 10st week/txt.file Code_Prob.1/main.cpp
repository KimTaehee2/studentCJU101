#include<stdio.h>

#pragma warning(disable:4996) // C4996 에러를 무시

#define MAX_NUMBER  50
#define MAX_STRING_NUMBER   100

int main(void)
{

    FILE* fp = NULL;    //  파일 포인터 초기화

    int num = 0;
    double Rnum = 0;
    int word;
    char words[MAX_NUMBER];

    printf("Integer : ");
    scanf_s("%d", &num);

    printf("Real Number(Enter up to 4 decimal places) : ");
    scanf_s("%lf", &Rnum);

    getchar();  //  개행문자 제거
    printf("Word : ");
    word = getchar();


    printf("Words : ");
    scanf_s("%s", words, MAX_NUMBER);

   

    fp = fopen("C:\\Users\\a2070\\Documents\\GitHub\\studentCJU101\\10st week\\txt.file Code_Prob.1\\File.txt", "w");   // 파일을 쓰기 모드로 열기

    if (fp == NULL) //  파일 포인터가 널 포인터면 파일 개방 실패
    {
        printf("File doesn't open\n");
        return 1;
    }

    fprintf(fp, "Integer : %d\n", num); //  파일에 정수 입력

    fprintf(fp, "Real Number : %.4lf\n", Rnum); //  파일에 실수 입력

    fprintf(fp, "Word : %c\n", word);   // 파일에 문자 입력

    fprintf(fp, "Words : %s", words);   //  파일에 문자열 입력


    fclose(fp); //  파일 포인터 닫기

    printf("\n");   //  파일에 입력한 것과 읽기모드를 구분하기 위한 줄바꿈
    printf("[File.txt]\n");
    fp = fopen("C:\\Users\\a2070\\Documents\\GitHub\\studentCJU101\\10st week\\txt.file Code_Prob.1\\File.txt", "r");   //  파일을 읽기 모드로 열기 
    
    if (fp == NULL) //  파일 포인터가 널 포인터면 파일 개방 실패
    {
        printf("File doesn't open\n");
        return 1;
    }

    while (feof(fp) == 0)   //  반환값이 0이 될때까지 반복
    {
        char ch[MAX_STRING_NUMBER];

        fgets(ch, MAX_STRING_NUMBER, fp); //  전체 읽기
        printf("%s", ch);   // 출력

    }
    fclose(fp); // 파일 포인터 닫기

    return 0;
}