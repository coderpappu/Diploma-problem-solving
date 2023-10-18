// তিনটি সংখ্যার মধ্যে ক্ষুদ্রতম সংখ্যাটি র্নিণয়ের প্রোগ্রাম

#include <stdio.h>

int main()
{
	int num1, num2, num3;

	printf("Enter your first number : ");
	scanf("%d", &num1);

	printf("Enter your second number : ");
	scanf("%d", &num2);

	printf("Enter your third number : ");
	scanf("%d", &num3);

	if (num1 < num2 && num1 < num3)
	{
		printf("The smallest number is Num One = %d", num1);
	}
	else if (num2 < num1 && num2 < num3)
	{
		printf("The smallest number is Num Two = %d", num2);
	}
	else
	{
		printf("The smallest number is Num Three = %d", num3);
	}
}