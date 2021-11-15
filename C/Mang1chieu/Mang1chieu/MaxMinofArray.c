#include <stdio.h>

void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Nhap cac phan tu cua a[%d]:",i);
		scanf_s("%d", &a[i]);
	}
}

int Max(int a[], int n)
{
		int Max = a[0];
		for (int i = 0;  i < n; i++)
		{
			if (Max < a[i])
			{
				Max = a[i];
			}
		}
		return Max;
}

int Min(int a[], int n)
{
	int Min = a[0];
	for (int i = 0;  i < n;  i++)
	{
		if (Min > a[i])
		{
			Min = a[i];
		}
	}
	return Min;
}
int main()
{
	int a[1000];
	int n;
	printf("Nhap n:");
	scanf_s("%d", &n);
	nhap(a, n);
	printf("Max=%d\n", Max(a, n));
	printf("Min=%d", Min(a, n));
}
	
