// দুটি সংখ্যার মধ্যে ক্ষুদ্রতম সংখ্যাটি র্নিণয়ের প্রোগ্রাম

#include <stdio.h>

int main()
{
	int num1, num2;

	printf("Enter your first number: ");
	scanf("%d", &num1);

	printf("Enter your second number: ");
	scanf("%d", &num2);

	if (num1 < num2)
	{
		printf("The smallest number is Number One = %d", num1);
	}
	else
	{
		printf("The smallest number is Number Two = %d", num2);
	}
}