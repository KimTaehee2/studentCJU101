#include <stdio.h>
#include <stdlib.h>

#define LAST_NUMBER 2
#define DIVIDE_NUMBER   5
#define NUMBER_1    1

int main(void)

{
    int num;
    int* pn;    //  동적 할당할 그릇
    int i, j, cnt = 0;

    printf("> Please enter a positive number : ");
    scanf_s("%d", &num);

    pn = (int*)malloc(num * sizeof(int));   //  배열요소의 크기와 배열요수의 갯수를 곱한 크기 만큼 동적 할당 후 저장

    if (pn == NULL) //  동적할당이 되었는지 확인(예외처리)
    {
        printf("out of memory");
        exit(1);
    }

    for (i = 0; i < (num - NUMBER_1); i++) //  i가 입력한 수 -1 보다 작은동안 반복
    {
        pn[i] = i + LAST_NUMBER;  //  문자열에 값 대입
    }

    i = 0;
    while (1)
    {

        while ((pn[i] == 0) && (i < (num - LAST_NUMBER)))
        {
            i++;
        }   //  배열요소가 0인지 아닌지 확인

        if (i == (num - LAST_NUMBER))     //  i가 입력한 수-2와 같다면 블록 탈출
            break;

        for (j = i + NUMBER_1; j < (num - NUMBER_1); j++)
        {

            if ((pn[j] % pn[i]) == 0)   //  j를 i로 나눈게 0이라면
            {
                pn[j] = 0;  //  0대입
            }
        }

        i++;
    }

    for (i = 0; i < (num - LAST_NUMBER); i++)
    {
        if (pn[i] != 0)
            printf("%5d", pn[i]);   //  소수 출력

        else
            printf("%5c", 'X'); //  소수가 아닌것은 X로 바꿈

        if ((i + NUMBER_1) % DIVIDE_NUMBER == 0)   //  5번째에서 줄바꿈
        {
            printf("\n");
        }
    }

    free(pn);   //  동적 할당 해제


    return 0;

}