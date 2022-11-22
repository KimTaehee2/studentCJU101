#include<stdio.h>

#pragma warning(disable:4996) // C4996 ������ ����

#define MAX_NUMBER  50
#define MAX_STRING_NUMBER   100

int main(void)
{

    FILE* fp = NULL;    //  ���� ������ �ʱ�ȭ

    int num = 0;
    double Rnum = 0;
    int word;
    char words[MAX_NUMBER];

    printf("Integer : ");
    scanf_s("%d", &num);

    printf("Real Number(Enter up to 4 decimal places) : ");
    scanf_s("%lf", &Rnum);

    getchar();  //  ���๮�� ����
    printf("Word : ");
    word = getchar();


    printf("Words : ");
    scanf_s("%s", words, MAX_NUMBER);

   

    fp = fopen("C:\\Users\\a2070\\Documents\\GitHub\\studentCJU101\\10st week\\txt.file Code_Prob.1\\File.txt", "w");   // ������ ���� ���� ����

    if (fp == NULL) //  ���� �����Ͱ� �� �����͸� ���� ���� ����
    {
        printf("File doesn't open\n");
        return 1;
    }

    fprintf(fp, "Integer : %d\n", num); //  ���Ͽ� ���� �Է�

    fprintf(fp, "Real Number : %.4lf\n", Rnum); //  ���Ͽ� �Ǽ� �Է�

    fprintf(fp, "Word : %c\n", word);   // ���Ͽ� ���� �Է�

    fprintf(fp, "Words : %s", words);   //  ���Ͽ� ���ڿ� �Է�


    fclose(fp); //  ���� ������ �ݱ�

    printf("\n");   //  ���Ͽ� �Է��� �Ͱ� �б��带 �����ϱ� ���� �ٹٲ�
    printf("[File.txt]\n");
    fp = fopen("C:\\Users\\a2070\\Documents\\GitHub\\studentCJU101\\10st week\\txt.file Code_Prob.1\\File.txt", "r");   //  ������ �б� ���� ���� 
    
    if (fp == NULL) //  ���� �����Ͱ� �� �����͸� ���� ���� ����
    {
        printf("File doesn't open\n");
        return 1;
    }

    while (feof(fp) == 0)   //  ��ȯ���� 0�� �ɶ����� �ݺ�
    {
        char ch[MAX_STRING_NUMBER];

        fgets(ch, MAX_STRING_NUMBER, fp); //  ��ü �б�
        printf("%s", ch);   // ���

    }
    fclose(fp); // ���� ������ �ݱ�

    return 0;
}