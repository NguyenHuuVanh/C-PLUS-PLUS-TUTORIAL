#include <stdio.h>
#include <math.h>

int main()
{
	int h;
	printf("\nNhap chieu cao h:");
	scanf_s("%d", &h);
	if (h > 0)
	{
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j < 2*h; j++)
			{
				if (abs(h - j) <= (i - 1))
				{
					printf(" * ");
				}
				else printf("   ");
			}
			printf("\n");
		}
	}
	else printf("\nNhap lai h>0!");
}