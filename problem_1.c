// problem Name : write a program to sum number of n.

#include <stdio.h>

int main()
{
	int num;

	printf("Enter a number: ");
	// user given numb

	scanf("%d", &num);

	if (num < 0)
	{
		printf("Please enter a positive number.");
	}
	else
	{
		// here we run a while loop for print number. in this loop we add a condition . this condition is when num is largest of 0 . this time loop work . but when num is less then 0 . this time loop stop and every loop our num is decrease 1

		while (num > 0)
		{
			printf("%d\n", num);
			num -= 1;
		}
	}
};
