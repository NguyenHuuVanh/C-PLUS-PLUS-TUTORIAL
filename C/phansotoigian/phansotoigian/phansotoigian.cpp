#include <stdio.h>

int main()
{
	int a, b;
	printf("\nNhap tu so a : ");
	scanf_s("%d", &a);
	printf("Nhap mau so b:");
	scanf_s("%d", &b);
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	return a;
	int ucln = a, m, n;
	m = a / ucln;
	n = b / ucln;
	printf("Phan sotoi gian la: %d/%d", m, n);
	return 0;
}


