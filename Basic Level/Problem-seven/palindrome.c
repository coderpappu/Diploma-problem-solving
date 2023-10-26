#include <stdio.h>

int main()
{
	int n, orginal, reverse = 0, remainder;

	printf("Enter your number: ");
	scanf("%d", &n);
	orginal = n;

	while (n != 0)
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n = n / 10;
	};
	if (orginal == reverse)
	{
		printf("This number is Palindrome");
	}
	else
	{
		printf("This is not palindrome number");
		return 0;
	}
}