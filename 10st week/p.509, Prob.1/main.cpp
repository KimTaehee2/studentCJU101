#pragma warning(disable:4996) // C4996 ������ ����

#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBER	20
#define NAME	"Andy"
#define AGE	22
#define SEX	'm'
#define HEIGHT	187.5

struct marriage
{
	char name[MAX_NUMBER];	//	�̸��� ������ ���
	int age;	//	���̸� ������ ���
	char sex;	//	������ ������ ���
	double height;	//	Ű�� ������ ���
};

struct marriage m1 = { NAME,AGE,SEX,HEIGHT };
struct marriage* mp = &m1;

int main(void)
{
	printf("Name : %s\n", mp->name);	//	���� ��� ���� �����ڸ� ��������μ� �Ź� ��ȣ�� ����ϴ� ���� ���ŷο��� �ؼ���
	printf("Age : %d\n", mp->age);	//	mp->age�� (*mp).age�� �ٲܼ� ����(�������� ��������)
	printf("Sex : %c\n", mp->sex);
	printf("Height : %.1lf\n", mp->height);
	
	return 0;
}