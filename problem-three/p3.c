// #বৃত্তের ক্ষেত্রফল র্নিণয়ের প্রোগ্রাম
#include <stdio.h>
#include <math.h>

int main()
{
	int radius;

	printf("Please enter the radius of a circle: ");
	scanf("%d", &radius);

	double area = 3.1416 * pow(radius, 2);

	printf("%lf", area);
}
