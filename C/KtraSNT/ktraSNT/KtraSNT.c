#include <stdio.h>

int main()
{
	int n;
	printf("\nNhap so nguyen duong n:");
	scanf_s("%d", &n);
	int Check = 1;
	for (int i=2; i <= n-1; i++)
	{
		if (n % i == 0)
		{
			Check = 0;
		}
		if (Check == 0)
		{
			printf("%d khong la SNT!\n", n);
		}
		else if (Check == 1)
		{
			printf("%d la SNT!\n", n);
		}
	}
	return 0;
}