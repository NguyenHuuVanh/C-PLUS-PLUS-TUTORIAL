#include <stdio.h>
#include <math.h>

int main()
{
	int h, k;
	printf("\nNhap chieu cao h:");
	scanf_s("%d", &h);
	k = h - 1;
	for (int i = 0; i < h-1; i++)
	{
		for (int j = 0; j < (2 * h)-1; j++)
		{
			if (j == k+i || j == k-i )
			{
				printf(" * ");
			}
			else printf("   ");
		}
		printf("\n");
	}
	for (int i = 0; i < (2*h)-1; i++)
	{
		printf(" * ");	
	}
	return 0;
}