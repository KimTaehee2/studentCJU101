#include <stdio.h>

int main(void)
{
	char ch;

	printf("Enter characters : ");
	scanf_s("%c", &ch);
	printf("%cThe ASCII code value of the character is %d.", ch, ch);

	return 0;
}