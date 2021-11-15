#include <stdio.h>
#include <conio.h>

int main()
{
	int i,s=0,n;
	printf("Nhap n:");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++);
	if (n < 0)
	{
		printf("Nhap lai n>0!\n");
		return 0;
	}
	else if (n % 2 != 0) 
	{
		s = s + i;
	}
	else
	{
		printf("Khong tinh duoc!");
	}
	printf("Tong cac so le la %d\n", s);
	return 0;
}