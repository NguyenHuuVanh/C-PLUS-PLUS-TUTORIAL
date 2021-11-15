#include <stdio.h>
#include <math.h>

int main()
{
	int cd, cr;
	printf("\nNhap chieu rong:");
	scanf_s("%d", &cr);
	printf("\nNhap chieu dai:");
	scanf_s("%d", &cd);
	for (int i = 1; i <=cd; i++)
	{
		for (int j = 1; j <=cr; j++)
		{
			if (i == 1 || j == 1 || i == cd||j==cr)
			{
				printf(" * ");
			}
			else printf("   ");
		}
		printf("\n");

	}
	return 0;
}