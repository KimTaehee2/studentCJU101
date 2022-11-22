#pragma warning(disable:4996) // C4996 에러를 무시

#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBER	20
#define NAME	"Andy"
#define AGE	22
#define SEX	'm'
#define HEIGHT	187.5

struct marriage
{
	char name[MAX_NUMBER];	//	이름을 저장할 멤버
	int age;	//	나이를 저장할 멤버
	char sex;	//	성별을 저장할 멤버
	double height;	//	키를 저장할 멤버
};

struct marriage m1 = { NAME,AGE,SEX,HEIGHT };
struct marriage* mp = &m1;

int main(void)
{
	printf("Name : %s\n", mp->name);	//	간접 멤버 접근 연산자를 사용함으로서 매번 괄호를 사용하는 것이 번거로움을 해소함
	printf("Age : %d\n", mp->age);	//	mp->age를 (*mp).age로 바꿀수 있음(나머지도 마찬가지)
	printf("Sex : %c\n", mp->sex);
	printf("Height : %.1lf\n", mp->height);
	
	return 0;
}