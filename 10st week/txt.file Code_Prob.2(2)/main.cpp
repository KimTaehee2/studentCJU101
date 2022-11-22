#include <stdio.h>

#pragma warning(disable:4996) // C4996 에러를 무시

#define MAX_NUMBER  256

int main(void)
{
    char old_fname[MAX_NUMBER] = {};
    char new_fname[MAX_NUMBER] = {};

    printf("Enter your old file name : ");
    scanf_s("%s", old_fname, MAX_NUMBER);

    printf("\n");

    printf("Enter your new file name : ");
    scanf_s("%s", new_fname, MAX_NUMBER);

    if (rename(old_fname, new_fname) == 0)  //  "rename"함수의 동작이 성공적이라면 0값을 돌려줌
    {
        printf("File [%s] is successfully renamed to [%s]\n", old_fname, new_fname);
        
    }
    else    //  동작이 참이 아니라면
    {
        printf("File rename failed\n");
    }

    return 0;
}
