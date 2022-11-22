#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#pragma warning(disable:4996) // C4996 ������ ����

#define MAX_NUMBER  20
#define STUDENT_NUMBER 5
#define DATA_NUMBER 3
#define GRADE_NUMBER1   90.0
#define GRADE_NUMBER2   80.0
#define GRADE_NUMBER3   70.0
#define SORT_NUMBER 5

typedef struct  //  ����ü ����
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
    Student ary[STUDENT_NUMBER];           // 5�� �л��� ����

    information_student(ary);          // �й�, �̸�, 3���� ���� �Է�
    grade_cal(ary);           // ����, ���, ���� ���

    printf("# Data before sorting...\n");
    print_data(ary);          // ���� �� ���
    descending_order(ary);           // ���� ������ �������� ����

    printf("\n# Data after sorting...\n");
    print_data(ary);          // ���� �� ���

    return 0;

}

void information_student(Student* pary) //  �л� ���� �Է� �Լ�
{

    for (int i = 0; i < STUDENT_NUMBER; i++)    //  �л� ��(5��) ��ŭ �Ʒ� ���� �ݺ�
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

void grade_cal(Student* pary)   //  ���� ��� �Լ�
{

    for (int i = 0; i < STUDENT_NUMBER; i++)
    {
        pary->res = pary->kor + pary->eng + pary->mat;  //  res�� �켱������ ���� ���ϰ� ����

        pary->avg = pary->res / DATA_NUMBER;    //  ��� �� ���

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

void descending_order(Student* pary)    //  �������� �Լ�
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

void print_data(Student* pary)  //  �л��� �й�, �̸�, ����, ������ �л� �� ��ŭ ����ϴ� �Լ�
{

    for (int i = 0; i < STUDENT_NUMBER; i++)
    {
        printf("%5d%5s%5d%5d%5d%5d%5.4lf%5c\n", pary->class_num, pary->name, pary->kor, pary->eng, pary->mat, pary->res, pary->avg, pary->grade);

        pary++;
    }
}