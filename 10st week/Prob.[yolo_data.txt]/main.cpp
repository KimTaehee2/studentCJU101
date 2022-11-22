#include<stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996) // C4996 에러를 무시

int main(void)
{
    FILE* fp1;
    FILE* fp2;
    
    fp1 = fopen("C:\\Users\\a2070\\Documents\\GitHub\\studentCJU101\\10st week\\Prob.[yolo_data.txt]\\yolo_label_data.txt", "r");
    fp2 = fopen("C:\\Users\\a2070\\Documents\\GitHub\\studentCJU101\\10st week\\Prob.[yolo_data.txt]\\yolo_bbox_data.txt", "r");

    if (fp1 == NULL)    //  yolo_lable 파일 예외 처리
    {
        printf("File is not open");
        return 1;
    }
    if (fp2 == NULL)    //  yolo_bbox 파일 예외 처리
    {
        printf("File is not open");
        return 1;
    }
    
    while (1)
    {
        char ch;

        ch = fgetc(fp1);    //  yolo_lable 파일 내용을 가져와 변수에 대입
        if (ch == EOF)  //  함수의 반환값이 EOF면 입력 종료
        {
            break;
        }
        putchar(ch);    //  파일에 입력되어있는 문자 출력
    }
    fclose(fp1);    //  파일 닫음

    while (1)
    {
        char ch;

        ch = fgetc(fp2);    //  yolo_bbox 파일 내용을 가져와 변수에 대입
        if (ch == EOF)  //  함수의 반환값이 EOF면 입력 종료
        {
            break;
        }
        putchar(ch);    //  파일에 입력되어있는 문자 출력
    }
    fclose(fp2);    //  파일 닫음

    return 0;
}