#include <stdio.h>
#include <math.h>
int main()
{
	int n, dv, temp, sum = 0;
	printf("Nhap so nguyen duong co 3 chu so:"); scanf_s("%d", &n);
	temp = n;
	while (n>0)
	{
		dv =n % 10;
		sum += dv * dv * dv;
		n /= 10;
	}
	if (temp == sum)
	{
		printf("%d la so Armstrong!\n", temp);
	}
	else
	{
		printf("%d khong la so Armstrong!\n", temp);

	}
	return temp;
}