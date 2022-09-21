#include <stdio.h>

int main(void)
{
	double kg;
	double cm;
	double bmi;

	printf("weight(kg)and height(cm) Input: ");
	scanf_s("%lf%lf", &kg, &cm);

	cm = cm / 100;
	bmi = kg / (cm * cm);

	printf("%s", (bmi >= 20.0) && (bmi < 25.0) ? "It is the standard" : "I need to take care of my weight");

	return 0;
}