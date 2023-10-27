#include <stdio.h>

int main()
{
	int n = 0, orginal = 0, reverse = 0, remainder, storeNum = 0, mainNum;

	printf("Enter your number: ");
	scanf("%d", &mainNum);

	for (int i = 1; i <= mainNum; i++)
	{

		n = i;

		if (n != 0)
		{
			if (n <= 9)
			{
				printf("%d\n", n);
			}
			else
			{

				remainder = n % 10;

				reverse = reverse * 10 + remainder;
				n /= 10;
				orginal = n;

				if (orginal == reverse)
				{

					printf("%d\n", i);
					reverse = 0;
				}
				else
				{
					reverse = 0;
				}
			}
		}
	}

	return 0;
}