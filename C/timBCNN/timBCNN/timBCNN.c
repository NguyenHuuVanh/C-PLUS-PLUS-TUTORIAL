#include <stdio.h>

int main()
{
	int x, y;
	printf("\nNhap so nguyen duong x:"); scanf_s("%d", &x);
	printf("\nNhap so nguyen duong y:"); scanf_s("%d", &y);
	if (x >= 0 && y >= 0)
	{
		if (x == 0 && y == 0)
		{
			printf("Khong ton tai UCLN,BCNN!");
		}
		else if (x == 0 || y == 0)
		{
			printf("\nKhong ton tai BCNN,UCLN=%d\n", (x == 0) ? y : x);
		}
		else
		{
			int bc=x*y;
			while (x!=y)
			{
				if (x > y)
				{
					x = x - y;
				}
				else
				{
					y = y - x;
				}
			}
			printf("\nUCLN cua x,y la:%d", x);
			printf("\nBCNN cua x,y la:%d", bc / x);
		}
	}
	else
	{
		printf("\nNhap x,y >0!\n");
	}
	return 0;
}