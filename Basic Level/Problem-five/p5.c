// দ্বিঘাত সমীকরনের মূলসমূহ র্নিণয়ের প্রোগ্রাম ।

#include <stdio.h>
#include <math.h>

int main()
{
	int num1, num2, num3, d;
	printf("Enter your first number: ");
	scanf("%d", &num1);

	printf("Enter your second number; ");
	scanf("%d", &num2);

	printf("Enter your third number: ");
	scanf("%d", &num3);

	d = pow(num2, 2) - 4 * num1 * num3;

	if (d == 0)
	{
		int x = -num2 / (2 * num1);
		printf("Roots are real & equal & are: ", x);
	}
	else if (d > 0)
	{
		int x1 = (-num2 + sqrt(d)) / (2 * num1);
		int x2 = (-num2 - sqrt(d)) / (2 * num1);
		printf("Roots are real & unequal & are : ", x1, x2);
	}
	else
	{
		printf("The roots are imaginary");
	}
}