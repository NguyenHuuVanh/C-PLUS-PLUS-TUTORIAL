#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() 
{
	int n;
	printf("\nnhap so nguyen duong n:"); scanf_s("%d", &n);
	if (n < 0) 
	{
		printf("Vui long nhap lai n>0!\n");
	}
	else
	{
		if (n==0)
		{
			printf("f0=0\n");
		}
		if (n == 1) 
		{
			printf("f1=1\n");
		}
		if (n >= 2)
		{
			int long long fn, f0 = 0, f1 = 1;
			for (size_t i = 2; i <=n; i++)
			{
				fn = f1 + f0;
				f1 = fn;
				f0 = f1;
			} 
			printf("\nf(%d)=%lld",n, fn);
		}
	}
	return 0;
}