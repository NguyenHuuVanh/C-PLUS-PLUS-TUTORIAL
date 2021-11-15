#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Nhap a:");
	scanf_s("%d", &a);
	printf("Nhap b:");
	scanf_s("%d", &b);
	printf("Nhap c:");
	scanf_s("%d", &c);
	int max = a;
	int min = c;
	a > c;
	if (b > max && b>c)
	{
		printf("Max la %d", b);
		return max;
	}
	else if (b > min && b < a)				
	{
		printf("min la %d", c);
	}
	return min;
}