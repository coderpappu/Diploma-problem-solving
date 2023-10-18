// কোনো একটি সংখ্যা মৌলিক কি না তা র্নিণয়ের প্রোগ্রাম ।

#include <stdio.h>
int main()
{

	int num, count = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{

			count++;
			break;
		}
	};

	if (count == 0)
	{
		printf("This is a prime number");
	}
	else
	{
		printf("This is not a prime number");
	}
}
