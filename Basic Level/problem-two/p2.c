// আয়তক্ষেত্রের ক্ষেত্রফল নির্ণয়ের প্রোগ্রাম

#include <stdio.h>

int main()
{
	int length, width;

	printf("Enter length of rectangle: ");
	scanf("%d", &length);

	printf("Enter width of rectangle: ");
	scanf("%d", &width);

	int rectangleArea = length * width;
	printf("The area of rectangle is = %d", rectangleArea);
}