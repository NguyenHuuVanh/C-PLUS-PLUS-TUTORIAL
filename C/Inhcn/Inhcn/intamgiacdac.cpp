#include <stdio.h>
#include <math.h>

int main()
{
	int h;
	do
	{
		printf("\nNhap chieu cao h:");
		scanf_s("%d", &h);
	} while (h<0);
	for (int i = 1; i <= h; i++)
	{
		for (int j =1; j <=i; j++)
		{
			{
				printf(" * ");
			}
		}
		printf("\n");
	}
	return 0;
}