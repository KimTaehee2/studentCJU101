#include<stdio.h>

#define	PASSWORD 9273	// ���� ������ ��й�ȣ


void pwcheck(int* a);	// ��й�ȣ�� �Է¹ް� ���ϴ� �Լ� pwcheck ����

int main(void)
{
	int pw = PASSWORD; // ���� ������ ��й�ȣ�� ������ ���� pw�� ����
	
	pwcheck(&pw); // pwcheck �Լ� ȣ��
	
	return 0;
}

void pwcheck(int* pw_sys)	//��й�ȣ�� �Է¹ް� ���ϴ� �Լ� pwcheck, �Ű������� main �Լ��� pw�� ���� �����ͷ� �޾ƿ�.
{
	int pw_other; // ����ڰ� �Է��� ��й�ȣ�� ����� ���� pw_other ����

	while (1)
	{
		printf("Enter the password : ");
		scanf_s("%d", &pw_other);

		if (*pw_sys == pw_other)	//���� �ý��ۿ� ������ ��й�ȣ�� ����ڰ� �Է��� ��й�ȣ�� ���ٸ�
		{
			printf("Normal termination..\n");	//���
			break;	//�ݺ��� Ż��
		}

		if( *pw_sys != pw_other )	//���� �ý��ۿ� ������ ��й�ȣ�� ����ڰ� �Է��� ��й�ȣ�� �ٸ��ٸ�

		{
			printf("Not matched, retry..\n");	//��� �� �ٽ� �ݺ�
			
		}
	}
}
