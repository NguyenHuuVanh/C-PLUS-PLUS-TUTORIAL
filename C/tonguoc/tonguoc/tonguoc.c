#include <stdio.h>
#include <conio.h>

int main()
{
	int n, i, Tonguoc=0;
	do
	{
		printf("\nNhap so nguyen duong n:");
		scanf_s("%d", &n);
	} while (n < 2);
	printf("\nCac uoc cua %d la:", n);
	for (i = 1; i < n / 2; i++)
	{
		if (n % i)
			continue;
		printf("%d,", i);
		Tonguoc += i;
	}
	printf("\n\nTong cac uoc la %d\n", Tonguoc);
}