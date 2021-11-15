#include <stdio.h>
#include <math.h>

int main()
{
	int n, sum = 0, i;
	printf("Nhap n:");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
		printf("sum of Num  = %d\n",sum);
 return 1;
}

