#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, x, y;
	printf("\nNhap so nguyen duong x:");
	scanf_s("%d", &x);	
	printf("\nNhap so nguyen duong y:");
	scanf_s("%d", &y);
	a = abs(x);
    b = abs(y);
	if (a + b == 0)
	{
		printf("Ca hai so dieu bang 0!");
	}
	else if (a*b==0)
	{
		printf("Uoc chung lon nhat cua 2 so la: %d ",x + y);
	}
	else
	{
		while (a!=b)
		{
			if (a<b)
			{ 
				a -= b;
			}
			else
			{
				b -= a;
			}
			printf("Uoc chung lon nhat cua 2 so la %d", a);
		}
	}
	return 0;
}