#include <stdio.h>

int main()
{
	int n,ReverseNumber=0;
	printf("Nhap n:");
	scanf_s("%d", &n);
	do
	{
		ReverseNumber =ReverseNumber*10 + n % 10;
	}
	while (n /= 10);
	printf("ReverseNumber of n is: %d\n",ReverseNumber);
	return 0;
}