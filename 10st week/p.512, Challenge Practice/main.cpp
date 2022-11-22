#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#pragma warning(disable:4996) // C4996 에러를 무시

#define MAX_NUMBER  20
#define STUDENT_NUMBER 5
#define DATA_NUMBER 3
#define GRADE_NUMBER1   90.0
#define GRADE_NUMBER2   80.0
#define GRADE_NUMBER3   70.0
#define SORT_NUMBER 5

typedef struct  //  구조체 선언
{
    int class_num;                  
    char name[MAX_NUMBER];           
    int kor, eng, mat;        
    int res;                  
    double avg;               
    char grade;               

} Student;


void information_student(Student* pary);
void grade_cal(Student* pary);
void descending_order(Student* pary);
void print_data(Student* pary);

int main(void)
{
    Student ary[STUDENT_NUMBER];           // 5명 학생의 성적

    information_student(ary);          // 학번, 이름, 3과목 점수 입력
    grade_cal(ary);           // 총점, 평균, 학점 계산

    printf("# Data before sorting...\n");
    print_data(ary);          // 정렬 전 출력
    descending_order(ary);           // 총점 순으로 내림차순 정렬

    printf("\n# Data after sorting...\n");
    print_data(ary);          // 정렬 후 출력

    return 0;

}

void information_student(Student* pary) //  학생 정보 입력 함수
{

    for (int i = 0; i < STUDENT_NUMBER; i++)    //  학생 수(5명) 만큼 아래 내용 반복
    {
        printf("ID : ");
        scanf_s("%d", &pary->class_num);

        printf("NAME : ");
        scanf_s("%s", pary->name, MAX_NUMBER);

        printf("KOREAN, ENGLISH, MATTH SCORE : ");
        scanf_s("%d%d%d", &pary->kor, &pary->eng, &pary->mat);

        pary++;

    }

}

void grade_cal(Student* pary)   //  학점 계산 함수
{

    for (int i = 0; i < STUDENT_NUMBER; i++)
    {
        pary->res = pary->kor + pary->eng + pary->mat;  //  res에 우선순위를 정해 더하고 저장

        pary->avg = pary->res / DATA_NUMBER;    //  평균 값 계산

        if (pary->avg >= GRADE_NUMBER1)
            pary->grade = 'A';

        else if (pary->avg >= GRADE_NUMBER2)
            pary->grade = 'B';

        else if (pary->avg >= GRADE_NUMBER3)
            pary->grade = 'C';

        else if (pary->avg < GRADE_NUMBER3)
            pary->grade = 'F';

        pary++;
    }

}

void descending_order(Student* pary)    //  내림차순 함수
{
    Student temp;
   
    int max;

    for (int i = 1; i < SORT_NUMBER; i++)
    {
        max = i;

        for (int j = i + 1; j < SORT_NUMBER; j++)
        {
            if (pary[max].res < pary[j].res)
            {
                max = j;
            }
        }
        if (max != i)
        {
            temp = pary[max];
            pary[max] = pary[i];
            pary[i] = temp;
        }
    }

}

void print_data(Student* pary)  //  학생의 학번, 이름, 점수, 학점을 학생 수 만큼 출력하는 함수
{

    for (int i = 0; i < STUDENT_NUMBER; i++)
    {
        printf("%5d%5s%5d%5d%5d%5d%5.4lf%5c\n", pary->class_num, pary->name, pary->kor, pary->eng, pary->mat, pary->res, pary->avg, pary->grade);

        pary++;
    }
}